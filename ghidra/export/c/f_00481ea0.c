// FUNCTION: PORT1111 0x00481ea0
// name: FUN_00481ea0
// sig: undefined FUN_00481ea0(int param_1)


void __fastcall FUN_00481ea0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *this;
  
  this = (undefined4 *)(*(int *)(param_1 + 8) + 0x94);
  iVar1 = FUN_00465d00(this);
  if (iVar1 != 0) {
    iVar1 = FUN_00465d00(this);
    uVar2 = iVar1 - 1;
    iVar1 = FUN_00465d00(this);
    FUN_00466bc0(this,iVar1 - 1,uVar2);
    FUN_00473200(*(int **)(param_1 + 8));
    return;
  }
  return;
}

