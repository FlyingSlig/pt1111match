// FUNCTION: PORT1111 0x0046e660
// name: FUN_0046e660
// sig: int * FUN_0046e660(void * this, uint param_1, undefined4 param_2)


int * __thiscall FUN_0046e660(void *this,uint param_1,undefined4 param_2)

{
  int *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 unaff_EDI;
  uint uVar16;
  uint uStack_44;
  int iStack_40;
  int iStack_38;
  int *piStack_34;
  int iStack_28;
  int iStack_24;
  int iStack_10;
  
  this_00 = FUN_0046abb0(*(int *)((int)this + 4),*(undefined4 *)((int)this + 0x20));
  uVar8 = param_1;
  iVar1 = (**(code **)(*this_00 + 0x54))(0x18,param_1,param_2);
  if (iVar1 != 0) {
    uVar12 = 0;
    iVar1 = (**(code **)(*(int *)this + 4))();
    iVar11 = (iVar1 * 0x10000 + -0x10000) % (int)param_1;
    (**(code **)(*(int *)this + 8))();
    iVar1 = (**(code **)(*(int *)this + 0x18))();
    (**(code **)(*(int *)this + 0x30))();
    uVar2 = (**(code **)(*this_00 + 0x30))();
    puVar3 = (undefined1 *)(**(code **)(*this_00 + 0x2c))(uVar2,0,0);
    iVar4 = (**(code **)(*this_00 + 0x24))();
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*this_00 + 0x14))();
      iVar4 = -iVar4;
    }
    else {
      iVar4 = (**(code **)(*this_00 + 0x14))();
    }
    if (0 < iStack_10) {
      iStack_38 = iStack_10;
      do {
        iVar15 = (int)uVar12 >> 0x10;
        this_00 = (int *)(**(code **)(*(int *)this + 0x2c))(unaff_EDI,0,iVar15);
        iVar5 = (**(code **)(*(int *)this + 8))();
        if (iVar15 < iVar5 + -1) {
          iVar15 = iVar15 + 1;
        }
        iVar5 = (**(code **)(*(int *)this + 0x2c))(puVar3,0,iVar15);
        iVar13 = (uVar12 & 0xffff) + 1;
        iVar15 = (~uVar8 & 0xffff) + 1;
        uStack_44 = 0;
        puVar7 = puVar3;
        iStack_40 = iVar11;
        if (0 < iVar11) {
          do {
            uVar16 = (uStack_44 & 0xffff) * iVar13 >> 0x10;
            iVar14 = iVar13 - uVar16;
            iVar10 = (int)uStack_44 >> 0x10;
            uVar12 = (uStack_44 & 0xffff) * iVar15 >> 0x10;
            iVar6 = iVar15 - uVar12;
            *puVar7 = (char)(*(byte *)(iVar1 + (uint)*(byte *)(iVar10 + 1 + iVar5) * 4) * uVar16 +
                             (uint)*(byte *)(iVar1 + (uint)*(byte *)(iVar10 + iStack_10) * 4) *
                             iVar6 + *(byte *)(iVar1 + (uint)*(byte *)(iStack_10 + 1 + iVar10) * 4)
                                     * uVar12 +
                             (uint)*(byte *)(iVar1 + (uint)*(byte *)(iVar10 + iVar5) * 4) * iVar14
                            >> 0x10);
            puVar7[1] = (char)(*(byte *)(iVar1 + 1 + (uint)*(byte *)(iVar10 + 1 + iVar5) * 4) *
                               uVar16 + (uint)*(byte *)(iVar1 + 1 +
                                                       (uint)*(byte *)(iVar10 + iStack_10) * 4) *
                                        iVar6 +
                               *(byte *)(iVar1 + 1 + (uint)*(byte *)(iStack_10 + 1 + iVar10) * 4) *
                               uVar12 + (uint)*(byte *)(iVar1 + 1 +
                                                       (uint)*(byte *)(iVar10 + iVar5) * 4) * iVar14
                              >> 0x10);
            puVar7[2] = (char)(*(byte *)(iVar1 + 2 + (uint)*(byte *)(iVar10 + 1 + iVar5) * 4) *
                               uVar16 + (uint)*(byte *)(iVar1 + 2 +
                                                       (uint)*(byte *)(iVar10 + iStack_10) * 4) *
                                        iVar6 +
                               *(byte *)(iVar1 + 2 + (uint)*(byte *)(iStack_10 + 1 + iVar10) * 4) *
                               uVar12 + (uint)*(byte *)(iVar1 + 2 +
                                                       (uint)*(byte *)(iVar10 + iVar5) * 4) * iVar14
                              >> 0x10);
            puVar7 = puVar7 + 3;
            uStack_44 = uStack_44 + iStack_28;
            iStack_40 = iStack_40 + -1;
          } while (iStack_40 != 0);
        }
        uVar12 = uVar8 + iStack_24;
        puVar3 = puVar3 + iVar4;
        iStack_38 = iStack_38 + -1;
        this = piStack_34;
        uVar8 = uVar12;
      } while (iStack_38 != 0);
    }
    (**(code **)(*(int *)this + 0x34))();
    (**(code **)(*this_00 + 0x34))();
    uVar8 = (**(code **)(*(int *)this + 0xc))();
    piVar9 = FUN_0046e4c0(this_00,uVar8 & 0xff);
    (**(code **)*this_00)(1);
    return piVar9;
  }
  return (int *)0x0;
}

