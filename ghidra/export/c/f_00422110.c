// FUNCTION: PORT1111 0x00422110
// name: FUN_00422110
// sig: undefined FUN_00422110(void * this, int param_1, int param_2)


void __thiscall FUN_00422110(void *this,int param_1,int param_2)

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
  iVar6 = 0;
  local_4 = 0;
  if (0 < *piVar4) {
    do {
      iVar5 = *(int *)(iVar6 + 8 + (int)piVar4);
      if (iVar5 <= *(int *)(iVar6 + 0xc + (int)piVar4)) {
        do {
          uVar3 = *(short *)(param_1 + 0x4e) + iVar5;
          if (((uVar3 < *(uint *)((int)this + 100)) &&
              (uVar2 = (int)*(short *)(param_1 + 0x4c) + *(int *)(iVar6 + 4 + (int)piVar4),
              uVar2 < *(uint *)((int)this + 0x68))) &&
             (psVar1 = (short *)(*(int *)((int)this + 0x5c) +
                                (*(int *)((int)this + 100) * uVar2 + uVar3) * 2),
             *psVar1 = *psVar1 + -1,
             *(short *)(*(int *)((int)this + 0x5c) + (*(int *)((int)this + 100) * uVar2 + uVar3) * 2
                       ) == 0)) {
            this_00 = (void *)FUN_00429ac0(DAT_004e2404,uVar3,uVar2);
            if (*(char *)((int)this + 0x5b) == '\0') {
              FUN_004269d0(this_00,*(char *)((int)this + 0x34));
            }
            else {
              FUN_00428c60(this_00);
            }
          }
          piVar4 = *(int **)(param_2 + 0x50);
          iVar5 = iVar5 + 1;
        } while (iVar5 <= *(int *)(iVar6 + 0xc + (int)piVar4));
      }
      piVar4 = *(int **)(param_2 + 0x50);
      local_4 = local_4 + 1;
      iVar6 = iVar6 + 0xc;
    } while (local_4 < *piVar4);
  }
  return;
}

