// FUNCTION: PORT1111 0x0047bea0
// name: FUN_0047bea0
// sig: undefined FUN_0047bea0(undefined2 * param_1)


void __fastcall FUN_0047bea0(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *(int *)(param_1 + 6);
  if (iVar7 != 0) {
    if (*(char *)((int)param_1 + 0x11) != -1) {
      *param_1 = 0;
      param_1[1] = 0;
      iVar7 = FUN_0047e810(iVar7);
      param_1[4] = (short)iVar7;
      iVar7 = FUN_0047e870(*(int *)(param_1 + 6));
      param_1[5] = (short)iVar7;
      return;
    }
    iVar7 = *(int *)(iVar7 + 0x58);
    uVar8 = (uint)*(byte *)(param_1 + 8);
    uVar2 = *(undefined4 *)(iVar7 + 4 + uVar8 * 0x14);
    uVar3 = *(undefined4 *)(iVar7 + 0xc + uVar8 * 0x14);
    puVar1 = (undefined4 *)(iVar7 + uVar8 * 0x14);
    uVar4 = puVar1[2];
    uVar5 = *puVar1;
    uVar6 = puVar1[4];
    *param_1 = (short)uVar6;
    param_1[1] = (short)((uint)uVar6 >> 0x10);
    param_1[4] = (short)uVar4 - (short)uVar5;
    param_1[5] = (short)uVar3 - (short)uVar2;
  }
  return;
}

