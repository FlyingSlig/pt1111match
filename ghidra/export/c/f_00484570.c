// FUNCTION: PORT1111 0x00484570
// name: FUN_00484570
// sig: undefined FUN_00484570(void * this, undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)


void __thiscall
FUN_00484570(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    *puVar2 = &PTR_FUN_004c69e0;
    puVar2[3] = param_3;
    puVar2[4] = param_4;
  }
  this_00 = *(void **)((int)this + 0xc);
  iVar1 = *(int *)((int)this_00 + 4);
  param_1 = puVar2;
  iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  FUN_004844d0(this_00,1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  return;
}

