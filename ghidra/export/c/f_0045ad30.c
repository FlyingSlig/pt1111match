// FUNCTION: PORT1111 0x0045ad30
// name: FUN_0045ad30
// sig: undefined FUN_0045ad30(void * this, int param_1, int param_2)


void __thiscall FUN_0045ad30(void *this,int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uchar *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_EBP;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar8 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9418;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = (void *)FUN_00484bd0(param_1);
  FUN_0047fd20(iVar8);
  if (*(void **)((int)this + 0x24) == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_0047d0a0(*(void **)((int)this + 0x24),param_2 + 0x47);
  }
  puVar4 = FUN_00459450(&param_1,1);
  uVar9 = 0;
  local_4 = 0;
  puVar5 = (uchar *)FUN_00465e00(puVar4);
  if (*(void **)((int)pvVar3 + 0xc4) != (void *)0x0) {
    FUN_004737d0(*(void **)((int)pvVar3 + 0xc4),puVar5);
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&param_1);
  FUN_00471e00(pvVar3,1);
  uVar6 = FUN_00457c20((int)pvVar2);
  if (uVar6 != 0) {
    piVar1 = (int *)(param_2 * 700 + 0xd8 + (int)this);
    do {
      pvVar3 = (void *)FUN_004576e0(pvVar2,uVar9);
      (**(code **)(*piVar1 + 8))();
      puVar4 = FUN_00459720(pvVar3,&param_1,1);
      iVar8 = *piVar1;
      uVar15 = 1;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      local_4 = 1;
      uVar7 = FUN_00465e00(puVar4);
      (**(code **)(iVar8 + 0x18))(uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
      local_4 = 0xffffffff;
      FUN_00465e40(&param_1);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  iVar8 = param_2 * 700;
  pvVar3 = (void *)0x0;
  (**(code **)(*(int *)(iVar8 + 0xd8 + (int)this) + 0x18))("Adicionar",0,0,0,0,0,1);
  (**(code **)(*(int *)(iVar8 + 0xd8 + (int)this) + 0x20))(*(undefined4 *)((int)pvVar2 + 0x14),0);
  pvVar2 = (void *)FUN_0047d060(*(void **)((int)this + 0x24),unaff_EBP + 1000);
  FUN_004810c0((int)this + 0x4c);
  puVar4 = FUN_0045a460(&stack0xffffffe4);
  puVar5 = (uchar *)FUN_00465e00(puVar4);
  FUN_004737d0(pvVar2,puVar5);
  FUN_00465e40((undefined4 *)&stack0xffffffe4);
  ExceptionList = pvVar3;
  return;
}

