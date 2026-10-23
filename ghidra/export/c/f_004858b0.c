// FUNCTION: PORT1111 0x004858b0
// name: FUN_004858b0
// sig: undefined4 FUN_004858b0(int param_1)


undefined4 __fastcall FUN_004858b0(int param_1)

{
  LPMMCKINFO pmmcki;
  MMRESULT MVar1;
  LONG LVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  _MMCKINFO local_14;
  
  pmmcki = (LPMMCKINFO)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 8) = 0;
  MVar1 = mmioDescend(*(HMMIO *)(param_1 + 0x20),pmmcki,(MMCKINFO *)0x0,0);
  if (MVar1 != 0) {
    return 0x80004005;
  }
  if (pmmcki->ckid != 0x46464952) {
    return 0x80004005;
  }
  if (*(int *)(param_1 + 0x40) != 0x45564157) {
    return 0x80004005;
  }
  local_14.ckid = 0x20746d66;
  MVar1 = mmioDescend(*(HMMIO *)(param_1 + 0x20),&local_14,pmmcki,0x10);
  if (MVar1 != 0) {
    return 0x80004005;
  }
  if (local_14.cksize < 0x10) {
    return 0x80004005;
  }
  LVar2 = mmioRead(*(HMMIO *)(param_1 + 0x20),(HPSTR)&local_24,0x10);
  if (LVar2 != 0x10) {
    return 0x80004005;
  }
  if ((short)local_24 == 1) {
    puVar3 = operator_new(0x12);
    *(undefined4 **)(param_1 + 8) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 0x80004005;
    }
    *puVar3 = local_24;
    puVar3[1] = local_20;
    puVar3[2] = local_1c;
    puVar3[3] = local_18;
    *(undefined2 *)(*(int *)(param_1 + 8) + 0x10) = 0;
  }
  else {
    local_28 = 0;
    LVar2 = mmioRead(*(HMMIO *)(param_1 + 0x20),(HPSTR)&local_28,2);
    if (LVar2 != 2) {
      return 0x80004005;
    }
    puVar3 = operator_new((local_28 & 0xffff) + 0x12);
    *(undefined4 **)(param_1 + 8) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 0x80004005;
    }
    *puVar3 = local_24;
    puVar3[1] = local_20;
    puVar3[2] = local_1c;
    puVar3[3] = local_18;
    *(undefined2 *)(*(int *)(param_1 + 8) + 0x10) = (undefined2)local_28;
    uVar4 = mmioRead(*(HMMIO *)(param_1 + 0x20),(HPSTR)(*(int *)(param_1 + 8) + 0x12),
                     local_28 & 0xffff);
    if (uVar4 != (local_28 & 0xffff)) goto LAB_00485a00;
  }
  MVar1 = mmioAscend(*(HMMIO *)(param_1 + 0x20),&local_14,0);
  if (MVar1 == 0) {
    return 0;
  }
LAB_00485a00:
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return 0x80004005;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}

