// FUNCTION: PORT1111 0x00421060
// name: FUN_00421060
// sig: undefined FUN_00421060(int param_1)


void __fastcall FUN_00421060(int param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)(param_1 + 0x48);
  FUN_004786d0(*(void **)(param_1 + 0x14),
               ((*(int *)(param_1 + 0x68) - (DAT_004e2c30 >> (bVar1 & 0x1f))) +
               *(int *)(param_1 + 0x4c)) - DAT_004e2c30,
               ((*(int *)(param_1 + 0x6c) - (DAT_004e2c34 >> (bVar1 & 0x1f))) +
               *(int *)(param_1 + 0x54)) - DAT_004e2c34);
  return;
}

