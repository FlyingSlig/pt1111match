#include "pt1111_funcs.h"

// FUN_00426b20 is __thiscall with one stack argument (ECX=this, `push 0` in
// the original); the generated header declares it __fastcall (arg in EDX).
// Model the call as a member so the compiler emits the thiscall sequence and
// bind the member symbol to the raw implementation.
struct CFUN_00426b20 { void Method(int); };
#pragma comment(linker, "/alternatename:?Method@CFUN_00426b20@@QAEXH@Z=?FUN_00426b20@@YIXPAXH@Z")

struct CM_00412740 {
    char pad[0x5c];
    int field_5c;
    char pad2[0x24];
    int field_84;
    int field_88;
    int field_8c;
    void Method(int a, int b);
    void DtorReset();
};

// FUNCTION: PORT1111 0x00405bf0
void __fastcall FUN_00405bf0(void *param_1)
{
    CM_00412740 *p = (CM_00412740 *)param_1;
    if (p->field_5c) {
        ((CFUN_00426b20 *)p->field_5c)->Method(0);
    }
    p->field_5c = 0;
    p->field_84 = -1;
    p->field_88 = -1;
    p->field_8c = -1;
    p->Method(-1, -1);
}
