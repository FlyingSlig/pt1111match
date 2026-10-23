// FUNCTION: PORT1111 0x00453c80
// name: FUN_00453c80
// sig: undefined4 FUN_00453c80(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_00453c80(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar7;
  
  bVar5 = FUN_0047baa0(*(int *)((int)this + 0xc));
  if (CONCAT31(extraout_var,bVar5) == 0) {
    return 0;
  }
  uVar6 = FUN_0047ba90(*(int *)((int)this + 0xc));
  iVar7 = CONCAT31(extraout_var_00,uVar6);
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xc) + 0x58);
  uVar2 = *(undefined4 *)(iVar1 + 8 + iVar7 * 0x14);
  uVar3 = *(undefined4 *)(iVar1 + 0xc + iVar7 * 0x14);
  uVar4 = *(undefined4 *)(iVar1 + 4 + iVar7 * 0x14);
  *param_1 = *(undefined4 *)(iVar1 + iVar7 * 0x14);
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return 1;
}

