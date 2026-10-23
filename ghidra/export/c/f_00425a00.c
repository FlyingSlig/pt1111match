// FUNCTION: PORT1111 0x00425a00
// name: FUN_00425a00
// sig: undefined4 FUN_00425a00(void * this, int param_1)


undefined4 __thiscall FUN_00425a00(void *this,int param_1)

{
  undefined4 uVar1;
  uint3 uVar2;
  
  uVar1 = FUN_00439360(param_1,&param_1);
  uVar2 = (uint3)((uint)uVar1 >> 8);
  if ((char)uVar1 != '\0') {
    *(int *)((int)this + 0x10) = param_1;
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

