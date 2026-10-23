// FUNCTION: PORT1111 0x0046d4d0
// name: FUN_0046d4d0
// sig: undefined FUN_0046d4d0(int * param_1)


void __fastcall FUN_0046d4d0(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  cVar4 = (**(code **)(*param_1 + 0xc))();
  if (cVar4 == '\b') {
    if (param_1[5] == 0) {
      pvVar5 = _malloc(0x200);
      param_1[5] = (int)pvVar5;
    }
    iVar6 = (**(code **)(*param_1 + 0x18))();
    iVar8 = 0;
    iVar7 = (**(code **)(*param_1 + 0x1c))();
    if (0 < iVar7) {
      pbVar9 = (byte *)(iVar6 + 1);
      do {
        pbVar1 = pbVar9 + 1;
        bVar3 = *pbVar9;
        pbVar2 = pbVar9 + -1;
        pbVar9 = pbVar9 + 4;
        *(ushort *)(param_1[5] + iVar8 * 2) =
             ((*pbVar1 & 0xfff8) << 5 | bVar3 & 0xfffc) << 3 | (ushort)(*pbVar2 >> 3);
        iVar8 = iVar8 + 1;
        iVar6 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar8 < iVar6);
    }
  }
  return;
}

