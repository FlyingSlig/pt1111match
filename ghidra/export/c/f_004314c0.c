// FUNCTION: PORT1111 0x004314c0
// name: FUN_004314c0
// sig: undefined4 FUN_004314c0(int param_1)


undefined4 __fastcall FUN_004314c0(int param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b75b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_00414c30(DAT_004e240c);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0xac))();
    if (iVar4 != 0) {
      iVar4 = piVar3[0x14];
      if (*(char *)(iVar4 + 0x106) == '\0') {
        if (*(char *)(iVar4 + 0x104) != '\0') {
          iVar5 = piVar3[0x36];
          iVar6 = ((*(int *)(iVar4 + 0x100) - piVar3[0x37]) - piVar3[0x35]) - iVar5;
          if (iVar6 == 0) {
            FUN_00445030(*(void **)(*(int *)(param_1 + 0x40) + 0xb0),0x3f9);
            ExceptionList = local_c;
            return 0;
          }
          bVar2 = false;
          if (((*(char *)(iVar4 + 0x107) != '\0') && (iVar5 == 0)) && (0 < iVar6)) {
            bVar2 = true;
          }
          if (iVar6 < *(int *)(*(int *)(param_1 + 0x40) + 0xd8)) {
            piVar3[0x36] = iVar5 + iVar6;
            piVar1 = (int *)(*(int *)(param_1 + 0x40) + 0xd8);
            *piVar1 = *piVar1 - iVar6;
          }
          else {
            piVar3[0x36] = *(int *)(*(int *)(param_1 + 0x40) + 0xd8) + iVar5;
            *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xd8) = 0;
          }
          if (bVar2) {
            puVar7 = operator_new(0x34);
            uStack_4 = 0;
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = FUN_00432540(puVar7);
            }
            puVar7[1] = *(undefined4 *)(param_1 + 0x14);
            uStack_4 = 0xffffffff;
            FUN_00412ec0(puVar7,10000);
          }
          FUN_00445030(*(void **)(*(int *)(param_1 + 0x40) + 0xb0),0x3ef);
          FUN_00445030(*(void **)(*(int *)(param_1 + 0x40) + 0xb0),0x3f6);
          FUN_00445030((void *)piVar3[0x2c],0x3ef);
          FUN_00445030((void *)piVar3[0x2c],0x3f6);
        }
      }
      else {
        iVar4 = (**(code **)(*piVar3 + 0x88))();
        if (iVar4 != 0) {
          iVar5 = (**(code **)(*piVar3 + 0x88))();
          iVar4 = *(int *)(param_1 + 0x40);
          FUN_004534b0((void *)((int)DAT_004e2410 + 0x888),*(int *)(iVar5 + 0x34),
                       *(int *)(iVar4 + 0xdc) * 5 + *(int *)(iVar4 + 0xd8) + *(int *)(iVar4 + 0xd4))
          ;
          *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xd8) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xdc) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xd4) = 0;
        }
      }
      FUN_00454e60((int)DAT_004e2410);
      FUN_00455220(DAT_004e2410);
      iVar4 = *(int *)(param_1 + 0x40);
      if (*(int *)(iVar4 + 0xdc) + *(int *)(iVar4 + 0xd8) + *(int *)(iVar4 + 0xd4) == 0) {
        if ((*(uint *)(iVar4 + 0x3c) & 0x40) == 0) {
          if ((*(uint *)(iVar4 + 0x3c) & 0x400) != 0) {
            (**(code **)(**(int **)(param_1 + 0x40) + 0xcc))(0);
          }
        }
        else {
          if (*(int *)(DAT_004e240c + 0x60) == 1) {
            puVar7 = operator_new(0x18);
            uStack_4 = 1;
            if (puVar7 == (undefined4 *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_0045c3d0(puVar7);
            }
            *(undefined4 *)(iVar4 + 8) = 0xfffffffd;
            *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 4);
            *(undefined4 *)(iVar4 + 0xc) = 0;
            uStack_4 = 0xffffffff;
            FUN_004456a0(*(void **)(DAT_004e240c + 0x70),iVar4);
          }
          (**(code **)(**(int **)(param_1 + 0x40) + 0xcc))(0);
        }
      }
      FUN_00405ad0(*(void **)(param_1 + 0x40),-1,-1);
      FUN_004137d0(*(int *)(param_1 + 0x40));
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

