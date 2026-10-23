// FUNCTION: PORT1111 0x0047cf90
// name: FUN_0047cf90
// sig: int FUN_0047cf90(void * this, uint param_1)


int __thiscall FUN_0047cf90(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x8c);
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 0x8c)) {
      return 0;
    }
    if (*(ushort *)(puVar1[2] + 0x2c) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

