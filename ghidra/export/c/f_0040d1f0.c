// FUNCTION: PORT1111 0x0040d1f0
// name: FUN_0040d1f0
// sig: undefined4 FUN_0040d1f0(undefined4 * param_1)


undefined4 __fastcall FUN_0040d1f0(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5e4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar2 = FUN_00404900(param_1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    switch(*(undefined4 *)(param_1[0xd] + 0x13c)) {
    case 1:
      iVar6 = 3;
      break;
    case 2:
      iVar6 = 6;
      break;
    case 3:
      iVar6 = 9;
      break;
    case 4:
      iVar6 = 0xc;
      break;
    default:
      ExceptionList = local_c;
      return 0;
    }
    iVar3 = FUN_00475080(param_1[1]);
    param_1[0x15] = iVar3;
    *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) | 0x104;
    FUN_004787e0(param_1[0x15]);
    uVar7 = param_1[0x15];
    pvVar4 = (void *)FUN_00404580(param_1,iVar6);
    FUN_00479290(pvVar4,uVar7);
    FUN_00478920((void *)param_1[0x15]);
    FUN_004789b0((void *)param_1[0x15],(int *)0x1);
    iVar3 = *(int *)(param_1[0x15] + 4);
    iVar1 = *(int *)(param_1[0x15] + 8);
    puVar5 = operator_new(100);
    local_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_0040d150(puVar5);
    }
    local_4 = 0xffffffff;
    param_1[0x16] = puVar5;
    FUN_00478070((int)puVar5);
    FUN_00477ae0((void *)param_1[1],(void *)param_1[0x16],1);
    FUN_004784c0((void *)param_1[0x16],
                 *(int *)(*(int *)(**(int **)(*(int *)(param_1[0x15] + 0x14) + 4) + 0xc) + 0xc),0,1)
    ;
    *(uint *)(param_1[0x16] + 0x28) = *(uint *)(param_1[0x16] + 0x28) | 0x104;
    FUN_004786d0((void *)param_1[0x16],iVar3,iVar1);
    FUN_00478380((void *)param_1[0x16],*(undefined4 *)(param_1[0x15] + 0x10));
    FUN_004787e0(param_1[0x16]);
    FUN_00478010((void *)param_1[0x16],0);
    uVar7 = param_1[0x16];
    pvVar4 = (void *)FUN_00404580(param_1,iVar6);
    FUN_00479290(pvVar4,uVar7);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

