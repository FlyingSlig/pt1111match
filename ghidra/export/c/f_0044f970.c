// FUNCTION: PORT1111 0x0044f970
// name: FUN_0044f970
// sig: uint FUN_0044f970(int param_1, int param_2, uint param_3)


uint __cdecl FUN_0044f970(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_8;
  uint local_4;
  
  local_8 = 0;
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    return 0xffffff9a;
  }
  if (*piVar1 == 0) {
    return 0xffffff9c;
  }
  if (param_3 != 0) {
    piVar1[4] = param_2;
    piVar1[5] = param_3;
    if ((uint)piVar1[0x17] < param_3) {
      piVar1[5] = piVar1[0x17];
    }
    iVar4 = piVar1[5];
    do {
      if (iVar4 == 0) {
        return local_8;
      }
      if ((piVar1[2] == 0) && (uVar5 = piVar1[0x16], uVar5 != 0)) {
        local_4 = 0x4000;
        if (uVar5 < 0x4000) {
          local_4 = uVar5;
        }
        iVar4 = (*(code *)piVar1[0x1c])(piVar1[0x1f],piVar1[0x20],piVar1[0x22] + piVar1[0xf],0);
        if ((iVar4 != 0) ||
           (uVar5 = (*(code *)piVar1[0x19])(piVar1[0x1f],piVar1[0x20],*piVar1,local_4),
           uVar5 != local_4)) {
          return 0xffffffff;
        }
        if ((*(int *)(param_1 + 0xa0) != 0) && (uVar5 = 0, local_4 != 0)) {
          do {
            uVar6 = *(uint *)(param_1 + 0xac) & 0xfffd | 2;
            *(byte *)(*piVar1 + uVar5) =
                 *(byte *)(*piVar1 + uVar5) ^ (byte)((uVar6 ^ 1) * uVar6 >> 8);
            uVar3 = FUN_0044edb0();
            *(undefined1 *)(*piVar1 + uVar5) = uVar3;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_4);
        }
        piVar1[0xf] = piVar1[0xf] + local_4;
        piVar1[0x16] = piVar1[0x16] - local_4;
        piVar1[1] = *piVar1;
        piVar1[2] = local_4;
      }
      if ((piVar1[0x21] == 0) || (piVar1[0x23] != 0)) {
        uVar5 = piVar1[2];
        if ((uVar5 == 0) && (piVar1[0x16] == 0)) {
          return local_8;
        }
        uVar6 = piVar1[5];
        if (uVar5 <= (uint)piVar1[5]) {
          uVar6 = uVar5;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)(uVar5 + piVar1[4]) = *(undefined1 *)(uVar5 + piVar1[1]);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        uVar5 = FUN_0045fb90(piVar1[0x14],(byte *)piVar1[4],uVar6);
        piVar1[0x14] = uVar5;
        piVar1[0x17] = piVar1[0x17] - uVar6;
        piVar1[2] = piVar1[2] - uVar6;
        piVar1[5] = piVar1[5] - uVar6;
        local_8 = local_8 + uVar6;
        piVar1[4] = piVar1[4] + uVar6;
        piVar1[1] = piVar1[1] + uVar6;
        piVar1[6] = piVar1[6] + uVar6;
      }
      else {
        pbVar2 = (byte *)piVar1[4];
        iVar4 = piVar1[6];
        uVar5 = FUN_0045fea0(piVar1 + 1,2);
        uVar7 = piVar1[6] - iVar4;
        uVar6 = FUN_0045fb90(piVar1[0x14],pbVar2,uVar7);
        local_8 = local_8 + uVar7;
        piVar1[0x14] = uVar6;
        piVar1[0x17] = piVar1[0x17] - uVar7;
        if (uVar5 == 1) {
          return local_8;
        }
        if (uVar5 != 0) {
          return uVar5;
        }
      }
      iVar4 = piVar1[5];
    } while( true );
  }
  return 0;
}

