// FUNCTION: PORT1111 0x00433e30
// name: FUN_00433e30
// sig: undefined FUN_00433e30(int * param_1)


void __fastcall FUN_00433e30(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  if (DAT_004e21b4 != 0) {
    piStack_4 = param_1;
    (**(code **)(param_1[0x6f] + 4))();
    while ((DAT_004e21b4 != 0 &&
           (iVar2 = FUN_00433c30(param_1,&piStack_4), piVar1 = piStack_4, iVar2 != 0))) {
      (**(code **)(*piStack_4 + 8))();
      (**(code **)*piVar1)(1);
    }
    (**(code **)(param_1[0x6f] + 8))();
  }
  return;
}

