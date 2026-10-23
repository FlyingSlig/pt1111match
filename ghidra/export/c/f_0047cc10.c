// FUNCTION: PORT1111 0x0047cc10
// name: FUN_0047cc10
// sig: undefined FUN_0047cc10(void * this, uint param_1, int param_2)


void __thiscall FUN_0047cc10(void *this,uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_34;
  void *local_30;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 local_24;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba430;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x18) != 0) {
    ExceptionList = &local_c;
    local_30 = this;
    FUN_00465cf0(&local_34);
    piVar4 = (int *)**(int **)((int)this + 0x8c);
    local_4 = 0;
    if (param_2 == 0) {
      local_28 = &PTR_FUN_004c66b8;
      local_24 = 0;
      local_10 = 0;
      local_20 = (int *)0x0;
      local_18 = 0;
      local_1c = 0;
      local_4 = 1;
      iVar1 = FUN_00495450(*(void **)(DAT_004e2b14 + 0xe8),param_1,&local_34,&local_2c,
                           (int)&local_28);
      if ((iVar1 != 0) && (uVar6 = 0, 0 < (int)local_1c)) {
        do {
          piVar4 = (int *)**(int **)((int)this + 0x8c);
          if (piVar4 != *(int **)((int)this + 0x8c)) {
            do {
              piVar2 = local_20;
              if (uVar6 < local_1c) {
                piVar2 = local_20 + uVar6;
              }
              piVar2 = (int *)(**(code **)(*(int *)piVar4[2] + 0x5c))(*piVar2);
              if (piVar2 != (int *)0x0) {
                piVar4 = local_20;
                if (uVar6 < local_1c) {
                  piVar4 = local_20 + uVar6;
                }
                FUN_004959c0(*(void **)(DAT_004e2b14 + 0xe8),param_1,*piVar4);
                iVar1 = *piVar2;
                uVar3 = local_2c;
                uVar5 = FUN_00465e00(&local_34);
                (**(code **)(iVar1 + 0x58))(uVar5,uVar3);
                break;
              }
              piVar4 = (int *)*piVar4;
            } while (piVar4 != (int *)*(int *)((int)local_30 + 0x8c));
          }
          uVar6 = uVar6 + 1;
          this = local_30;
        } while ((int)uVar6 < (int)local_1c);
      }
      local_28 = &PTR_FUN_004c66b8;
      if (local_20 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      local_1c = 0;
      local_24 = 0;
    }
    else {
      iVar1 = FUN_00495450(*(void **)(DAT_004e2b14 + 0xe8),param_1,&local_34,&local_2c,0);
      if (((iVar1 != 0) &&
          (iVar1 = FUN_00495530(*(void **)(DAT_004e2b14 + 0xe8),param_1,param_2), iVar1 != 0)) &&
         (piVar4 != *(int **)((int)local_30 + 0x8c))) {
        do {
          piVar2 = (int *)(**(code **)(*(int *)piVar4[2] + 0x5c))(param_2);
          if (piVar2 != (int *)0x0) {
            FUN_004959c0(*(void **)(DAT_004e2b14 + 0xe8),param_1,param_2);
            iVar1 = *piVar2;
            uVar3 = FUN_00465e00(&local_34);
            (**(code **)(iVar1 + 0x58))(uVar3,local_2c);
            break;
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)((int)local_30 + 0x8c));
      }
    }
    local_4 = 0xffffffff;
    FUN_00465e40(&local_34);
  }
  ExceptionList = local_c;
  return;
}

