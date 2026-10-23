import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
public class CountFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        int n = 0; long bytes = 0; int thunk = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (f.isThunk()) thunk++;
            n++; bytes += f.getBody().getNumAddresses();
        }
        println("FUNC_COUNT " + n);
        println("THUNK_COUNT " + thunk);
        println("FUNC_CODE_BYTES " + bytes);
    }
}
