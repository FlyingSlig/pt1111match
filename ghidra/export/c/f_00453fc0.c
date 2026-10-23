// FUNCTION: PORT1111 0x00453fc0
// name: FUN_00453fc0
// sig: undefined FUN_00453fc0(void * param_1)


void __fastcall FUN_00453fc0(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x9c))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*piVar1 + 0xa4))();
      if (iVar2 != 0) {
        FUN_00453f50(param_1,piVar1);
      }
    }
  }
  return;
}

