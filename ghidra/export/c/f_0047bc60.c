// FUNCTION: PORT1111 0x0047bc60
// name: FUN_0047bc60
// sig: undefined4 * FUN_0047bc60(void * this, int param_1)


undefined4 * __thiscall FUN_0047bc60(void *this,int param_1)

{
  undefined2 *puVar1;
  
  *(undefined ***)this = &PTR_FUN_004c6680;
  *(int *)((int)this + 0xc) = param_1;
  if (param_1 == 0) {
    puVar1 = operator_new(0x18);
    if (puVar1 == (undefined2 *)0x0) {
      puVar1 = (undefined2 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined1 *)(puVar1 + 8) = 0;
      *(undefined1 *)((int)puVar1 + 0x11) = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
    }
    *(undefined2 **)((int)this + 0xc) = puVar1;
    *(int *)(puVar1 + 10) = *(int *)(puVar1 + 10) + 1;
  }
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 4) = 0xffff;
  return this;
}

