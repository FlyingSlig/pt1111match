// FUNCTION: PORT1111 0x004131e0
// name: FUN_004131e0
// sig: undefined FUN_004131e0(void * this, int * param_1, int param_2)


void __thiscall FUN_004131e0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b616b;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  if ((param_1 != (int *)0x0) && (param_1[0x1f] == 0)) {
    ExceptionList = &local_c;
    iVar1 = FUN_00412b60((int)param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0xa0))(0);
      param_1[0x1f] = 1;
      FUN_00405ad0(param_1,-1,-1);
      FUN_0043c180(DAT_004e2408,param_1,(int)*(short *)(param_1[0x10] + 0x4e),
                   (int)*(short *)(param_1[0x10] + 0x4c));
      iVar1 = (**(code **)(*param_1 + 0x20))();
      if (iVar1 != -1) {
        iVar1 = param_1[4];
        (**(code **)(*param_1 + 0x20))();
        this_00 = (void *)FUN_0040af10(DAT_004e2418);
        FUN_0040a970(this_00,iVar1);
        *(undefined4 *)((int)this + 0x100) = 0xffffffff;
      }
      puVar2 = operator_new(0x34);
      uStack_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar3 = FUN_004317a0(puVar2);
      }
      piVar3[1] = param_1[4];
      uStack_4 = 0xffffffff;
      if (param_2 == 0) {
        FUN_00412e90(piVar3);
      }
      else {
        (**(code **)(*piVar3 + 8))();
        (**(code **)*piVar3)(1);
      }
      FUN_00453a00(*(void **)((int)this + 0x21c),param_1);
    }
  }
  ExceptionList = local_c;
  return;
}

