// FUNCTION: PORT1111 0x00460b60
// name: FUN_00460b60
// sig: undefined FUN_00460b60(int * param_1)


void __cdecl FUN_00460b60(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar1 = param_1[9];
  do {
    uVar3 = param_1[0x19];
    uVar5 = (param_1[0xd] - uVar3) - param_1[0x1b];
    if (uVar5 == 0) {
      if ((uVar3 != 0) || (uVar6 = uVar1, param_1[0x1b] != 0)) {
LAB_00460b95:
        uVar6 = uVar5;
        if (param_1[9] + -0x106 + uVar1 <= uVar3) {
          puVar7 = (undefined4 *)(param_1[0xc] + uVar1);
          puVar9 = (undefined4 *)param_1[0xc];
          for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          param_1[0x1a] = param_1[0x1a] - uVar1;
          iVar8 = param_1[0x11];
          param_1[0x19] = param_1[0x19] - uVar1;
          param_1[0x15] = param_1[0x15] - uVar1;
          puVar4 = (ushort *)(param_1[0xf] + iVar8 * 2);
          do {
            puVar4 = puVar4 + -1;
            if (*puVar4 < uVar1) {
              uVar2 = 0;
            }
            else {
              uVar2 = *puVar4 - (short)uVar1;
            }
            iVar8 = iVar8 + -1;
            *puVar4 = uVar2;
          } while (iVar8 != 0);
          puVar4 = (ushort *)(param_1[0xe] + uVar1 * 2);
          uVar3 = uVar1;
          do {
            puVar4 = puVar4 + -1;
            if (*puVar4 < uVar1) {
              uVar2 = 0;
            }
            else {
              uVar2 = *puVar4 - (short)uVar1;
            }
            uVar3 = uVar3 - 1;
            *puVar4 = uVar2;
          } while (uVar3 != 0);
          uVar6 = uVar5 + uVar1;
        }
      }
    }
    else {
      if (uVar5 != 0xffffffff) goto LAB_00460b95;
      uVar6 = 0xfffffffe;
    }
    if (((int *)*param_1)[1] == 0) {
      return;
    }
    uVar3 = FUN_00460c90((int *)*param_1,
                         (undefined4 *)(param_1[0x1b] + param_1[0x19] + param_1[0xc]),uVar6);
    uVar3 = param_1[0x1b] + uVar3;
    param_1[0x1b] = uVar3;
    if (2 < uVar3) {
      uVar5 = (uint)*(byte *)(param_1[0x19] + param_1[0xc]);
      param_1[0x10] = uVar5;
      param_1[0x10] =
           (uVar5 << ((byte)param_1[0x14] & 0x1f) ^
           (uint)((byte *)(param_1[0x19] + param_1[0xc]))[1]) & param_1[0x13];
    }
    if (0x105 < uVar3) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  } while( true );
}

