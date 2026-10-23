// FUNCTION: PORT1111 0x00451b60
// name: FUN_00451b60
// sig: undefined FUN_00451b60(int * param_1, undefined4 param_2, undefined4 param_3, int * param_4)


void __cdecl FUN_00451b60(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 uVar9;
  undefined2 *puVar10;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  FUN_00422370(iVar1);
  puVar2 = (undefined2 *)(**(code **)(*param_1 + 0xc0))(param_4);
  piVar3 = (int *)(**(code **)(*param_1 + 0xc0))(param_4,1);
  piVar4 = (int *)(**(code **)(*param_1 + 0xc0))(unaff_retaddr,2);
  iVar1 = piVar3[1] + unaff_EDI;
  iVar7 = *piVar3 + unaff_EBX;
  iVar8 = param_4[1] + unaff_EDI;
  iVar5 = *param_4 + unaff_EBX;
  uVar9 = 0;
  puVar10 = puVar2;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  FUN_0047b780(&DAT_004e278c,piVar6,uVar9,puVar10,iVar5,iVar8,iVar7,iVar1);
  iVar1 = piVar4[1] + unaff_EDI;
  iVar7 = *piVar4 + unaff_EBX;
  iVar5 = piVar3[1] + unaff_EDI;
  iVar8 = *piVar3 + unaff_EBX;
  uVar9 = 0;
  puVar10 = puVar2;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  FUN_0047b780(&DAT_004e278c,piVar6,uVar9,puVar10,iVar8,iVar5,iVar7,iVar1);
  iVar7 = piVar3[1] + unaff_EDI;
  iVar1 = *piVar3 + 1 + unaff_EBX;
  iVar8 = param_4[1] + unaff_EDI;
  iVar5 = unaff_EBX + 1 + *param_4;
  uVar9 = 0;
  puVar10 = puVar2;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  FUN_0047b780(&DAT_004e278c,piVar6,uVar9,puVar10,iVar5,iVar8,iVar1,iVar7);
  iVar7 = piVar4[1] + unaff_EDI;
  iVar1 = *piVar4 + 1 + unaff_EBX;
  iVar8 = piVar3[1] + unaff_EDI;
  iVar5 = *piVar3 + 1 + unaff_EBX;
  uVar9 = 0;
  puVar10 = puVar2;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  FUN_0047b780(&DAT_004e278c,piVar6,uVar9,puVar10,iVar5,iVar8,iVar1,iVar7);
  iVar1 = piVar3[1] + 1 + unaff_EDI;
  iVar7 = *piVar3 + unaff_EBX;
  iVar5 = param_4[1] + 1 + unaff_EDI;
  iVar8 = *param_4 + unaff_EBX;
  uVar9 = 0;
  puVar10 = puVar2;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  FUN_0047b780(&DAT_004e278c,piVar6,uVar9,puVar10,iVar8,iVar5,iVar7,iVar1);
  iVar1 = piVar4[1] + 1 + unaff_EDI;
  iVar7 = *piVar4 + unaff_EBX;
  iVar5 = piVar3[1] + 1 + unaff_EDI;
  iVar8 = *piVar3 + unaff_EBX;
  uVar9 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  FUN_0047b780(&DAT_004e278c,piVar3,uVar9,puVar2,iVar8,iVar5,iVar7,iVar1);
  return;
}

