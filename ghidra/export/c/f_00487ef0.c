// FUNCTION: PORT1111 0x00487ef0
// name: FUN_00487ef0
// sig: undefined4 FUN_00487ef0(void * this, undefined4 param_1)


undefined4 __thiscall FUN_00487ef0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00468ef0(DAT_004e2b14,(ushort)param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  FUN_00409f80((void *)((int)this + 0x18),1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  *(undefined4 *)(iVar2 + 0xa4) = 0;
  if ((*(int *)((int)this + 0x2c) != 0) &&
     (iVar2 = FUN_0047e030(*(void **)(*(int *)((int)this + 4) + 0x24),iVar2,
                           *(int **)((int)this + 0x28),1), iVar2 == 0)) {
    return 0;
  }
  return 1;
}

