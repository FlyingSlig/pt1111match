// FUNCTION: PORT1111 0x0043c960
// name: FUN_0043c960
// sig: undefined FUN_0043c960(void * this, int * param_1)


void __thiscall FUN_0043c960(void *this,int *param_1)

{
  bool bVar1;
  void *this_00;
  undefined3 extraout_var;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7dcb;
  local_c = ExceptionList;
  if (((*(byte *)(param_1 + 0xf) & 4) != 0) &&
     (piVar4 = (int *)**(int **)((int)this + 8), ExceptionList = &local_c,
     piVar4 != *(int **)((int)this + 8))) {
    do {
      this_00 = (void *)FUN_00414c30(DAT_004e240c);
      if ((this_00 != (void *)0x0) &&
         ((bVar1 = FUN_004056c0(this_00,param_1), CONCAT31(extraout_var,bVar1) == 0 &&
          ((*(byte *)((int)this_00 + 0x3c) & 4) != 0)))) {
        puVar2 = operator_new(0x34);
        local_4 = 0;
        if (puVar2 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = FUN_004326f0(puVar2);
        }
        local_4 = 0xffffffff;
        piVar3[1] = piVar4[2];
        piVar3[5] = -1;
        FUN_00412e90(piVar3);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 8));
  }
  ExceptionList = local_c;
  return;
}

