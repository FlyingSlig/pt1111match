#include <windows.h>

extern int DAT_004bc854;
extern int DAT_004bc9f0;
extern int DAT_004bcbe0;
extern int DAT_004bcd30;

extern void __fastcall FUN_00469770(void *param_1);
extern void __fastcall FUN_00404500(int param_1);
extern void __fastcall FUN_00404570(void *param_1);
extern void __fastcall FUN_00407050(void *param_1);

// FUNCTION: PORT1111 0x00404570
void __fastcall FUN_00404570(void *param_1)
{
    *(void **)param_1 = &DAT_004bc9f0;
    FUN_00404500((int)param_1);
}
