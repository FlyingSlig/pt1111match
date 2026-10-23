// FUNCTION: PORT1111 0x0047eea0
// name: FUN_0047eea0
// sig: undefined FUN_0047eea0(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)


void __thiscall FUN_0047eea0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004ba550;
  local_10 = ExceptionList;
  local_28 = *param_3;
  local_24 = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_20 = param_3[2];
  local_1c = param_3[3];
  local_18 = param_3[4];
  local_14 = &stack0xffffffcc;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x14;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x14;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffcc;
    if (0xcccccccU - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_0047ee30();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x14;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xccccccc - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x14;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_00472240((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x14);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0047ea80(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0047ead0(puVar5,param_2,&local_28);
      FUN_0047ea80(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 5);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 5;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 5;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0x14) < param_2) {
      FUN_0047ea80(param_1,puVar4,param_1 + param_2 * 5);
      local_8 = 2;
      FUN_0047ecb0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x14,&local_28)
      ;
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x14;
      *(int *)((int)this + 8) = iVar3;
      FUN_0047e9f0(param_1,(undefined4 *)(iVar3 + param_2 * -0x14),&local_28);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0047ea80(puVar4 + param_2 * -5,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0047ea30(param_1,puVar4 + param_2 * -5,puVar4);
    FUN_0047e9f0(param_1,param_1 + param_2 * 5,&local_28);
  }
  ExceptionList = local_10;
  return;
}

