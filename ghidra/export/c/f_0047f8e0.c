// FUNCTION: PORT1111 0x0047f8e0
// name: FUN_0047f8e0
// sig: undefined FUN_0047f8e0(void * this, undefined4 * param_1)


void __thiscall FUN_0047f8e0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x28);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

