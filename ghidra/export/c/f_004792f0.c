// FUNCTION: PORT1111 0x004792f0
// name: FUN_004792f0
// sig: undefined FUN_004792f0(void * this, undefined4 * param_1)


void __thiscall FUN_004792f0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *param_1;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_00478ee0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}

