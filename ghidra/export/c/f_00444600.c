// FUNCTION: PORT1111 0x00444600
// name: FUN_00444600
// sig: uint FUN_00444600(void * this, int * param_1)


uint __thiscall FUN_00444600(void *this,int *param_1)

{
  void *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 uVar9;
  
  this_00 = (void *)param_1[0x2c];
  iVar2 = (**(code **)(*param_1 + 0x88))();
  puVar6 = (undefined4 *)**(undefined4 **)((int)this + 0x18);
  puVar7 = (undefined4 *)**(undefined4 **)((int)this + 0x24);
  piVar8 = (int *)**(int **)((int)this + 0xc);
  if (piVar8 != *(int **)((int)this + 0xc)) {
    do {
      iVar5 = puVar6[2];
      uVar9 = *(undefined1 *)(puVar7 + 2);
      iVar3 = FUN_00444ac0(this_00,piVar8[2]);
      uVar4 = FUN_004417d0(iVar3,iVar5,uVar9);
      if (uVar4 == 0) {
        return 0;
      }
      piVar8 = (int *)*piVar8;
      puVar6 = (undefined4 *)*puVar6;
      puVar7 = (undefined4 *)*puVar7;
    } while (piVar8 != (int *)*(int *)((int)this + 0xc));
  }
  iVar5 = (**(code **)(**(int **)((int)this_00 + 0x18) + 0x88))();
  bVar1 = FUN_004427f0(*(undefined4 *)((int)this + 4),*(int *)(iVar5 + 0x34));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar5 = FUN_004414d0(*(undefined4 *)((int)this + 4),*(int *)(iVar2 + 0x50));
    if ((*(int *)((int)this_00 + 4) == 0) || (iVar5 < 0)) {
      iVar2 = FUN_0043d1d0(*(void **)(iVar2 + 0x20c),iVar5,
                           *(int *)(*(int *)((int)this_00 + 0x18) + 0x10));
      if (iVar2 == 0) {
        uVar4 = FUN_00406020(param_1,*(int *)((int)this + 4));
        return uVar4;
      }
      *(undefined4 *)((int)this_00 + 4) = 1;
    }
    return 0;
  }
  FUN_00443c60(DAT_004e2420,*(int *)(*(int *)((int)this_00 + 0x18) + 0x10));
  return 0;
}

