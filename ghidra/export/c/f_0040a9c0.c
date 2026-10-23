// FUNCTION: PORT1111 0x0040a9c0
// name: FUN_0040a9c0
// sig: undefined FUN_0040a9c0(void * this, int param_1, int param_2, undefined4 param_3)


void __thiscall FUN_0040a9c0(void *this,int param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *this_00;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b5c4b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = FUN_0040a480(param_3);
  if ((*(int *)((int)this + 0x28) != -0x270f0000) &&
     (iVar9 = iVar5 - *(int *)((int)this + 0x28), uVar11 = FUN_0043a240(iVar9,extraout_EDX,iVar9),
     0x19220 < (int)uVar11)) {
    FUN_0040a900((int)this);
  }
  *(int *)((int)this + 0x28) = iVar5;
  piVar10 = (int *)**(int **)((int)this + 0x14);
  if (piVar10 != *(int **)((int)this + 0x14)) {
    do {
      piVar6 = (int *)FUN_00414c30(DAT_004e240c);
      if (piVar6 != (int *)0x0) {
        iVar9 = (**(code **)(*piVar6 + 0x24))();
        uVar11 = (**(code **)(*piVar6 + 0x28))();
        iVar7 = (int)uVar11 << 0x10;
        uVar11 = FUN_0043a130(extraout_ECX,(int)((ulonglong)uVar11 >> 0x20),iVar5);
        uVar12 = FUN_0043a0f0(extraout_ECX_00,(int)((ulonglong)uVar11 >> 0x20),iVar5);
        uVar13 = FUN_0043a130(extraout_ECX_01,(int)((ulonglong)uVar12 >> 0x20),0x19220 - iVar5);
        uVar14 = FUN_0043a0f0(extraout_ECX_02,(int)((ulonglong)uVar13 >> 0x20),0x19220 - iVar5);
        lVar1 = (longlong)(int)uVar11 * (longlong)iVar7 + 0x8000;
        lVar2 = (longlong)(int)uVar12 * (longlong)iVar7 + 0x8000;
        lVar3 = (longlong)(int)uVar13 * (longlong)(iVar9 << 0x10) + 0x8000;
        lVar4 = (longlong)(int)uVar14 * (longlong)(iVar9 << 0x10) + 0x8000;
        this_00 = operator_new(0xd8);
        uStack_4 = 0;
        if (this_00 == (void *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = FUN_00431b50(this_00,0);
        }
        piVar8[1] = piVar6[4];
        piVar8[5] = (int)(param_1 * 0x10000 +
                          ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + 0x8000)
                    >> 0x10;
        piVar8[6] = (int)((param_2 * 0x10000 -
                          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10)) +
                          ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + 0x8000)
                    >> 0x10;
        uStack_4 = 0xffffffff;
        FUN_00412e90(piVar8);
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)*(int *)((int)this + 0x14));
  }
  if (*(int *)((int)this + 0xc) != 0) {
    FUN_0040a630((int)this);
  }
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = pvStack_c;
  return;
}

