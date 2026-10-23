import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;

/**
 * Headless export for the matching decompilation.
 *
 * Usage (analyzeHeadless):
 *   -postScript ExportDecomp.java <output-dir>
 *
 * Produces:
 *   <output-dir>/functions.tsv   addr, name, size, thunk, signature
 *   <output-dir>/c/f_<addr>.c    decompiled body with reccmp annotation
 *                                // FUNCTION: PT1111 0x<addr>
 */
public class ExportDecomp extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outRoot = new File(args.length > 0 ? args[0] : "ghidra/export");
        File cDir = new File(outRoot, "c");
        cDir.mkdirs();

        DecompInterface dec = new DecompInterface();
        dec.setSimplificationStyle("decompile");
        if (!dec.openProgram(currentProgram)) {
            println("EXPORT_FAIL cannot open decompiler");
            return;
        }

        PrintWriter tsv = new PrintWriter(new FileWriter(new File(outRoot, "functions.tsv")));
        tsv.println("addr\tname\tsize\tthunk\tsig");

        int ok = 0, fail = 0;
        long t0 = System.currentTimeMillis();
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            long off = f.getEntryPoint().getOffset();
            String addr = String.format("%08x", off);
            boolean thunk = f.isThunk();
            String sig = f.getSignature().getPrototypeString();
            tsv.printf("%08x\t%s\t%d\t%d\t%s%n", off, f.getName(),
                    f.getBody().getNumAddresses(), thunk ? 1 : 0,
                    sig.replace('\t', ' ').replace('\n', ' '));

            if (thunk) {
                continue; // thunks are linker-generated, no source
            }
            DecompileResults r = dec.decompileFunction(f, 20, monitor);
            if (r.decompileCompleted() && r.getDecompiledFunction() != null) {
                String c = r.getDecompiledFunction().getC();
                PrintWriter w = new PrintWriter(new FileWriter(new File(cDir, "f_" + addr + ".c")));
                w.println("// FUNCTION: PORT1111 0x" + addr);
                w.println("// name: " + f.getName());
                w.println("// sig: " + sig.replace('\n', ' '));
                w.println();
                w.print(c);
                w.close();
                ok++;
            } else {
                PrintWriter w = new PrintWriter(new FileWriter(new File(cDir, "f_" + addr + ".failed")));
                w.println(f.getName() + " : " + r.getErrorMessage());
                w.close();
                fail++;
            }
            if ((ok + fail) % 500 == 0) {
                long sec = (System.currentTimeMillis() - t0) / 1000;
                println(String.format("EXPORT_PROGRESS %d ok=%d fail=%d %ds",
                        ok + fail, ok, fail, sec));
            }
        }
        tsv.close();
        dec.dispose();
        println(String.format("EXPORT_DONE ok=%d fail=%d total=%d", ok, fail, ok + fail));
    }
}
