// FUNCTION: PORT1111 0x0046b0b0
// name: FUN_0046b0b0
// sig: undefined4 FUN_0046b0b0(void * this, undefined4 param_1, int param_2, int param_3)


undefined4 __thiscall FUN_0046b0b0(void *this,undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  uint *unaff_EBX;
  
  if (*(int *)((int)this + 4) == 2) {
    return 0;
  }
  if ((-1 < param_2) && (-1 < param_3)) {
    iVar2 = (**(code **)(*(int *)this + 4))();
    if (param_2 < iVar2) {
      iVar2 = (**(code **)(*(int *)this + 8))();
      if (param_3 < iVar2) {
        iVar2 = (**(code **)(*(int *)this + 0x30))();
        if (iVar2 != 0) {
          puVar3 = (ushort *)(**(code **)(*(int *)this + 0x2c))(iVar2,param_2,param_3);
          cVar1 = (**(code **)(*(int *)this + 0xc))();
          if (cVar1 != '\x10') {
            *unaff_EBX = (uint)(byte)*puVar3;
            (**(code **)(*(int *)this + 0x34))();
            return 1;
          }
          *unaff_EBX = (uint)*puVar3;
          (**(code **)(*(int *)this + 0x34))();
          return 1;
        }
      }
    }
  }
  return 0;
}

