// FUNCTION: PORT1111 0x00431950
// name: FUN_00431950
// sig: undefined4 FUN_00431950(int param_1)


undefined4 __fastcall FUN_00431950(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *_Memory;
  undefined4 *puVar9;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b75f3;
  local_c = ExceptionList;
  puVar9 = (undefined4 *)**(undefined4 **)(DAT_004e240c + 8);
  while( true ) {
    if (puVar9 == *(undefined4 **)(DAT_004e240c + 8)) {
      return 1;
    }
    iVar8 = *(int *)(*(int *)(puVar9[4] + 0x50) + 0x14);
    if ((iVar8 == 0x73) || (iVar8 == 0x4b)) break;
    if (*(char *)((int)puVar9 + 0x15) == '\0') {
      puVar2 = (undefined4 *)puVar9[2];
      if (*(char *)((int)puVar2 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar2 + 0x15);
        puVar9 = puVar2;
        puVar2 = (undefined4 *)*puVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar2 + 0x15);
          puVar9 = puVar2;
          puVar2 = (undefined4 *)*puVar2;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar9[1] + 0x15);
        puVar3 = (undefined4 *)puVar9[1];
        puVar2 = puVar9;
        while ((puVar9 = puVar3, cVar1 == '\0' && (puVar2 == (undefined4 *)puVar9[2]))) {
          cVar1 = *(char *)((int)puVar9[1] + 0x15);
          puVar3 = (undefined4 *)puVar9[1];
          puVar2 = puVar9;
        }
      }
    }
  }
  iVar8 = 0;
  if (puVar9[4] == 0) {
    return 1;
  }
  ExceptionList = &local_c;
  FUN_004307f0(*(undefined4 *)(puVar9[4] + 0x10),&local_28,&local_24);
  _Memory = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  puVar9 = &DAT_004d6a14;
  iVar6 = 0xe;
  do {
    if ((_Memory == (void *)0x0) ||
       ((uint)(local_10 - (int)_Memory >> 2) <= (uint)((int)local_14 - (int)_Memory >> 2))) {
      FUN_0041a090(local_1c,local_14,1,puVar9);
      _Memory = local_18;
    }
    else {
      *local_14 = *puVar9;
      local_14 = local_14 + 1;
    }
    puVar9 = puVar9 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (_Memory == (void *)0x0) {
    ExceptionList = local_c;
    return 1;
  }
  uVar7 = (int)local_14 - (int)_Memory >> 2;
  if ((uVar7 != 0) && (0 < *(int *)(param_1 + 0x14))) {
    do {
      uVar4 = _rand();
      iVar6 = *(int *)((int)_Memory + (uVar4 % uVar7) * 4);
      local_20 = operator_new(0x38);
      local_4._0_1_ = 1;
      if (local_20 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = FUN_004332b0(local_20);
      }
      piVar5[7] = local_28;
      piVar5[8] = local_24;
      piVar5[1] = -1;
      piVar5[5] = iVar6;
      piVar5[6] = 2;
      piVar5[10] = 0;
      piVar5[0xc] = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00412e90(piVar5);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x14));
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

