// FUNCTION: PORT1111 0x00422040
// name: FUN_00422040
// sig: undefined FUN_00422040(void * this, int param_1, int param_2)


void __thiscall FUN_00422040(void *this,int param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  void *this_00;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  piVar4 = *(int **)(param_2 + 0x50);
  iVar5 = 0;
  local_4 = 0;
  if (0 < *piVar4) {
    do {
      iVar6 = *(int *)(iVar5 + 8 + (int)piVar4);
      if (iVar6 <= *(int *)(iVar5 + 0xc + (int)piVar4)) {
        do {
          uVar2 = *(short *)(param_1 + 0x4e) + iVar6;
          uVar3 = (int)*(short *)(param_1 + 0x4c) + *(int *)(iVar5 + 4 + (int)piVar4);
          if (((uVar2 < *(uint *)((int)this + 100)) && (uVar3 < *(uint *)((int)this + 0x68))) &&
             (psVar1 = (short *)(*(int *)((int)this + 0x5c) +
                                (*(int *)((int)this + 100) * uVar3 + uVar2) * 2),
             *psVar1 = *psVar1 + 1,
             *(short *)(*(int *)((int)this + 0x5c) + (*(int *)((int)this + 100) * uVar3 + uVar2) * 2
                       ) == 1)) {
            this_00 = (void *)FUN_00429ac0(DAT_004e2404,uVar2,uVar3);
            if (*(char *)((int)this + 0x5b) == '\0') {
              FUN_004269a0(this_00,*(char *)((int)this + 0x34));
            }
            else {
              FUN_004289d0(this_00);
            }
          }
          piVar4 = *(int **)(param_2 + 0x50);
          iVar6 = iVar6 + 1;
        } while (iVar6 <= *(int *)(iVar5 + 0xc + (int)piVar4));
      }
      piVar4 = *(int **)(param_2 + 0x50);
      local_4 = local_4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (local_4 < *piVar4);
  }
  return;
}

