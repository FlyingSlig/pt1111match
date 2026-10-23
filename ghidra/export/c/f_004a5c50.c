// FUNCTION: PORT1111 0x004a5c50
// name: FUN_004a5c50
// sig: undefined FUN_004a5c50(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004a5c50(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(param_2 + 0x100) = param_3;
    *(float *)(param_2 + 0x80) = (float)param_3 * (float)_DAT_004c8428;
    *(int *)(param_2 + 0x108) = param_5;
    *(int *)(param_2 + 0x104) = param_4;
    *(float *)(param_2 + 0x84) = (float)param_4 * (float)_DAT_004c8428;
    *(int *)(param_2 + 0x110) = param_7;
    *(int *)(param_2 + 0x10c) = param_6;
    *(float *)(param_2 + 0x88) = (float)param_5 * (float)_DAT_004c8428;
    *(int *)(param_2 + 0x118) = param_9;
    *(int *)(param_2 + 0x114) = param_8;
    *(float *)(param_2 + 0x8c) = (float)param_6 * (float)_DAT_004c8428;
    *(int *)(param_2 + 0x11c) = param_10;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
    *(float *)(param_2 + 0x90) = (float)param_7 * (float)_DAT_004c8428;
    *(float *)(param_2 + 0x94) = (float)param_8 * (float)_DAT_004c8428;
    *(float *)(param_2 + 0x98) = (float)param_9 * (float)_DAT_004c8428;
    *(float *)(param_2 + 0x9c) = (float)param_10 * (float)_DAT_004c8428;
  }
  return;
}

