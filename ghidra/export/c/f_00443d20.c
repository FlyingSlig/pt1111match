// FUNCTION: PORT1111 0x00443d20
// name: FUN_00443d20
// sig: undefined4 FUN_00443d20(void * this, int * param_1, int * param_2, void * param_3, int param_4, int param_5, int param_6)


undefined4 __thiscall
FUN_00443d20(void *this,int *param_1,int *param_2,void *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = -999999;
  if (param_4 != 0) {
    local_8 = 999999;
  }
  iVar5 = 0;
  uVar2 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)((int)this + 0x10)) {
        do {
          iVar1 = *(int *)(*(int *)((int)this + 4) +
                          (*(int *)((int)this + 0x14) * iVar5 + iVar4) * 4);
          if (param_4 == 0) {
            if (local_8 < iVar1) goto LAB_00443de1;
LAB_00443d80:
            if (((iVar1 == local_8) && (iVar1 = _rand(), iVar1 % 10 != 0)) &&
               (iVar1 = FUN_00429830(DAT_004e2404,iVar4,iVar5,param_5,param_6,param_3), iVar1 != 0))
            goto LAB_00443db3;
          }
          else {
            if (local_8 <= iVar1) goto LAB_00443d80;
LAB_00443de1:
            iVar3 = FUN_00429830(DAT_004e2404,iVar4,iVar5,param_5,param_6,param_3);
            if (iVar3 != 0) {
              local_4 = 1;
              local_8 = iVar1;
LAB_00443db3:
              *param_1 = iVar4;
              *param_2 = iVar5;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)this + 0x10));
      }
      iVar5 = iVar5 + 1;
      uVar2 = local_4;
    } while (iVar5 < *(int *)((int)this + 0x14));
  }
  return uVar2;
}

