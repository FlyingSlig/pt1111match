// FUNCTION: PORT1111 0x0040a570
// name: FUN_0040a570
// sig: undefined4 FUN_0040a570(void * this, undefined4 param_1)


undefined4 __thiscall FUN_0040a570(void *this,undefined4 param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x20) = param_1;
  iVar1 = FUN_00414c30(DAT_004e240c);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)((int)this + 0x1c) =
       *(int *)(*(int *)(iVar1 + 0x50) + 0x7c) * *(int *)(*(int *)(iVar1 + 0x50) + 0x78);
  *(undefined4 *)((int)this + 0x28) = 0xd8f10000;
  return 1;
}

