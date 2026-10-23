// FUNCTION: PORT1111 0x004729e0
// name: FUN_004729e0
// sig: undefined4 FUN_004729e0(int * param_1)


undefined4 __fastcall FUN_004729e0(int *param_1)

{
  uint *puVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uchar *puVar6;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9e53;
  local_c = ExceptionList;
  if (param_1[0xd] != 0) {
    return 1;
  }
  ExceptionList = &local_c;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 1;
  piStack_10 = param_1;
  iVar2 = FUN_0046ee80((int)param_1);
  if (iVar2 != 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 0xb) * 6;
    if ((int *)param_1[0x2d] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2d] + 0x90))(0);
      if (*(int *)(param_1[0x2d] + 0x28) == 5) {
        puVar1 = (uint *)(param_1[0x2d] + 0x20);
        *puVar1 = *puVar1 | 0x10;
      }
      (**(code **)(*(int *)param_1[0x2d] + 0x60))(iVar2 + 1);
      iVar3 = (**(code **)(*(int *)param_1[0x2d] + 0x50))();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
    }
    if ((int *)param_1[0x2c] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2c] + 0x90))(0);
      if (*(int *)(param_1[0x2c] + 0x28) == 5) {
        puVar1 = (uint *)(param_1[0x2c] + 0x20);
        *puVar1 = *puVar1 | 0x10;
      }
      (**(code **)(*(int *)param_1[0x2c] + 0x60))(iVar2);
      iVar3 = (**(code **)(*(int *)param_1[0x2c] + 0x50))();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
    }
    if ((int *)param_1[0x2e] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2e] + 0x90))(0);
      if (*(int *)(param_1[0x2e] + 0x28) == 5) {
        puVar1 = (uint *)(param_1[0x2e] + 0x20);
        *puVar1 = *puVar1 | 0x10;
      }
      (**(code **)(*(int *)param_1[0x2e] + 0x60))(iVar2 + 2);
      iVar3 = (**(code **)(*(int *)param_1[0x2e] + 0x50))();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
    }
    if ((int *)param_1[0x2f] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2f] + 0x90))(0);
      if (*(int *)(param_1[0x2f] + 0x28) == 5) {
        puVar1 = (uint *)(param_1[0x2f] + 0x20);
        *puVar1 = *puVar1 | 0x10;
      }
      (**(code **)(*(int *)param_1[0x2f] + 0x60))(iVar2 + 3);
      iVar3 = (**(code **)(*(int *)param_1[0x2f] + 0x50))();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
    }
    if ((int *)param_1[0x31] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x31] + 0x90))(0);
      (**(code **)(*(int *)param_1[0x31] + 0x60))(iVar2 + 4);
      iVar2 = (**(code **)(*(int *)param_1[0x31] + 0x50))();
      if (iVar2 == 0) {
        ExceptionList = local_c;
        return 0;
      }
    }
    if ((int *)param_1[0x30] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x30] + 0x90))(0);
      if (*(int *)(param_1[0x30] + 0x28) == 5) {
        puVar1 = (uint *)(param_1[0x30] + 0x20);
        *puVar1 = *puVar1 | 0x10;
      }
      (**(code **)(*(int *)param_1[0x30] + 0x60))(*(ushort *)(param_1 + 0xb) + 100000);
      iVar2 = (**(code **)(*(int *)param_1[0x30] + 0x50))();
      if (iVar2 == 0) {
        ExceptionList = local_c;
        return 0;
      }
    }
    if ((param_1[0xc] & 0x1000U) != 0) {
      piStack_10 = operator_new(0x70);
      uStack_4 = 0;
      if (piStack_10 == (int *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_004889d0(piStack_10);
      }
      param_1[0xe] = (int)puVar4;
      uStack_4 = 0xffffffff;
      FUN_00488aa0(puVar4,DAT_004e2b2c);
      this = DAT_004e2b14;
      pcVar5 = (char *)FUN_00465e00(param_1 + 0x32);
      puVar4 = FUN_004680e0(this,&piStack_10,pcVar5);
      uStack_4 = 1;
      puVar6 = (uchar *)FUN_00465e00(puVar4);
      FUN_00488a30((void *)param_1[0xe],puVar6);
      uStack_4 = 0xffffffff;
      FUN_00465e40(&piStack_10);
    }
    param_1[0x16] = 1;
    FUN_00471c70((int)param_1);
    ExceptionList = local_c;
    return 1;
  }
  (**(code **)(*param_1 + 0x54))();
  ExceptionList = local_c;
  return 0;
}

