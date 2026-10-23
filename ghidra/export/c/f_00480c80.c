// FUNCTION: PORT1111 0x00480c80
// name: FUN_00480c80
// sig: bool FUN_00480c80(void * this, uint param_1, uint param_2, uint param_3, undefined4 * param_4)


bool __thiscall FUN_00480c80(void *this,uint param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = FUN_004804c0(this,param_1,param_2,param_3,param_4);
    return bVar1;
  }
  if (param_1 != 0x10) {
    if (param_1 != 0x100) {
      bVar1 = FUN_004804c0(this,param_1,param_2,param_3,param_4);
      return bVar1;
    }
    if (param_2 != 0xd) {
      if (param_2 != 0x1b) {
        return false;
      }
      (**(code **)(*(int *)this + 0xb0))();
      return true;
    }
    (**(code **)(*(int *)this + 0xa8))();
  }
  return true;
}

