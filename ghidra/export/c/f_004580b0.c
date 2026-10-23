// FUNCTION: PORT1111 0x004580b0
// name: FUN_004580b0
// sig: undefined FUN_004580b0(void * this, undefined4 param_1)


void __thiscall FUN_004580b0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 8);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x10) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0xc);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 0xc) = puVar2 + 1;
    return;
  }
  FUN_00457e90((void *)((int)this + 4),*(undefined4 **)((int)this + 0xc),1,&param_1);
  return;
}

