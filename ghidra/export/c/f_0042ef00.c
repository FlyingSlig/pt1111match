// FUNCTION: PORT1111 0x0042ef00
// name: FUN_0042ef00
// sig: undefined FUN_0042ef00(int param_1)


void __fastcall FUN_0042ef00(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_28;
  int *local_24;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  undefined4 *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b73ae;
  pvStack_c = ExceptionList;
  piVar5 = (int *)**(int **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  local_14 = (undefined4 *)FUN_0043d220();
  local_10 = 0;
  local_4 = 0;
  local_28 = 0;
  piVar6 = piVar5;
  if (piVar5 != *(int **)(param_1 + 0xc)) {
    do {
      puVar2 = local_14;
      puVar1 = (undefined4 *)piVar5[2];
      local_28 = local_28 + 1;
      iVar3 = FUN_00453460((void *)(DAT_004e2410 + 0x888),(uint)DAT_004e21b0,
                           *(uint *)(*(int *)(param_1 + 0x30) + 0x110));
      piVar6 = piVar5;
      if (iVar3 == 0) break;
      local_1c = operator_new(0x38);
      local_4._0_1_ = 1;
      if (local_1c == (undefined4 *)0x0) {
        local_24 = (int *)0x0;
      }
      else {
        local_24 = FUN_004332b0(local_1c);
      }
      local_24[7] = *(int *)puVar1[2];
      local_24[8] = *(int *)(puVar1[2] + 4);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_28 == 1) {
        iVar3 = FUN_00453ab0(*(int *)(DAT_004e240c + 0x21c));
        local_24[1] = iVar3;
      }
      local_24[5] = *(int *)(param_1 + 4);
      local_24[6] = (uint)DAT_004e21b0;
      puVar7 = (undefined4 *)(((int *)puVar1[2])[1] * 0x10000 + *(int *)puVar1[2]);
      local_1c = puVar7;
      iVar3 = FUN_00413870(puVar2,puVar2[1],&local_1c);
      FUN_00409f80(local_18,1);
      puVar2[1] = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      local_1c = (undefined4 *)((int)puVar7 + -0x10001);
      piVar6 = local_14 + 1;
      iVar3 = FUN_00413870(local_14,*piVar6,&local_1c);
      FUN_00409f80(local_18,1);
      *piVar6 = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      local_1c = (undefined4 *)((int)puVar7 + -1);
      piVar6 = local_14 + 1;
      iVar3 = FUN_00413870(local_14,*piVar6,&local_1c);
      FUN_00409f80(local_18,1);
      *piVar6 = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      local_1c = (undefined4 *)((int)puVar7 + 0xffff);
      piVar6 = local_14 + 1;
      iVar3 = FUN_00413870(local_14,*piVar6,&local_1c);
      FUN_00409f80(local_18,1);
      *piVar6 = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      local_1c = (undefined4 *)((int)puVar7 + 1);
      piVar6 = local_14 + 1;
      iVar3 = FUN_00413870(local_14,*piVar6,&local_1c);
      FUN_00409f80(local_18,1);
      *piVar6 = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      local_1c = (undefined4 *)((int)puVar7 + 0x10001);
      piVar6 = local_14 + 1;
      iVar3 = FUN_00413870(local_14,*piVar6,&local_1c);
      FUN_00409f80(local_18,1);
      *piVar6 = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      local_1c = puVar7 + 0x4000;
      piVar6 = local_14 + 1;
      iVar3 = FUN_00413870(local_14,*piVar6,&local_1c);
      FUN_00409f80(local_18,1);
      *piVar6 = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      local_1c = (undefined4 *)((int)puVar7 + -0xffff);
      piVar6 = local_14 + 1;
      iVar3 = FUN_00413870(local_14,*piVar6,&local_1c);
      FUN_00409f80(local_18,1);
      *piVar6 = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      piVar6 = local_14 + 1;
      local_1c = puVar7 + -0x4000;
      iVar3 = FUN_00413870(local_14,local_14[1],&local_1c);
      FUN_00409f80(local_18,1);
      *piVar6 = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      FUN_00412e90(local_24);
      FUN_00478a10(puVar1[1]);
      FUN_004788b0(puVar1[1]);
      FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
      iVar3 = (int)*(short *)(puVar1[1] + 0x34);
      pvVar4 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
      FUN_00477b30(pvVar4,iVar3);
      puVar1[1] = 0;
      (**(code **)*puVar1)(1);
      piVar6 = (int *)*piVar5;
      if (piVar5 != *(int **)(param_1 + 0xc)) {
        *(int **)piVar5[1] = piVar6;
        *(int *)(*piVar5 + 4) = piVar5[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar5);
      }
      piVar5 = piVar6;
    } while (piVar6 != (int *)*(int *)(param_1 + 0xc));
  }
  if (piVar6 != *(int **)(param_1 + 0xc)) {
    do {
      puVar1 = (undefined4 *)piVar6[2];
      FUN_00478a10(puVar1[1]);
      FUN_004788b0(puVar1[1]);
      FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
      iVar3 = (int)*(short *)(puVar1[1] + 0x34);
      pvVar4 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
      FUN_00477b30(pvVar4,iVar3);
      puVar1[1] = 0;
      (**(code **)*puVar1)(1);
      piVar5 = (int *)*piVar6;
      if (piVar6 != *(int **)(param_1 + 0xc)) {
        *(int **)piVar6[1] = piVar5;
        *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar6);
      }
      piVar6 = piVar5;
    } while (piVar5 != *(int **)(param_1 + 0xc));
  }
  FUN_0042ece0(local_18);
  FUN_0042e270((int)local_18);
  puVar2 = local_14;
  for (puVar1 = (undefined4 *)*local_14; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    local_1c = operator_new(0x34);
    local_4._0_1_ = 2;
    if (local_1c == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00430300(local_1c);
    }
    piVar5[1] = puVar1[2] & 0xffff;
    piVar5[5] = (int)*(short *)((int)puVar1 + 10);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00412e90(piVar5);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  puVar1 = (undefined4 *)*puVar2;
  *puVar2 = puVar2;
  puVar2[1] = puVar2;
  if (puVar1 != puVar2) {
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar2);
}

