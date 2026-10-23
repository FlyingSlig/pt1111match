// FUNCTION: PORT1111 0x004538b0
// name: FUN_004538b0
// sig: undefined FUN_004538b0(int param_1)


void __fastcall FUN_004538b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_20 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    iVar2 = *(int *)(param_1 + 0x120);
    iVar3 = *(int *)(param_1 + 0x124);
    piVar1 = (int *)FUN_00403d80(local_20,*(int *)(param_1 + 0x128),*(int *)(param_1 + 300));
    local_10 = *piVar1;
    local_c = piVar1[1];
    local_8 = iVar2;
    local_4 = iVar3;
    CRect::NormalizeRect((CRect *)&local_10);
    uVar6 = 0xffff;
    iVar2 = local_10;
    iVar3 = local_c;
    iVar4 = local_8;
    iVar5 = local_4;
    piVar1 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
    FUN_0047b660(local_20,piVar1,iVar2,iVar3,iVar4,iVar5,uVar6);
  }
  return;
}

