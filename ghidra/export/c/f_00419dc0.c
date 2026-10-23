// FUNCTION: PORT1111 0x00419dc0
// name: FUN_00419dc0
// sig: undefined FUN_00419dc0(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)


void __thiscall FUN_00419dc0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_30 [7];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b6620;
  local_10 = ExceptionList;
  puVar1 = local_30;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar4) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    ExceptionList = &local_10;
    local_14 = &stack0xffffffc4;
    if (0x9249249U - iVar4 < param_2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc4;
      FUN_00419830();
      uVar5 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (uVar5 < iVar4 + param_2) {
      if (0x9249249 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (uVar5 < iVar4 + param_2) {
        iVar4 = FUN_00413000((int)this);
        uVar5 = iVar4 + param_2;
      }
      puVar1 = operator_new(uVar5 * 0x1c);
      local_8 = 0;
      puVar2 = (undefined4 *)FUN_00419420(*(undefined4 **)((int)this + 4),param_1,puVar1);
      FUN_00419500(puVar2,param_2,local_30);
      FUN_00419420(param_1,*(undefined4 **)((int)this + 8),puVar2 + param_2 * 7);
      iVar4 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar1 + uVar5 * 7;
      *(undefined4 **)((int)this + 8) = puVar1 + (param_2 + iVar4) * 7;
      *(undefined4 **)((int)this + 4) = puVar1;
      ExceptionList = local_10;
      return;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar1 - (int)param_1) / 0x1c) < param_2) {
      FUN_00419420(param_1,puVar1,param_1 + param_2 * 7);
      local_8 = 2;
      FUN_004196d0(*(undefined4 **)((int)this + 8),
                   param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1c,local_30);
      iVar4 = *(int *)((int)this + 8) + param_2 * 0x1c;
      *(int *)((int)this + 8) = iVar4;
      FUN_00419190(param_1,(undefined4 *)(iVar4 + param_2 * -0x1c),local_30);
      ExceptionList = local_10;
      return;
    }
    uVar3 = FUN_00419420(puVar1 + param_2 * -7,puVar1,puVar1);
    *(undefined4 *)((int)this + 8) = uVar3;
    FUN_004193f0(param_1,puVar1 + param_2 * -7,puVar1);
    FUN_00419190(param_1,param_1 + param_2 * 7,local_30);
  }
  ExceptionList = local_10;
  return;
}

