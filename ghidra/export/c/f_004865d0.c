// FUNCTION: PORT1111 0x004865d0
// name: FUN_004865d0
// sig: uint FUN_004865d0(int * param_1)


uint __fastcall FUN_004865d0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  undefined4 uVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  uVar3 = 0;
  uVar2 = Ordinal_11(0,param_1,0);
  if (-1 < (int)uVar2) {
    uVar2 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,uVar3,unaff_ESI);
    uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
  }
  return uVar2;
}

