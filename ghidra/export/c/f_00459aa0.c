// FUNCTION: PORT1111 0x00459aa0
// name: FUN_00459aa0
// sig: undefined4 FUN_00459aa0(int param_1)


undefined4 __fastcall FUN_00459aa0(int param_1)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this = (int *)(param_1 + 0x4c);
  local_18 = 0xe5;
  local_14 = 0xe6;
  local_10 = 0xe7;
  local_c = 0xe8;
  local_8 = 0xe9;
  local_4 = 0xea;
  iVar1 = FUN_00483b70(this,1,*(undefined4 *)(param_1 + 0x24),6,(int)&local_18,0xdf,0xe0,0xffff,0,1,
                       9,0xe2,0,0x810);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) | 1;
  *(undefined4 *)(param_1 + 0x2f0) = 2;
  FUN_00481030(*(void **)(param_1 + 0x2f4),1);
  if (*(void **)(param_1 + 0x2f4) != (void *)0x0) {
    FUN_004810d0(*(void **)(param_1 + 0x2f4),1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x30c) + 8);
  iVar3 = *(int *)(iVar1 + 0x290);
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x294) - iVar3 >> 2;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_0043d870(&DAT_004e27cc);
      (**(code **)(*this + 0x18))(puVar2[3],*puVar2,0,0,0,0,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_004828b0(this,*(int *)(*(int *)(param_1 + 0x30c) + 4));
  return 1;
}

