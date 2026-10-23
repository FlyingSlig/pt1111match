// FUNCTION: PORT1111 0x0043c7d0
// name: FUN_0043c7d0
// sig: undefined FUN_0043c7d0(void * this, int param_1, int param_2, int param_3, int param_4)


void __thiscall FUN_0043c7d0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7dab;
  local_c = ExceptionList;
  piVar3 = (int *)**(int **)((int)this + 8);
  ExceptionList = &local_c;
  if (piVar3 != *(int **)((int)this + 8)) {
    do {
      puVar1 = operator_new(0x34);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_00432d10(puVar1);
      }
      piVar2[1] = piVar3[2];
      piVar2[5] = param_1;
      piVar2[6] = param_2;
      piVar2[7] = param_3;
      piVar2[8] = param_4;
      local_4 = 0xffffffff;
      FUN_00412e90(piVar2);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 8));
  }
  ExceptionList = local_c;
  return;
}

