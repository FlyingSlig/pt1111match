// FUNCTION: PORT1111 0x00456f20
// name: FUN_00456f20
// sig: undefined4 FUN_00456f20(int param_1)


undefined4 __fastcall FUN_00456f20(int param_1)

{
  char cVar1;
  void *this;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  int *piVar16;
  undefined4 in_stack_ffffff9c;
  void *in_stack_ffffffa0;
  int *local_34;
  uint local_30;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8e63;
  local_c = ExceptionList;
  piVar16 = (int *)**(int **)(param_1 + 8);
  ExceptionList = &local_c;
  local_34 = piVar16;
  local_10 = param_1;
  if (piVar16 != *(int **)(param_1 + 8)) {
    do {
      iVar4 = FUN_004147d0(piVar16[3]);
      if (iVar4 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      this = (void *)piVar16[4];
      local_30 = 0;
      iVar5 = FUN_00457c20((int)this);
      if (iVar5 != 0) {
        do {
          iVar5 = FUN_00457ca0(this,local_30);
          local_1c = operator_new(0x2c);
          pcVar14 = (char *)0x0;
          local_4 = 0;
          if (local_1c != (char *)0x0) {
            pcVar14 = (char *)FUN_00444720((undefined4 *)local_1c);
          }
          local_4 = 0xffffffff;
          uVar15 = 0;
          iVar6 = FUN_00484bd0(iVar5);
          iVar6 = FUN_00457c20(iVar6);
          if (iVar6 != 0) {
            do {
              uVar11 = uVar15;
              pvVar7 = (void *)FUN_00484bd0(iVar5);
              FUN_004576e0(pvVar7,uVar11);
              puVar8 = FUN_00459450(&local_20,0);
              local_4 = 1;
              pbVar9 = (byte *)FUN_00465e00(puVar8);
              iVar6 = FUN_0043dd60(pbVar9);
              local_4 = 0xffffffff;
              FUN_00465e40(&local_20);
              FUN_0043e750((void *)(iVar4 + 0x270),iVar6);
              uVar11 = uVar15;
              pvVar7 = (void *)FUN_00484bd0(iVar5);
              FUN_004576e0(pvVar7,uVar11);
              uVar11 = uVar15;
              pvVar7 = (void *)FUN_00484bd0(iVar5);
              iVar6 = FUN_004576e0(pvVar7,uVar11);
              puVar8 = FUN_0045c1c0(*(void **)(iVar6 + 0xc),&local_18,0);
              local_4 = 2;
              pcVar10 = (char *)FUN_00465e00(puVar8);
              local_1c = pcVar10 + 1;
              in_stack_ffffffa0 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
              pcVar13 = pcVar10;
              do {
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar1 != '\0');
              FUN_004016b0(&stack0xffffff9c,(undefined4 *)pcVar10,(int)pcVar13 - (int)local_1c);
              FUN_0043d9d0(in_stack_ffffff9c,in_stack_ffffffa0);
              FUN_004448d0((int)pcVar14);
              local_4 = 0xffffffff;
              FUN_00465e40(&local_18);
              uVar15 = uVar15 + 1;
              iVar6 = FUN_00484bd0(iVar5);
              uVar11 = FUN_00457c20(iVar6);
            } while (uVar15 < uVar11);
          }
          iVar6 = 0;
          puVar8 = &local_14;
          FUN_0047fd20(iVar5);
          puVar8 = FUN_00459450(puVar8,iVar6);
          local_4 = 3;
          pbVar9 = (byte *)FUN_00465e00(puVar8);
          uVar12 = FUN_0043dd60(pbVar9);
          *(undefined4 *)(pcVar14 + 4) = uVar12;
          local_4 = 0xffffffff;
          FUN_00465e40(&local_14);
          iVar5 = *(int *)(iVar4 + 0x278);
          local_1c = pcVar14;
          iVar6 = FUN_00413870(iVar5,*(undefined4 *)(iVar5 + 4),&local_1c);
          FUN_0043e040((void *)(iVar4 + 0x274),1);
          *(int *)(iVar5 + 4) = iVar6;
          local_30 = local_30 + 1;
          **(int **)(iVar6 + 4) = iVar6;
          uVar15 = FUN_00457c20((int)this);
          param_1 = local_10;
          piVar16 = local_34;
        } while (local_30 < uVar15);
      }
      if (*(char *)((int)piVar16 + 0x15) == '\0') {
        piVar2 = (int *)piVar16[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar16 = piVar2;
          piVar2 = (int *)*piVar2;
          while (local_34 = piVar16, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar16 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar16[1] + 0x15);
          piVar3 = (int *)piVar16[1];
          piVar2 = piVar16;
          while ((piVar16 = piVar3, local_34 = piVar16, cVar1 == '\0' &&
                 (piVar2 == (int *)piVar16[2]))) {
            cVar1 = *(char *)(piVar16[1] + 0x15);
            piVar3 = (int *)piVar16[1];
            piVar2 = piVar16;
          }
        }
      }
    } while (piVar16 != *(int **)(param_1 + 8));
  }
  ExceptionList = local_c;
  return 1;
}

