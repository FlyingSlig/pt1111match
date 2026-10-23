// FUNCTION: PORT1111 0x0048e020
// name: FUN_0048e020
// sig: undefined FUN_0048e020(void * this, int param_1, int param_2, int param_3, int param_4, int param_5)


void __thiscall FUN_0048e020(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int aiStack_400 [256];
  
  iVar6 = 0;
  do {
    aiStack_400[iVar6] = iVar6 * iVar6;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x100);
  iVar6 = (**(code **)(**(int **)((int)this + 0x20) + 0x30))();
  uVar7 = (**(code **)(**(int **)((int)this + 0x20) + 0x14))();
  uVar10 = 0;
  if (*(short *)((int)this + 0x1e) != 0) {
    uVar11 = *(ushort *)((int)this + 0x1c);
    do {
      pbVar8 = (byte *)((uVar7 & 0xffff) * (uint)uVar10 + iVar6);
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar4 = ((uint)(pbVar8[2] >> 3) * 0x21 + (uint)(pbVar8[1] >> 3)) * 0x21 + 0x463 +
                  (uint)(*pbVar8 >> 3);
          *(short *)(*(int *)((int)this + 0x18) + ((uint)uVar11 * (uint)uVar10 + (uint)uVar9) * 2) =
               (short)iVar4;
          piVar3 = (int *)(param_1 + iVar4 * 4);
          *piVar3 = *piVar3 + 1;
          piVar3 = (int *)(param_2 + iVar4 * 4);
          *piVar3 = *piVar3 + (uint)pbVar8[2];
          piVar3 = (int *)(param_3 + iVar4 * 4);
          *piVar3 = *piVar3 + (uint)pbVar8[1];
          piVar3 = (int *)(param_4 + iVar4 * 4);
          *piVar3 = *piVar3 + (uint)*pbVar8;
          pbVar1 = pbVar8 + 2;
          bVar5 = *pbVar8;
          pbVar2 = pbVar8 + 1;
          pbVar8 = pbVar8 + 3;
          uVar9 = uVar9 + 1;
          *(float *)(param_5 + iVar4 * 4) =
               (float)(aiStack_400[*pbVar1] + aiStack_400[bVar5] + aiStack_400[*pbVar2]) +
               *(float *)(param_5 + iVar4 * 4);
          uVar11 = *(ushort *)((int)this + 0x1c);
        } while (uVar9 < uVar11);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)((int)this + 0x1e));
  }
  (**(code **)(**(int **)((int)this + 0x20) + 0x34))();
  return;
}

