// FUNCTION: PORT1111 0x00459d70
// name: FUN_00459d70
// sig: undefined FUN_00459d70(int param_1)


void __fastcall FUN_00459d70(int param_1)

{
  int *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x308) + 0x2c))();
  piVar2 = (int *)FUN_00482890((void *)(param_1 + 0x308),iVar1);
  this = (int *)(param_1 + 0x5c4);
  *(int *)(param_1 + 0x884) = piVar2[1];
  (**(code **)(*(int *)(param_1 + 0x5c4) + 0x38))();
  iVar3 = FUN_0045c200(*(undefined **)(param_1 + 0x884));
  puVar4 = FUN_0045c230(*(int *)(param_1 + 0x884),iVar3);
  iVar1 = iVar3;
  while (puVar4 != (undefined *)0x0) {
    (**(code **)(*this + 0x18))(puVar4,iVar1,0,0,0,0,1);
    iVar1 = iVar1 + 1;
    puVar4 = FUN_0045c230(*(int *)(param_1 + 0x884),iVar1);
  }
  if (*piVar2 != *(int *)(*(int *)(*(int *)(param_1 + 0x880) + 4) + 4)) {
    FUN_004828b0(this,iVar3);
    return;
  }
  FUN_004828b0(this,*(int *)(*(int *)(*(int *)(param_1 + 0x880) + 0xc) + 4));
  return;
}

