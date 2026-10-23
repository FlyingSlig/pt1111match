// FUNCTION: PORT1111 0x004630e0
// name: FUN_004630e0
// sig: undefined FUN_004630e0(undefined2 * param_1, int param_2, int param_3)


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_004630e0(undefined2 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  ushort auStack_20 [16];
  
  uVar1 = 0;
  puVar3 = auStack_20;
  iVar4 = 0xf;
  do {
    puVar3 = (ushort *)((int)puVar3 + 2);
    uVar1 = (*(short *)((param_3 - (int)(auStack_20 + 1)) + (int)puVar3) + uVar1) * 2;
    iVar4 = iVar4 + -1;
    *puVar3 = uVar1;
  } while (iVar4 != 0);
  if (-1 < param_2) {
    iVar4 = param_2 + 1;
    do {
      uVar2 = (uint)(ushort)param_1[1];
      if (uVar2 != 0) {
        uVar1 = auStack_20[uVar2];
        auStack_20[uVar2] = uVar1 + 1;
        uVar2 = FUN_00463f70((uint)uVar1,uVar2);
        *param_1 = (short)uVar2;
      }
      param_1 = param_1 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

