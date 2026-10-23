// FUNCTION: PORT1111 0x0047bf20
// name: FUN_0047bf20
// sig: undefined4 FUN_0047bf20(void * this, int param_1)


undefined4 __thiscall FUN_0047bf20(void *this,int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined2 **)((int)this + 0xc);
  if (*(int *)(puVar1 + 2) != 0) {
    iVar2 = FUN_00475080(param_1);
    *(int *)(puVar1 + 6) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    FUN_0047bea0(puVar1);
  }
  return 1;
}

