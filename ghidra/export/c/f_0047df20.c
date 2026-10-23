// FUNCTION: PORT1111 0x0047df20
// name: FUN_0047df20
// sig: undefined4 FUN_0047df20(void * this, int * param_1, int param_2)


undefined4 __thiscall FUN_0047df20(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  LPCSTR pCVar6;
  UINT UVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba4f8;
  local_c = ExceptionList;
  for (puVar5 = (undefined4 *)**(undefined4 **)((int)this + 0x8c);
      puVar5 != *(undefined4 **)((int)this + 0x8c); puVar5 = (undefined4 *)*puVar5) {
    if (*(short *)(puVar5[2] + 0x2c) == (short)param_1[0xb]) {
      ExceptionList = &local_c;
      pvVar4 = (void *)FUN_00465cf0(&param_1);
      UVar7 = 0;
      local_4 = 0;
      puVar5 = FUN_00466970(pvVar4,(byte *)"ID em Uso (%d)");
      pCVar6 = (LPCSTR)FUN_00465e00(puVar5);
      FUN_0046ab50(pCVar6,UVar7);
      local_4 = 0xffffffff;
      FUN_00465e40(&param_1);
      ExceptionList = local_c;
      return 0;
    }
  }
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 0x4c))(this);
  if ((param_2 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x50))(), iVar2 == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x8c);
  iVar3 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
  FUN_0047db80((void *)((int)this + 0x88),1);
  *(int *)(iVar2 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return 1;
}

