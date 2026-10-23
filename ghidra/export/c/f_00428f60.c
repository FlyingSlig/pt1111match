// FUNCTION: PORT1111 0x00428f60
// name: FUN_00428f60
// sig: undefined FUN_00428f60(int param_1)


void __fastcall FUN_00428f60(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  undefined1 *puVar7;
  int iVar8;
  char *pcVar9;
  
  piVar1 = (int *)(param_1 + 0x14);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x54))(8,0x40,0x20);
  (**(code **)(*unaff_EBX + 0x44))(piVar1,0,0,0,0);
  iVar5 = *piVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar3 = (**(code **)(iVar5 + 0x30))(0,0);
  pcVar4 = (char *)(**(code **)(iVar5 + 0x2c))(uVar3);
  pcVar9 = pcVar4;
  iVar5 = (**(code **)(*piVar1 + 0x24))();
  if (iVar5 == 0) {
    iVar5 = (**(code **)(*piVar1 + 0x14))();
    iVar5 = -iVar5;
  }
  else {
    iVar5 = (**(code **)(*piVar1 + 0x14))();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  puVar7 = (undefined1 *)(param_1 + 0x68);
  iVar8 = 0x20;
  do {
    bVar2 = false;
    *puVar7 = 0x40;
    iVar6 = 0;
    do {
      if (*pcVar4 == -1) {
        if (!bVar2) {
          puVar7[-0x20] = (char)iVar6;
          bVar2 = true;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      else if (bVar2) {
        *puVar7 = (char)iVar6;
        break;
      }
      pcVar4 = pcVar4 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x40);
    if (!bVar2) {
      puVar7[-0x20] = 0;
      *puVar7 = 0;
    }
    pcVar4 = pcVar9 + iVar5;
    puVar7 = puVar7 + 1;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar4;
    if (iVar8 == 0) {
      (**(code **)(*piVar1 + 0x34))();
      return;
    }
  } while( true );
}

