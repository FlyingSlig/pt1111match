// FUNCTION: PORT1111 0x0041d450
// name: FUN_0041d450
// sig: int FUN_0041d450(void * this, uchar * param_1)


int __thiscall FUN_0041d450(void *this,uchar *param_1)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6978;
  local_c = ExceptionList;
  piVar4 = (int *)**(int **)((int)this + 0x54);
  local_4 = 0;
  iVar3 = 1;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (piVar4 != *(int **)((int)this + 0x54)) {
    do {
      iVar2 = FUN_004662f0(piVar4 + 2,param_1);
      if (iVar2 != 0) {
        local_4 = 0xffffffff;
        FUN_00465e40(&param_1);
        ExceptionList = local_c;
        return iVar3;
      }
      piVar4 = (int *)*piVar4;
      iVar3 = iVar3 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar4 != (int *)*(int *)((int)this + 0x54));
  }
  ExceptionList = ppvVar1;
  local_4 = 0xffffffff;
  FUN_00465e40(&param_1);
  ExceptionList = local_c;
  return 0;
}

