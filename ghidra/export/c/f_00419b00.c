// FUNCTION: PORT1111 0x00419b00
// name: FUN_00419b00
// sig: undefined FUN_00419b00(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)


void __thiscall FUN_00419b00(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b6630;
  local_10 = ExceptionList;
  local_20 = *param_3;
  local_1c = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_18 = param_3[2];
  local_14 = &stack0xffffffd4;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0xc;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd4;
    if (0x15555555U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_00419830();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x15555555 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_0041f180((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0xc);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0041f420(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_004194c0(puVar5,param_2,&local_20);
      FUN_0041f420(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 3);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 3;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 3;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0xc) < param_2) {
      FUN_0041f420(param_1,puVar4,param_1 + param_2 * 3);
      local_8 = 2;
      FUN_004196a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0xc,&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0xc;
      *(int *)((int)this + 8) = iVar3;
      FUN_00419200(param_1,(undefined4 *)(iVar3 + param_2 * -0xc),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0041f420(puVar4 + param_2 * -3,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_004191c0(param_1,puVar4 + param_2 * -3,puVar4);
    FUN_00419200(param_1,param_1 + param_2 * 3,&local_20);
  }
  ExceptionList = local_10;
  return;
}

