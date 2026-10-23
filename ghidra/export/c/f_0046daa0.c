// FUNCTION: PORT1111 0x0046daa0
// name: FUN_0046daa0
// sig: undefined4 FUN_0046daa0(void * this, int param_1, undefined4 * param_2)


undefined4 __thiscall FUN_0046daa0(void *this,int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint unaff_EBX;
  int iVar14;
  int unaff_ESI;
  uint unaff_EDI;
  undefined4 uVar15;
  undefined4 *puVar16;
  int *unaff_retaddr;
  uint local_48;
  uint *puStack_44;
  undefined4 *puStack_40;
  undefined1 *puStack_3c;
  uint uStack_38;
  void *pvStack_34;
  undefined4 *puStack_30;
  undefined1 *local_2c;
  uint uStack_28;
  undefined4 *puStack_24;
  int iStack_1c;
  int aiStack_18 [2];
  uint uStack_10;
  undefined4 *local_c;
  undefined4 uStack_4;
  
  local_48 = 0;
  local_2c = (undefined1 *)0x0;
  iVar14 = 1;
  local_c = this;
  (**(code **)(*(int *)this + 0x5c))();
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  FUN_0048a070(param_1);
  iVar2 = FUN_004a6bf0((int)aiStack_18,0,4);
  if (iVar2 != 0) {
    return 0;
  }
  piVar3 = FUN_004a7260("1.0.12",FUN_00489080,FUN_00489080,FUN_00489080);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  puStack_44 = FUN_004a6d70(piVar3);
  if (puStack_44 == (uint *)0x0) {
    FUN_004a80a0((undefined4 *)&stack0xffffffb0,(undefined4 *)0x0,(undefined4 *)0x0);
    return 0;
  }
  FUN_004ac640((int)piVar3,param_1,0x46b230);
  FUN_004a6bc0(piVar3,4);
  FUN_004a74b0(piVar3,puStack_44);
  FUN_004a83a0((int)piVar3,puStack_44,&local_48,(uint *)&stack0xffffffb4,(uint *)&local_2c,
               (uint *)&puStack_3c,(uint *)0x0,(uint *)0x0,(uint *)0x0);
  if (local_2c == (undefined1 *)0x10) {
    if (puStack_3c == (undefined1 *)0x6) {
      FUN_004a84d0((int)piVar3);
      local_2c = (undefined1 *)0x8;
      goto LAB_0046dbbf;
    }
    uVar15 = 0x17;
    puStack_3c = (undefined1 *)0x0;
    uStack_4 = 0x17;
    goto LAB_0046dc3d;
  }
LAB_0046dbbf:
  switch(puStack_3c) {
  default:
    goto switchD_0046dbcc_caseD_1;
  case (undefined1 *)0x2:
    uVar15 = 0x14;
    uStack_4 = 0x14;
    goto LAB_0046dbf4;
  case (undefined1 *)0x3:
    if ((local_2c == (undefined1 *)0x2) || (local_2c == (undefined1 *)0x4)) {
      FUN_004a5680((int)piVar3);
    }
    uVar15 = 0x29;
    uStack_4 = 0x29;
    goto LAB_0046dbfc;
  case (undefined1 *)0x4:
    uVar15 = 0x28;
    uStack_4 = 0x28;
    if (param_2 == (undefined4 *)0x0) break;
  case (undefined1 *)0x0:
    uVar15 = 0x29;
    uStack_4 = 0x29;
    break;
  case (undefined1 *)0x6:
    uVar15 = 0x15;
    uStack_4 = 0x15;
    if (param_2 != (undefined4 *)0x0) {
      uVar15 = 0x14;
      uStack_4 = 0x14;
    }
LAB_0046dbf4:
    FUN_004a5670((int)piVar3);
LAB_0046dbfc:
    if (puStack_3c == (undefined1 *)0x2) {
      iVar14 = (**(code **)(*(int *)this + 0x58))(local_48,unaff_EBX,uVar15,0);
      if (iVar14 == 0) {
        return 0;
      }
      cVar1 = (**(code **)(*(int *)this + 0xc))();
      if (cVar1 == ' ') {
        FUN_004a56d0((int)piVar3,0,1);
      }
    }
  }
LAB_0046dc3d:
  FUN_004a7850(piVar3,(int *)puStack_44);
  switch(puStack_3c) {
  case (undefined1 *)0x0:
    iVar14 = (**(code **)(*(int *)this + 0x58))(local_48,unaff_EBX,uVar15,0);
    if (iVar14 != 0) {
      cVar1 = (**(code **)(*(int *)this + 0xc))();
      if (cVar1 == '\b') {
        iVar2 = (**(code **)(*(int *)this + 0x18))();
        iVar12 = 0;
        puVar7 = (undefined1 *)(iVar2 + 2);
        do {
          uVar11 = (undefined1)iVar12;
          puVar7[-2] = uVar11;
          puVar7[-1] = uVar11;
          *puVar7 = uVar11;
          iVar12 = iVar12 + 1;
          puVar7 = puVar7 + 4;
        } while (iVar12 < 0x100);
        goto LAB_0046df04;
      }
      goto switchD_0046dc5c_caseD_1;
    }
    break;
  default:
switchD_0046dc5c_caseD_1:
    if ((iVar14 != 0) && (iVar14 = (**(code **)(*(int *)this + 0x30))(), iVar14 != 0)) {
      uVar5 = FUN_00424cb0(this);
      uStack_10 = uVar5;
      puVar6 = (undefined4 *)(**(code **)(*(int *)this + 0x2c))(iVar14,0,0);
      puStack_24 = puVar6;
      if ((unaff_retaddr == (int *)0x0) || ((int *)*unaff_retaddr == (int *)0x0)) {
        puVar9 = _malloc(unaff_EBX * 4);
        if (puVar9 != (undefined4 *)0x0) {
          uVar10 = 0;
          if (unaff_EBX != 0) {
            do {
              puVar9[uVar10] = puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + uVar5);
              uVar10 = uVar10 + 1;
            } while (uVar10 < unaff_EBX);
          }
          FUN_004a7d90(piVar3,puVar9);
                    /* WARNING: Subroutine does not return */
          _free(puVar9);
        }
LAB_0046e0dd:
        FUN_004a80a0((undefined4 *)&stack0xffffffb0,&puStack_44,(undefined4 *)0x0);
        return 0;
      }
      iVar14 = (**(code **)(*(int *)*unaff_retaddr + 0x30))();
      if (iVar14 != 0) {
        local_c = (undefined4 *)FUN_00424cb0((int *)*unaff_retaddr);
        iVar2 = FUN_0046b1c0(uStack_4);
        uStack_4 = CONCAT31(uStack_4._1_3_,(char)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3));
        pvStack_34 = _malloc((iVar2 + 8) * local_48 + 0x1f >> 3 & 0x1ffffffc);
        if (pvStack_34 != (void *)0x0) {
          puVar7 = (undefined1 *)(**(code **)(*(int *)*unaff_retaddr + 0x2c))(iVar14,0);
          uStack_28 = 0;
          local_2c = puVar7;
          if (unaff_EDI != 0) {
            do {
              puStack_3c = puVar7;
              local_2c = puVar7;
              FUN_004a7d00((void *)0x4,(int *)0x4,&puStack_40,(undefined4 *)0x0,1);
              pvStack_34 = (void *)0x0;
              puVar9 = puVar6;
              if (0 < unaff_ESI) {
                puVar8 = puStack_40;
                do {
                  puVar9 = puVar8;
                  puVar16 = puVar6;
                  for (uVar5 = uStack_10 >> 2 & 0x3f; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar16 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar16 = puVar16 + 1;
                  }
                  for (uVar5 = uStack_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *(undefined1 *)puVar16 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar16 = (undefined4 *)((int)puVar16 + 1);
                  }
                  puVar7 = (undefined1 *)((int)puVar8 + (uStack_10 & 0xff));
                  puVar6 = (undefined4 *)((int)puVar6 + (uStack_10 & 0xff));
                  *puStack_3c = *puVar7;
                  puVar8 = (undefined4 *)(puVar7 + 1);
                  pvStack_34 = (void *)((int)pvStack_34 + 1);
                  puVar9 = puStack_30;
                  puVar7 = local_2c;
                  puStack_3c = puStack_3c + 1;
                } while ((int)pvStack_34 < unaff_ESI);
              }
              puVar6 = (undefined4 *)((int)puVar9 + iStack_1c);
              puVar7 = puVar7 + aiStack_18[0];
              uStack_28 = uStack_28 + 1;
              puStack_30 = puVar6;
              local_2c = puVar7;
            } while (uStack_28 < unaff_EDI);
          }
          puStack_3c = local_2c;
          (**(code **)(*(int *)*local_c + 0x34))();
                    /* WARNING: Subroutine does not return */
          _free(puStack_40);
        }
        goto LAB_0046e0dd;
      }
    }
    break;
  case (undefined1 *)0x3:
    iVar14 = (**(code **)(*(int *)this + 0x58))(local_48,unaff_EBX,uVar15,0);
    if (iVar14 != 0) {
      FUN_004a8490((int)piVar3,(int)puStack_44,&puStack_40,&uStack_38);
      iVar2 = (**(code **)(*(int *)this + 0x18))();
      iVar12 = 0;
      if (0 < (int)uStack_38) {
        iVar13 = 0;
        puVar7 = (undefined1 *)(iVar2 + 1);
        do {
          puVar7[1] = *(undefined1 *)(iVar13 + (int)puStack_40);
          *puVar7 = *(undefined1 *)(iVar13 + 1 + (int)puStack_40);
          puVar7[-1] = *(undefined1 *)(iVar13 + 2 + (int)puStack_40);
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 3;
          puVar7 = puVar7 + 4;
        } while (iVar12 < (int)uStack_38);
      }
LAB_0046df04:
      FUN_0046da80(this);
      goto switchD_0046dc5c_caseD_1;
    }
    break;
  case (undefined1 *)0x4:
    iVar14 = (**(code **)(*(int *)this + 0x58))(local_48,unaff_EBX,uVar15,0);
    if (iVar14 != 0) {
      if (param_2 != (undefined4 *)0x0) {
        piVar4 = FUN_0046abb0(*(int *)((int)this + 4),*(undefined4 *)((int)this + 0x20));
        *param_2 = piVar4;
        if ((piVar4 == (int *)0x0) ||
           (iVar14 = (**(code **)(*piVar4 + 0x54))(8,local_48,unaff_EBX), iVar14 == 0)) break;
        iVar2 = (**(code **)(*(int *)*param_2 + 0x18))();
        iVar12 = 0;
        puVar7 = (undefined1 *)(iVar2 + 2);
        do {
          uVar11 = (undefined1)iVar12;
          puVar7[-2] = uVar11;
          puVar7[-1] = uVar11;
          *puVar7 = uVar11;
          iVar12 = iVar12 + 1;
          puVar7 = puVar7 + 4;
        } while (iVar12 < 0x100);
      }
      iVar12 = 0;
      puStack_40 = (undefined4 *)0x0;
      FUN_004a8490((int)piVar3,(int)puStack_44,&puStack_40,&uStack_38);
      iVar2 = (**(code **)(*(int *)this + 0x18))();
      if (0 < (int)uStack_38) {
        iVar13 = 0;
        puVar7 = (undefined1 *)(iVar2 + 1);
        do {
          puVar7[1] = *(undefined1 *)(iVar13 + (int)puStack_40);
          *puVar7 = *(undefined1 *)(iVar13 + 1 + (int)puStack_40);
          puVar7[-1] = *(undefined1 *)(iVar13 + 2 + (int)puStack_40);
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 3;
          puVar7 = puVar7 + 4;
        } while (iVar12 < (int)uStack_38);
      }
      goto LAB_0046df04;
    }
    break;
  case (undefined1 *)0x6:
    iVar14 = (**(code **)(*(int *)this + 0x58))(local_48,unaff_EBX,uVar15,0);
    if (iVar14 != 0) {
      if (param_2 != (undefined4 *)0x0) {
        piVar4 = FUN_0046abb0(*(int *)((int)this + 4),*(undefined4 *)((int)this + 0x20));
        *param_2 = piVar4;
        if ((piVar4 == (int *)0x0) ||
           (iVar14 = (**(code **)(*piVar4 + 0x54))(8,local_48,unaff_EBX), iVar14 == 0)) break;
        iVar2 = (**(code **)(*(int *)*param_2 + 0x18))();
        iVar12 = 0;
        puVar7 = (undefined1 *)(iVar2 + 2);
        do {
          uVar11 = (undefined1)iVar12;
          puVar7[-2] = uVar11;
          puVar7[-1] = uVar11;
          *puVar7 = uVar11;
          iVar12 = iVar12 + 1;
          puVar7 = puVar7 + 4;
        } while (iVar12 < 0x100);
      }
      goto switchD_0046dc5c_caseD_1;
    }
  }
  if (piVar3 != (int *)0x0) {
    FUN_004a80a0((undefined4 *)&stack0xffffffb0,&puStack_44,(undefined4 *)0x0);
    return 0;
  }
switchD_0046dbcc_caseD_1:
  return 0;
}

