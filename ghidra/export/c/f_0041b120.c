// FUNCTION: PORT1111 0x0041b120
// name: FUN_0041b120
// sig: uint FUN_0041b120(void * this, uint param_1)


uint __thiscall FUN_0041b120(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int aiStack_5c [3];
  int local_28 [4];
  int local_18;
  uint local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b66fb;
  local_c = ExceptionList;
  uVar7 = param_1;
  if (*(int *)(param_1 + 8) == 3) {
    piVar10 = (int *)(param_1 + 0xc);
    iVar9 = *(int *)(*piVar10 + 8) + -5;
    param_1 = iVar9 / 6;
    uVar7 = param_1;
    if ((iVar9 % 6 == 0) && (iVar9 != 0)) {
      piVar10 = (int *)**(int **)(*piVar10 + 4);
      uVar1 = piVar10[2];
      piVar10 = (int *)*piVar10;
      local_28[1] = piVar10[2];
      piVar10 = (int *)*piVar10;
      local_28[2] = piVar10[2];
      piVar10 = (int *)*piVar10;
      local_28[3] = piVar10[2];
      piVar10 = (int *)*piVar10;
      local_18 = piVar10[2];
      ExceptionList = &local_c;
      local_14 = param_1;
      puVar6 = operator_new(param_1 * 0x18);
      local_4 = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
        uVar7 = 0;
      }
      else {
        aiStack_5c[2] = 0x41b1d6;
        uVar7 = FUN_0040d3a0(puVar6,0x18,param_1,&LAB_00419130);
      }
      local_4 = 0xffffffff;
      local_10 = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        if (0 < (int)param_1) {
          do {
            puVar2 = *(undefined4 **)*piVar10;
            uVar3 = puVar2[2];
            *puVar6 = ((undefined4 *)*piVar10)[2];
            puVar6[1] = uVar3;
            puVar2 = (undefined4 *)*puVar2;
            puVar4 = (undefined4 *)*puVar2;
            uVar3 = puVar4[2];
            puVar4 = (undefined4 *)*puVar4;
            uVar5 = puVar4[2];
            piVar10 = (int *)*puVar4;
            iVar9 = piVar10[2];
            puVar6[2] = puVar2[2];
            puVar6[3] = uVar3;
            puVar6[4] = uVar5;
            param_1 = param_1 - 1;
            puVar6[5] = iVar9;
            puVar6 = puVar6 + 6;
          } while (param_1 != 0);
        }
        if ((*(int *)((int)this + 0x198) == 0) ||
           ((uint)((*(int *)((int)this + 0x19c) - *(int *)((int)this + 0x198)) / 0x1c) <= uVar1)) {
          piVar10 = local_28;
          piVar11 = aiStack_5c;
          for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar11 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar11 = piVar11 + 1;
          }
          FUN_0041a290((void *)((int)this + 0x194),uVar1 + 1);
        }
        iVar9 = uVar1 * 0x1c;
        piVar10 = local_28;
        piVar11 = (int *)(*(int *)((int)this + 0x198) + iVar9);
        for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar11 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        }
        *(undefined4 *)(*(int *)((int)this + 0x198) + iVar9) = 1;
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)iVar9 >> 8),1);
      }
    }
  }
  ExceptionList = local_c;
  return uVar7 & 0xffffff00;
}

