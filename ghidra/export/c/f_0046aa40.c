// FUNCTION: PORT1111 0x0046aa40
// name: FUN_0046aa40
// sig: undefined4 FUN_0046aa40(void * this, HINSTANCE param_1, undefined4 * param_2, void * param_3)


undefined4 __thiscall FUN_0046aa40(void *this,HINSTANCE param_1,undefined4 *param_2,void *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  HICON pHVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9c0b;
  local_c = ExceptionList;
  DAT_004e2c24 = param_1;
  if (param_2[0x13] == 0) {
    ExceptionList = &local_c;
    puVar2 = operator_new(0x18);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00401cf0(puVar2);
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x78) = puVar2;
    FUN_00465bf0(puVar2,param_1,0x84);
  }
  else {
    ExceptionList = &local_c;
    *(undefined4 *)((int)this + 0x78) = param_2[0x13];
  }
  pHVar3 = LoadIconA(DAT_004e2c24,(LPCSTR)0x80);
  *(HICON *)((int)this + 0x70) = pHVar3;
  puVar2 = param_2;
  puVar5 = (undefined4 *)((int)this + 8);
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(void **)((int)this + 0x6c) = param_3;
  bVar1 = FUN_0046a070(param_3,(int)param_2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (*(int **)((int)this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x6c) + 4))(1);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    FUN_004681f0("Invalid configuration. Please install the program.");
    ExceptionList = local_c;
    return 0;
  }
  FUN_0048a270(0x14);
  ExceptionList = local_c;
  return 1;
}

