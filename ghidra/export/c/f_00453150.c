// FUNCTION: PORT1111 0x00453150
// name: FUN_00453150
// sig: undefined FUN_00453150(void * param_1)


void __fastcall FUN_00453150(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_00413490(DAT_004e240c);
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_00487c40((int)param_1 + 8);
    return;
  }
  if (*(int *)(iVar1 + 8) == 1) {
    iVar1 = FUN_00453b70(*(int *)(DAT_004e240c + 0x21c));
    if (((*(byte *)(iVar1 + 0x3c) & 8) != 0) && (*(int *)(iVar1 + 0xf8) != 0)) {
      iVar1 = FUN_004056a0(iVar1);
      uVar3 = 4;
      if (iVar1 == 0) goto LAB_004531a5;
    }
    uVar3 = 2;
  }
  else {
    uVar3 = 3;
  }
LAB_004531a5:
  if (*(int *)((int)param_1 + 0x2c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x2c) + 0x1c);
  }
  if (uVar2 != uVar3) {
    FUN_00487cd0((void *)((int)param_1 + 8),(ushort)uVar3);
  }
  FUN_00452c30(param_1,1);
  return;
}

