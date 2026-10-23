// FUNCTION: PORT1111 0x00406e20
// name: FUN_00406e20
// sig: int FUN_00406e20(int param_1)


int __fastcall FUN_00406e20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_28 [10];
  
  uVar3 = 0;
  local_28[0] = -1;
  local_28[1] = 0xffffffff;
  local_28[2] = FUN_004267d0(*(void **)(param_1 + 0x40),local_28);
  local_28[0] = 0;
  local_28[1] = 0xffffffff;
  local_28[3] = FUN_004267d0(*(void **)(param_1 + 0x40),local_28);
  local_28[0] = 1;
  local_28[1] = 0xffffffff;
  local_28[4] = FUN_004267d0(*(void **)(param_1 + 0x40),local_28);
  local_28[0] = 1;
  local_28[1] = 0;
  local_28[5] = FUN_004267d0(*(void **)(param_1 + 0x40),local_28);
  local_28[0] = 1;
  local_28[1] = 1;
  local_28[6] = FUN_004267d0(*(void **)(param_1 + 0x40),local_28);
  local_28[0] = 0;
  local_28[1] = 1;
  local_28[7] = FUN_004267d0(*(void **)(param_1 + 0x40),local_28);
  local_28[0] = -1;
  local_28[1] = 1;
  local_28[8] = FUN_004267d0(*(void **)(param_1 + 0x40),local_28);
  local_28[0] = -1;
  local_28[1] = 0;
  local_28[9] = FUN_004267d0(*(void **)(param_1 + 0x40),local_28);
  iVar4 = 0;
  do {
    iVar2 = local_28[iVar4 + 2];
    if (((iVar2 != 0) && (iVar1 = FUN_00426ec0(iVar2), iVar1 != 0)) &&
       (iVar2 = FUN_00426ec0(iVar2), (*(uint *)(iVar2 + 0x3c) & 0x4000) != 0)) {
      uVar3 = uVar3 + (1 << ((byte)iVar4 & 0x1f));
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  iVar4 = 0;
  if (((uVar3 & 1) != 0) && ((uVar3 & 0x10) != 0)) {
    iVar4 = 3;
  }
  if (((uVar3 & 4) != 0) && ((uVar3 & 0x40) != 0)) {
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = 4;
  }
  if (((uVar3 & 2) != 0) && ((uVar3 & 0x20) != 0)) {
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = 2;
  }
  if ((uVar3 & 8) == 0) {
    return iVar4;
  }
  if (-1 < (char)uVar3) {
    return iVar4;
  }
  if (iVar4 != 0) {
    return 0;
  }
  return 1;
}

