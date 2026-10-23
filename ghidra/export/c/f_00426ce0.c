// FUNCTION: PORT1111 0x00426ce0
// name: FUN_00426ce0
// sig: undefined FUN_00426ce0(void * this, int param_1)


void __thiscall FUN_00426ce0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_14;
  
  iVar1 = (*(int **)((int)this + 0x18))[2];
  iVar2 = **(int **)((int)this + 0x18);
  if (iVar2 != 1) {
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    iVar6 = 0;
    iVar7 = param_1;
    if (0 < iVar2) {
      do {
        iVar5 = *(int *)(iVar1 + iVar6 * 4);
        iVar7 = iVar6;
        if (iVar5 == param_1) goto joined_r0x00426da2;
        if ((iVar4 < *(int *)(iVar5 + 0xc)) ||
           ((iVar4 == *(int *)(iVar5 + 0xc) &&
            ((iVar3 < *(int *)(iVar5 + 8) ||
             ((iVar3 == *(int *)(iVar5 + 8) && (*(int *)(param_1 + 4) < *(int *)(iVar5 + 4)))))))))
        {
          while (iVar7 = iVar7 + 1, local_14 = iVar6, iVar7 < iVar2) {
            if (*(int *)(iVar1 + iVar7 * 4) == param_1) goto LAB_00426d72;
          }
        }
        iVar6 = iVar7 + 1;
        iVar7 = param_1;
      } while (iVar6 < iVar2);
    }
LAB_00426d72:
    if (iVar7 != local_14) {
      if (local_14 < iVar7) {
        do {
          *(undefined4 *)(iVar1 + iVar7 * 4) = *(undefined4 *)(iVar1 + -4 + iVar7 * 4);
          iVar7 = iVar7 + -1;
        } while (local_14 < iVar7);
        *(int *)(iVar1 + local_14 * 4) = param_1;
        return;
      }
      if (iVar7 < local_14) {
        puVar8 = (undefined4 *)(iVar1 + iVar7 * 4);
        puVar9 = puVar8;
        for (iVar7 = local_14 - iVar7; puVar8 = puVar8 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar9 = puVar9 + 1;
        }
      }
      *(int *)(iVar1 + local_14 * 4) = param_1;
    }
  }
  return;
joined_r0x00426da2:
  local_14 = iVar6;
  iVar6 = local_14 + 1;
  if (iVar2 <= iVar6) {
    local_14 = iVar2 + -1;
    goto LAB_00426d72;
  }
  iVar5 = *(int *)(iVar1 + iVar6 * 4);
  if ((iVar4 < *(int *)(iVar5 + 0xc)) ||
     ((iVar4 == *(int *)(iVar5 + 0xc) &&
      ((iVar3 < *(int *)(iVar5 + 8) ||
       ((iVar3 == *(int *)(iVar5 + 8) && (*(int *)(param_1 + 4) < *(int *)(iVar5 + 4)))))))))
  goto LAB_00426d72;
  goto joined_r0x00426da2;
}

