// FUNCTION: PORT1111 0x0043d570
// name: FUN_0043d570
// sig: undefined FUN_0043d570(void * this, int param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4)


void __thiscall
FUN_0043d570(void *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar6 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7e9b;
  local_c = ExceptionList;
  piVar4 = (int *)**(int **)((int)this + 8);
  bVar1 = false;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (piVar4 != *(int **)((int)this + 8)) {
    do {
      iVar3 = FUN_0043cdf0((void *)piVar4[2],(int)puVar6);
      if (iVar3 != 0) {
        if (*(int *)(piVar4[2] + 4) == param_1) {
          ExceptionList = local_c;
          return;
        }
        FUN_0043ce50((void *)piVar4[2],(int)puVar6);
      }
      iVar3 = piVar4[2];
      if (*(int *)(iVar3 + 4) == param_1) {
        if (*(int *)(iVar3 + 0x10) != 0) {
          ExceptionList = local_c;
          return;
        }
        bVar1 = true;
        FUN_0043d150(iVar3);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 8));
    ppvVar2 = ExceptionList;
    if (bVar1) goto LAB_0043d68d;
  }
  ExceptionList = ppvVar2;
  piVar4 = (int *)FUN_00414c30(DAT_004e240c);
  param_3 = operator_new(0x28);
  puVar6 = (undefined4 *)0x0;
  local_4 = 0;
  if (param_3 != (undefined4 *)0x0) {
    puVar6 = FUN_0043cf10(param_3);
  }
  puVar6[1] = param_1;
  puVar6[2] = param_2;
  puVar6[3] = 0;
  puVar6[5] = param_4;
  local_4 = 0xffffffff;
  param_3 = puVar6;
  iVar3 = (**(code **)(*piVar4 + 0x88))();
  puVar6[6] = *(undefined4 *)(iVar3 + 0x34);
  FUN_0043d150((int)puVar6);
  iVar3 = *(int *)((int)this + 8);
  iVar5 = FUN_00413870(iVar3,*(undefined4 *)(iVar3 + 4),&param_3);
  FUN_0043d4d0((void *)((int)this + 4),1);
  *(int *)(iVar3 + 4) = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
LAB_0043d68d:
  iVar3 = *(int *)((int)this + 0x10);
  if (0 < iVar3) {
    iVar5 = 0;
    for (puVar6 = (undefined4 *)**(undefined4 **)((int)this + 8);
        puVar6 != *(undefined4 **)((int)this + 8); puVar6 = (undefined4 *)*puVar6) {
      iVar5 = iVar5 + *(int *)(puVar6[2] + 0xc);
    }
    iVar5 = (*(int *)(*(int *)((int)this + 0x14) + 0x38) - iVar3) - iVar5;
    if (0 < iVar5) {
      *(int *)((int)this + 0x10) = iVar3 + iVar5;
    }
    iVar3 = *(int *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0x10) = 0;
    FUN_0043d310(this,iVar3);
  }
  ExceptionList = local_c;
  return;
}

