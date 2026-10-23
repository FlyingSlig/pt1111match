// FUNCTION: PORT1111 0x00453f50
// name: FUN_00453f50
// sig: undefined4 FUN_00453f50(void * this, int * param_1)


undefined4 __thiscall FUN_00453f50(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1;
  if (*(int *)((int)this + 8) != 0x1a) {
    iVar2 = (**(code **)(*param_1 + 0xa4))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(piVar1[5] + 0x14))();
      if (iVar2 != 0) {
        param_1 = (int *)piVar1[4];
        FUN_0040a020(this,&param_1);
        (**(code **)(*piVar1 + 0xa0))(1);
        FUN_00453780((int)this);
        return 1;
      }
    }
  }
  return 0;
}

