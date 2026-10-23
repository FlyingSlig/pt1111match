// FUNCTION: PORT1111 0x00478380
// name: FUN_00478380
// sig: undefined FUN_00478380(void * this, undefined4 param_1)


void __thiscall FUN_00478380(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (((*(byte *)((int)this + 0x2c) & 2) != 0) && ((*(byte *)((int)this + 0x28) & 4) == 0)) {
    (**(code **)(**(int **)(*(int *)((int)this + 0xc) + 0x10) + 0x30))(this);
    *(undefined4 *)((int)this + 0x10) = unaff_retaddr;
    (**(code **)(**(int **)(*(int *)((int)this + 0xc) + 0x10) + 0x2c))(this);
    *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) | 0x80;
    return;
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) | 0x80;
  return;
}

