// FUNCTION: PORT1111 0x0043ca20
// name: FUN_0043ca20
// sig: undefined FUN_0043ca20(void * this, int * param_1)


void __thiscall FUN_0043ca20(void *this,int *param_1)

{
  bool bVar1;
  void **ppvVar2;
  bool bVar3;
  void *this_00;
  undefined3 extraout_var;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7deb;
  local_c = ExceptionList;
  if ((*(byte *)(param_1 + 0xf) & 4) != 0) {
    piVar7 = (int *)**(int **)((int)this + 8);
    bVar1 = false;
    ExceptionList = &local_c;
    ppvVar2 = &local_c;
    if (piVar7 != *(int **)((int)this + 8)) {
      do {
        this_00 = (void *)FUN_00414c30(DAT_004e240c);
        if ((((this_00 != (void *)0x0) &&
             (bVar3 = FUN_004056c0(this_00,param_1), CONCAT31(extraout_var,bVar3) == 0)) &&
            ((*(byte *)((int)this_00 + 0x3c) & 4) != 0)) &&
           (iVar4 = FUN_00412330((int)this_00), iVar4 != 0)) {
          bVar1 = true;
          puVar5 = operator_new(0x34);
          local_4 = 0;
          if (puVar5 == (undefined4 *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = FUN_004326f0(puVar5);
          }
          piVar6[1] = piVar7[2];
          piVar6[5] = 1;
          local_4 = 0xffffffff;
          FUN_00412e90(piVar6);
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)((int)this + 8));
      ppvVar2 = ExceptionList;
      if (bVar1) {
        ExceptionList = local_c;
        return;
      }
    }
    ExceptionList = ppvVar2;
    iVar4 = (**(code **)(*param_1 + 0x88))();
    *(undefined4 *)((int)this + *(int *)(iVar4 + 0x34) * 4 + 0x10) = 0;
    thunk_FUN_00444d00((void *)param_1[0x2c]);
  }
  ExceptionList = local_c;
  return;
}

