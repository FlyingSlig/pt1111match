// FUNCTION: PORT1111 0x00450d40
// name: FUN_00450d40
// sig: undefined4 FUN_00450d40(int param_1, undefined4 param_2, undefined4 param_3)


undefined4 __cdecl FUN_00450d40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    return 0xffffff9a;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((*(int *)(param_1 + 0x80) == 8) && (*(int *)(param_1 + 0x84) == 0)) {
    do {
      if (*(int *)(param_1 + 0x40) == 0) {
        FUN_00450b40();
        *(undefined4 *)(param_1 + 0x40) = 0x4000;
        *(int *)(param_1 + 0x3c) = param_1 + 0x88;
      }
      iVar1 = *(int *)(param_1 + 0x44);
      uVar3 = FUN_00460550((int *)(param_1 + 0x30),4);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + (*(int *)(param_1 + 0x44) - iVar1);
    } while (uVar3 == 0);
    if (uVar3 == 1) {
      uVar3 = 0;
    }
  }
  if (((*(int *)(param_1 + 0x6c) != 0) && (uVar3 == 0)) && (iVar1 = FUN_00450b40(), iVar1 == -1)) {
    uVar3 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x80) == 8) {
    if (*(int *)(param_1 + 0x84) != 0) goto LAB_00450e20;
    uVar3 = FUN_004608b0(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x84) == 0) {
    param_3 = *(undefined4 *)(param_1 + 0x408c);
    param_2 = *(undefined4 *)(param_1 + 0x38);
  }
LAB_00450e20:
  iVar2 = *(int *)(param_1 + 0x40a4) + *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x74);
  *(char *)(iVar1 + 0x10) = (char)param_3;
  *(char *)(iVar1 + 0x11) = (char)((uint)param_3 >> 8);
  *(char *)(iVar1 + 0x12) = (char)((uint)param_3 >> 0x10);
  *(char *)(iVar1 + 0x13) = (char)((uint)param_3 >> 0x18);
  iVar1 = *(int *)(param_1 + 0x74);
  *(char *)(iVar1 + 0x15) = (char)((uint)iVar2 >> 8);
  *(char *)(iVar1 + 0x16) = (char)((uint)iVar2 >> 0x10);
  *(char *)(iVar1 + 0x14) = (char)iVar2;
  *(char *)(iVar1 + 0x17) = (char)((uint)iVar2 >> 0x18);
  if (*(int *)(param_1 + 0x5c) == 1) {
    iVar1 = *(int *)(param_1 + 0x74);
    *(undefined1 *)(iVar1 + 0x24) = 1;
    *(undefined1 *)(iVar1 + 0x25) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  *(char *)(iVar1 + 0x19) = (char)((uint)param_2 >> 8);
  *(char *)(iVar1 + 0x1a) = (char)((uint)param_2 >> 0x10);
  *(char *)(iVar1 + 0x18) = (char)param_2;
  *(char *)(iVar1 + 0x1b) = (char)((uint)param_2 >> 0x18);
  if (uVar3 == 0) {
    FUN_004505d0((undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x74),*(uint *)(param_1 + 0x78));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x74));
}

