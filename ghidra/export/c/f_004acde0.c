// FUNCTION: PORT1111 0x004acde0
// name: FUN_004acde0
// sig: undefined FUN_004acde0(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004acde0(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = param_3;
  piVar1 = param_1;
  if ((((*(byte *)(param_1 + 0x8c) & 1) == 0) && (param_3 == 0)) || (0x100 < param_3)) {
    if (*(char *)((int)param_1 + 0x126) != '\x03') {
      FUN_004ac710((int)param_1,s_Invalid_number_of_colors_in_pale_004df61c);
      return;
    }
    FUN_004ac6e0(param_1,s_Invalid_number_of_colors_in_pale_004df61c);
  }
  *(short *)(piVar1 + 0x46) = (short)uVar2;
  FUN_004ac970(piVar1,(byte *)&DAT_004c8464,uVar2 * 3);
  if (uVar2 != 0) {
    puVar3 = (undefined1 *)(param_2 + 2);
    do {
      param_1._0_3_ = CONCAT12(*puVar3,*(undefined2 *)(puVar3 + -2));
      FUN_004ac9c0(piVar1,(byte *)&param_1,3);
      puVar3 = puVar3 + 3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_004ac9f0(piVar1);
  piVar1[0x1a] = piVar1[0x1a] | 2;
  return;
}

