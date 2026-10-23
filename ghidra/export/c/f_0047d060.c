// FUNCTION: PORT1111 0x0047d060
// name: FUN_0047d060
// sig: uint FUN_0047d060(void * this, uint param_1)


uint __thiscall FUN_0047d060(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x8c);
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 0x8c)) {
      return 0;
    }
    uVar2 = puVar1[2];
    if (*(ushort *)(uVar2 + 0x2c) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return (*(int *)(uVar2 + 0x28) != 2) - 1 & uVar2;
}

