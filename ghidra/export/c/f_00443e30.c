// FUNCTION: PORT1111 0x00443e30
// name: FUN_00443e30
// sig: undefined4 FUN_00443e30(void * this, int * param_1, int * param_2, void * param_3, int param_4, int param_5, int param_6)


undefined4 __thiscall
FUN_00443e30(void *this,int *param_1,int *param_2,void *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  local_10 = -999999;
  local_c = -999999;
  local_4 = 0;
  if (param_4 != 0) {
    local_10 = 999999;
  }
  if (param_5 != 0) {
    local_c = 999999;
  }
  iVar4 = 0;
  if (*(int *)((int)this + 0x14) < 1) {
    return 0;
  }
  do {
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x10)) {
      do {
        iVar2 = *(int *)(*(int *)((int)this + 4) + (*(int *)((int)this + 0x14) * iVar4 + iVar3) * 4)
        ;
        if (700 < iVar2) {
          iVar2 = 700;
        }
        if (param_4 == 0) {
          if (iVar2 <= local_10) goto LAB_00443f0f;
LAB_00443ec1:
          iVar1 = FUN_00429830(DAT_004e2404,iVar3,iVar4,4,4,param_3);
          if (iVar1 == 0) goto LAB_00443f0f;
          *param_1 = iVar3;
          *param_2 = iVar4;
          local_c = *(int *)(*(int *)(param_6 + 4) + (*(int *)(param_6 + 0x14) * iVar4 + iVar3) * 4)
          ;
          local_4 = 1;
          local_10 = iVar2;
LAB_00443f15:
          iVar2 = *(int *)(*(int *)(param_6 + 4) + (*(int *)(param_6 + 0x14) * iVar4 + iVar3) * 4);
          if (param_5 == 0) {
            if (local_c < iVar2) {
LAB_00443f39:
              iVar1 = FUN_00429830(DAT_004e2404,iVar3,iVar4,4,4,param_3);
              if (iVar1 != 0) {
                *param_1 = iVar3;
                *param_2 = iVar4;
                local_4 = 1;
                local_c = iVar2;
              }
            }
          }
          else if (iVar2 < local_c) goto LAB_00443f39;
        }
        else {
          if (iVar2 < local_10) goto LAB_00443ec1;
LAB_00443f0f:
          if (iVar2 == local_10) goto LAB_00443f15;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)this + 0x10));
    }
    iVar4 = iVar4 + 1;
    if (*(int *)((int)this + 0x14) <= iVar4) {
      return local_4;
    }
  } while( true );
}

