// FUNCTION: PORT1111 0x0045e0e0
// name: FUN_0045e0e0
// sig: undefined FUN_0045e0e0(void * this, undefined1 * param_1)


void __thiscall FUN_0045e0e0(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 100) = 1;
  iVar1 = *(int *)((int)this + 0x54);
  if ((iVar1 == 0) ||
     ((uint)(*(int *)((int)this + 0x5c) - iVar1 >> 2) <=
      (uint)(*(int *)((int)this + 0x58) - iVar1 >> 2))) {
    FUN_0041eeb0((void *)((int)this + 0x50),*(undefined4 **)((int)this + 0x58),1,&param_1);
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x58);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 0x58) = puVar2 + 1;
  }
  param_1 = &stack0xfffffff0;
  FUN_0045cde0((undefined4 *)&stack0xfffffff0);
  FUN_0045d6f0(*(int *)((int)this + 0x54),*(int *)((int)this + 0x58));
  return;
}

