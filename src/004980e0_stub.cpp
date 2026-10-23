// pt1111match — STUB for 0x4980e0.
//
// This address is above CRT_START, so the stub skeleton does not generate it,
// but several game functions make raw cross-region calls to it (it is an
// unlisted SSE2 math/CRT helper).  A stub here registers the address mapping
// and lets those callers compare; the body is not compared (STUB).
//
// 0x4980e0 is called from 0x423b6f and four sites in FUN_0048a750/_
// FUN_0048aa00 etc.  It takes a double on the stack and returns long double.

// STUB: PORT1111 0x004980e0
__declspec(naked) void FUN_004980e0(void)
{
    __asm {
        ret
    }
}

// STUB: PORT1111 0x004a5670
__declspec(naked) void FUN_004a5670(void)
{
    __asm {
        ret
    }
}

// STUB: PORT1111 0x004a6d70
__declspec(naked) void FUN_004a6d70(void)
{
    __asm {
        ret
    }
}

// STUB: PORT1111 0x004a6af0
__declspec(naked) void FUN_004a6af0(void)
{
    __asm {
        ret
    }
}

// STUB: PORT1111 0x004a4dd0
__declspec(naked) void FUN_004a4dd0(void)
{
    __asm {
        ret
    }
}
