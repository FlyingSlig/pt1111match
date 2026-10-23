// FUNCTION: PORT1111 0x00452860
// name: FUN_00452860
// sig: undefined FUN_00452860(int param_1)


void __fastcall FUN_00452860(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  int *piVar6;
  int *piVar7;
  int local_8;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 0x1c);
  }
  if (uVar1 == 2) {
    iVar4 = FUN_00453b70(*(int *)(DAT_004e240c + 0x21c));
    if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0x3c) & 0x10000) != 0)) {
      DVar5 = GetTickCount();
      if (100 < DVar5 - *(int *)(iVar4 + 0x124)) {
        FUN_00409530(iVar4);
        DVar5 = GetTickCount();
        *(DWORD *)(iVar4 + 0x124) = DVar5;
      }
    }
    iVar4 = *(int *)(param_1 + 0x48);
    uVar2 = (**(code **)(**(int **)(*(int *)(DAT_004e2b14 + 0xf8) + 0x1c) + 0x70))();
    (**(code **)(iVar4 + 8))
              (*(int *)(param_1 + 0x85c) + *(int *)(param_1 + 0x38),
               *(int *)(param_1 + 0x860) + *(int *)(param_1 + 0x3c),uVar2);
  }
  else if (uVar1 == 3) {
    piVar6 = *(int **)(*(int *)(DAT_004e240c + 0x21c) + 4);
    piVar3 = (int *)*piVar6;
    local_8 = 0;
    if (piVar3 != piVar6) {
      piVar6 = (int *)(param_1 + 0x250);
      piVar7 = (int *)(param_1 + 0xb0);
      while( true ) {
        FUN_00414c30(DAT_004e240c);
        iVar4 = *piVar6;
        uVar2 = (**(code **)(**(int **)(*(int *)(DAT_004e2b14 + 0xf8) + 0x1c) + 0x70))();
        (**(code **)(iVar4 + 8))
                  (*(int *)(param_1 + 0x85c) + *piVar7,piVar7[1] + *(int *)(param_1 + 0x860),uVar2);
        local_8 = local_8 + 1;
        piVar7 = piVar7 + 4;
        piVar6 = piVar6 + 0xc;
        if (0x19 < local_8) break;
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)*(int *)(*(int *)(DAT_004e240c + 0x21c) + 4)) {
          return;
        }
      }
    }
  }
  else if (uVar1 == 4) {
    iVar4 = *(int *)(param_1 + 0x7b0);
    uVar2 = (**(code **)(**(int **)(*(int *)(DAT_004e2b14 + 0xf8) + 0x1c) + 0x70))();
    (**(code **)(iVar4 + 8))
              (*(int *)(param_1 + 0x7a0) + *(int *)(param_1 + 0x85c),
               *(int *)(param_1 + 0x7a4) + *(int *)(param_1 + 0x860),uVar2);
    iVar4 = *(int *)(param_1 + 0x7f0);
    uVar2 = (**(code **)(**(int **)(*(int *)(DAT_004e2b14 + 0xf8) + 0x1c) + 0x70))();
    (**(code **)(iVar4 + 8))
              (*(int *)(param_1 + 0x7e0) + *(int *)(param_1 + 0x85c),
               *(int *)(param_1 + 0x7e4) + *(int *)(param_1 + 0x860),uVar2);
    return;
  }
  return;
}

