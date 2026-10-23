// FUNCTION: PORT1111 0x00462dd0
// name: FUN_00462dd0
// sig: undefined FUN_00462dd0(int param_1, int param_2, int param_3)


void __cdecl FUN_00462dd0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = *(int *)(param_1 + 0x1448);
  iVar3 = *(int *)(param_1 + 0xb54 + param_3 * 4);
  iVar7 = param_3 * 2;
  bVar8 = SBORROW4(iVar7,iVar6);
  iVar5 = iVar7 - iVar6;
  if (iVar6 < iVar7) {
    *(int *)(param_1 + 0xb54 + param_3 * 4) = iVar3;
    return;
  }
  do {
    iVar6 = iVar7;
    if (bVar8 != iVar5 < 0) {
      iVar5 = *(int *)(param_1 + 0xb58 + iVar7 * 4);
      iVar4 = *(int *)(param_1 + 0xb54 + iVar7 * 4);
      uVar1 = *(ushort *)(param_2 + iVar5 * 4);
      uVar2 = *(ushort *)(param_2 + iVar4 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x1450 + param_1) <= *(byte *)(param_1 + 0x1450 + iVar4))))) {
        iVar6 = iVar7 + 1;
      }
    }
    iVar5 = *(int *)(param_1 + 0xb54 + iVar6 * 4);
    uVar1 = *(ushort *)(param_2 + iVar3 * 4);
    uVar2 = *(ushort *)(param_2 + iVar5 * 4);
    if (uVar1 < uVar2) break;
    if ((uVar1 == uVar2) &&
       (*(byte *)(param_1 + 0x1450 + iVar3) <= *(byte *)(iVar5 + 0x1450 + param_1))) {
      *(int *)(param_1 + 0xb54 + param_3 * 4) = iVar3;
      return;
    }
    iVar7 = iVar6 * 2;
    *(int *)(param_1 + 0xb54 + param_3 * 4) = iVar5;
    iVar4 = *(int *)(param_1 + 0x1448);
    bVar8 = SBORROW4(iVar7,iVar4);
    iVar5 = iVar7 - iVar4;
    param_3 = iVar6;
  } while (iVar5 == 0 || iVar7 < iVar4);
  *(int *)(param_1 + 0xb54 + param_3 * 4) = iVar3;
  return;
}

