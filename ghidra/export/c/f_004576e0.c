// FUNCTION: PORT1111 0x004576e0
// name: FUN_004576e0
// sig: undefined4 FUN_004576e0(void * this, int param_1)


undefined4 __thiscall FUN_004576e0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  iVar2 = 0;
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 0xc)) {
      return 0;
    }
    if (iVar2 == param_1) break;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  }
  return *puVar1;
}

