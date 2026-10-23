// FUNCTION: PORT1111 0x00457710
// name: FUN_00457710
// sig: void * FUN_00457710(void * this, void * param_1)


void * __thiscall FUN_00457710(void *this,void *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8f19;
  local_c = ExceptionList;
  uVar3 = 0;
  local_10 = 0;
  if ((*(int *)((int)this + 8) == 0) ||
     (uVar4 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2, uVar4 == 0)) {
    ExceptionList = &local_c;
    FUN_00466af0(param_1,"",0xffffffff);
  }
  else {
    ExceptionList = &local_c;
    FUN_00465cf0(&local_18);
    local_4 = 1;
    if (uVar4 != 0) {
      do {
        puVar1 = FUN_00459720(*(void **)(*(int *)((int)this + 8) + uVar3 * 4),&local_14,0);
        local_4._0_1_ = 2;
        FUN_00466a30(&local_18,puVar1);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00465e40(&local_14);
        pcVar2 = "";
        if (uVar3 != uVar4 - 1) {
          pcVar2 = " and ";
        }
        thunk_FUN_00466040(&local_18,pcVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    FUN_00466b20(param_1,&local_18);
    local_10 = 1;
    local_4 = local_4 & 0xffffff00;
    FUN_00465e40(&local_18);
  }
  ExceptionList = local_c;
  return param_1;
}

