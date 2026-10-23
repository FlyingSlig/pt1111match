// FUNCTION: PORT1111 0x004460b0
// name: FUN_004460b0
// sig: bool FUN_004460b0(void * this, ushort param_1, ushort param_2)


bool __thiscall FUN_004460b0(void *this,ushort param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = FUN_0044a7e0((void *)((int)this + 0x4c),param_1);
  if (iVar1 == 0) {
    switch((uint)param_1) {
    case 1:
    case 3:
    case 4:
    case 5:
      *(uint *)((int)this + 0x48) = (uint)param_1;
      (**(code **)(*(int *)this + 0xa8))();
      FUN_0044a700();
      return true;
    case 2:
      FUN_0044a6c0((int)this + 0x4c);
      break;
    default:
      FUN_0044a700();
    }
    iVar1 = FUN_00480c10(this,param_1,param_2);
    return iVar1 != 0;
  }
  return true;
}

