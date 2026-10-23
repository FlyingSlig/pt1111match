extern "C" void target(void);
__declspec(naked) void probe(void)
{
    __asm {
        dd target
        dd target + 4
        dd offset target + 8
    }
}
