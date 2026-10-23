import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.*;
import java.io.*;

public class ExportData extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outRoot = new File(args.length > 0 ? args[0] : "ghidra/export");
        outRoot.mkdirs();
        PrintWriter tsv = new PrintWriter(new FileWriter(new File(outRoot, "data.tsv")));
        tsv.println("addr\tname\tsize\tdataType\tmemType");
        SymbolTable symTable = currentProgram.getSymbolTable();
        SymbolIterator it = symTable.getAllSymbols(true);
        int n = 0;
        java.util.Set<String> types = new java.util.HashSet<>();
        while (it.hasNext() && !monitor.isCancelled()) {
            Symbol s = it.next();
            if (s == null) continue;
            types.add(s.getSymbolType().toString());
            if (!"Code Symbol".equals(s.getSymbolType().toString())) {
                // skip functions
                if (s.getAddress() == null) continue;
                if (currentProgram.getFunctionManager().getFunctionAt(s.getAddress()) != null) continue;
            }
            if (s.getAddress() == null) continue;
            var block = currentProgram.getMemory().getBlock(s.getAddress());
            String mem = block != null ? block.getName() : "?";
            var data = getDataAt(s.getAddress());
            int size = data != null ? data.getLength() : 0;
            String dt = data != null && data.getDataType() != null ? data.getDataType().getName() : "";
            tsv.printf("%08x\t%s\t%d\t%s\t%s%n", s.getAddress().getOffset(), s.getName(), size, dt, mem);
            n++;
        }
        tsv.close();
        println("Exported " + n + " symbols");
        println("Types seen: " + types);
    }
}
