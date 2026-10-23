// FUNCTION: PORT1111 0x00406140
// name: FUN_00406140
// sig: undefined4 FUN_00406140(void * this, void * param_1)


undefined4 __thiscall FUN_00406140(void *this,void *param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b59b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x40) == 0) goto LAB_0040635f;
  ExceptionList = &local_c;
  iVar2 = FUN_00422380(*(void **)((int)this + 0x70),*(int *)((int)param_1 + 0x50));
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x40);
    if ((*(short *)(iVar2 + 0x4e) == *(short *)((int)param_1 + 0x4e)) ||
       (*(short *)(iVar2 + 0x4c) == *(short *)((int)param_1 + 0x4c))) goto LAB_0040635f;
    if ((*(short *)(iVar2 + 0x4e) < *(short *)((int)param_1 + 0x4e)) &&
       (*(short *)(iVar2 + 0x4c) < *(short *)((int)param_1 + 0x4c))) {
      iVar2 = FUN_00422380(*(void **)((int)this + 0x70),
                           *(int *)(iVar2 + 0x50) + *(int *)((int)DAT_004e2404 + 0x10c));
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)((int)this + 0x40) + 0x50) + 1;
        goto LAB_00406280;
      }
    }
    else if ((*(short *)(iVar2 + 0x4e) < *(short *)((int)param_1 + 0x4e)) &&
            (*(short *)((int)param_1 + 0x4c) < *(short *)(iVar2 + 0x4c))) {
      iVar2 = FUN_00422380(*(void **)((int)this + 0x70),
                           *(int *)(iVar2 + 0x50) - *(int *)((int)DAT_004e2404 + 0x10c));
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)((int)this + 0x40) + 0x50) + 1;
LAB_00406280:
        iVar2 = FUN_00422380(*(void **)((int)this + 0x70),iVar2);
        if (iVar2 == 0) {
LAB_0040635f:
          iVar8 = (int)*(short *)((int)param_1 + 0x4e);
          iVar5 = (int)*(short *)((int)param_1 + 0x4c);
          iVar2 = *(int *)((int)this + 0x40);
          iVar7 = -1;
          iVar9 = -1;
          if (iVar2 != 0) {
            iVar7 = (int)*(short *)(iVar2 + 0x4e);
            iVar9 = (int)*(short *)(iVar2 + 0x4c);
          }
          if ((((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3 != (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3
               ) || ((int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3 !=
                     (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3)) || (iVar7 == -1)) {
            FUN_0043b400(DAT_004e2408,*(int *)((int)this + 0x10),iVar7,iVar9,iVar8,iVar5);
          }
          FUN_0043b370(DAT_004e2408,iVar8,iVar5);
          pvVar3 = *(void **)((int)this + 0x70);
          if ((pvVar3 != (void *)0x0) && (*(char *)((int)pvVar3 + 0x5a) != '\0')) {
            FUN_004221f0(pvVar3,*(int *)((int)this + 0x40),(int)param_1,*(int *)((int)this + 0x50));
          }
          FUN_00412610(this,param_1);
          if (((*(int *)((int)this + 0x90) != 0) && (*(int *)((int)this + 0x8c) != -1)) &&
             ((*(int *)((int)this + 0x84) == 0 &&
              (*(char *)(*(int *)((int)this + 0x50) + 0x2ae) == '\0')))) {
            iVar2 = FUN_00414c30(DAT_004e240c);
            if (((iVar2 != 0) && (*(int *)(iVar2 + 0x7c) == 0)) &&
               (*(int *)((int)this + 0x90) != *(int *)(iVar2 + 0x40))) {
              bVar1 = FUN_00405960(this,iVar2);
              if (CONCAT31(extraout_var,bVar1) != 0) {
                iVar2 = *(int *)((int)this + 0x8c);
                FUN_00405ad0(this,-1,-1);
                puVar6 = operator_new(0x44);
                local_4 = 1;
                if (puVar6 == (undefined4 *)0x0) {
                  piVar4 = (int *)0x0;
                }
                else {
                  piVar4 = FUN_0042fdb0(puVar6);
                }
                piVar4[1] = *(int *)((int)this + 0x10);
                piVar4[5] = iVar2;
                piVar4[6] = 0;
                local_4 = 0xffffffff;
                FUN_00412e90(piVar4);
              }
            }
          }
          ExceptionList = local_c;
          return 1;
        }
      }
    }
    else {
      if ((*(short *)((int)param_1 + 0x4e) < *(short *)(iVar2 + 0x4e)) &&
         (*(short *)((int)param_1 + 0x4c) < *(short *)(iVar2 + 0x4c))) {
        iVar2 = *(int *)(iVar2 + 0x50) - *(int *)((int)DAT_004e2404 + 0x10c);
      }
      else {
        if ((*(short *)(iVar2 + 0x4e) <= *(short *)((int)param_1 + 0x4e)) ||
           (*(short *)((int)param_1 + 0x4c) <= *(short *)(iVar2 + 0x4c))) goto LAB_0040635f;
        iVar2 = *(int *)(iVar2 + 0x50) + *(int *)((int)DAT_004e2404 + 0x10c);
      }
      iVar2 = FUN_00422380(*(void **)((int)this + 0x70),iVar2);
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)((int)this + 0x40) + 0x50) + -1;
        goto LAB_00406280;
      }
    }
  }
  FUN_00404880(*(int *)((int)this + 0x60));
  pvVar3 = operator_new(0xd8);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00431b50(pvVar3,(uint)(*(int *)((int)this + 0x84) != -1));
  }
  piVar4[1] = *(int *)((int)this + 0x10);
  local_4 = 0xffffffff;
  iVar2 = FUN_00429b40(DAT_004e2404,*(int *)((int)this + 0x44),*(int *)((int)this + 0x48));
  if (iVar2 != 0) {
    iVar2 = FUN_00422380(*(void **)((int)this + 0x70),*(int *)(iVar2 + 0x50));
    if (iVar2 == 0) {
      if (*(int *)((int)this + 0x8c) == 0) {
        piVar4[5] = *(int *)((int)this + 0x44);
        piVar4[6] = *(int *)((int)this + 0x48);
      }
      else {
        piVar4[8] = *(int *)((int)this + 0x8c);
      }
      goto LAB_00406336;
    }
  }
  piVar4[5] = (int)*(short *)(*(int *)((int)this + 0x40) + 4);
  piVar4[6] = (int)*(short *)(*(int *)((int)this + 0x40) + 6);
LAB_00406336:
  piVar4[7] = 1;
  FUN_00412e90(piVar4);
  ExceptionList = local_c;
  return 0;
}

