// FUNCTION: PORT1111 0x004348d0
// name: FUN_004348d0
// sig: undefined FUN_004348d0(int param_1)


void __fastcall FUN_004348d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  int *piStack_4;
  
  FUN_004345b0(param_1 + 4);
  while ((DAT_004e21b4 != 0 && (iVar2 = FUN_00433c30((void *)(param_1 + 4),&local_8), iVar2 != 0)))
  {
    piVar3 = operator_new(0x38);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[4] = 0;
      piVar3[1] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      piVar3[0xc] = 0;
      piVar3[2] = -1;
      *piVar3 = (int)&PTR_FUN_004bfd08;
      piVar3[0xd] = local_8;
      piVar3[3] = 0x14;
    }
    iVar2 = DAT_004e2424;
    piVar1 = (int *)(DAT_004e2424 + 0x1d8);
    (**(code **)(*(int *)(DAT_004e2424 + 0x1d8) + 4))();
    (**(code **)(*piVar3 + 0xc))();
    piStack_4 = piVar3;
    (**(code **)(*(int *)(iVar2 + 0x138) + 4))();
    FUN_00434410((void *)(iVar2 + 0x124),&piStack_4);
    (**(code **)(*(int *)(iVar2 + 0x138) + 8))();
    FUN_00480070((void *)(iVar2 + 0x4c),0);
    (**(code **)(*piVar1 + 8))();
  }
  return;
}

