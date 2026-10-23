// FUNCTION: PORT1111 0x004210b0
// name: FUN_004210b0
// sig: undefined FUN_004210b0(int param_1)


void __fastcall FUN_004210b0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = *(int *)(DAT_004e2404 + 0x110) + *(int *)(DAT_004e2404 + 0x10c);
  *(undefined4 *)(param_1 + 0x48) = 1;
  while( true ) {
    bVar3 = (byte)*(int *)(param_1 + 0x48);
    if (((uint)(iVar2 * 0x10 >> (bVar3 & 0x1f)) <=
         (uint)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x44) * -2)) &&
       ((uint)(iVar2 * 0x20 >> (bVar3 & 0x1f)) <=
        (uint)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x44) * -2))) break;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 < 6) {
    *(uint *)(param_1 + 0x60) = 6 - uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  if (uVar1 < 7) {
    *(undefined4 *)(param_1 + 100) = 1;
  }
  else {
    *(uint *)(param_1 + 100) = uVar1 - 6;
  }
  if (*(int *)(param_1 + 100) < 1) {
    *(undefined4 *)(param_1 + 100) = 1;
  }
  iVar2 = FUN_0047e810(*(int *)(param_1 + 4));
  *(int *)(param_1 + 0x4c) =
       iVar2 / 2 - (*(int *)(DAT_004e2404 + 0x10c) - *(int *)(DAT_004e2404 + 0x110)) / 2;
  iVar2 = FUN_0047e870(*(int *)(param_1 + 4));
  iVar2 = iVar2 / 2 +
          ((uint)(*(int *)(DAT_004e2404 + 0x110) + *(int *)(DAT_004e2404 + 0x10c)) >>
          ((char)*(undefined4 *)(param_1 + 0x48) - 3U & 0x1f));
  *(int *)(param_1 + 0x50) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) - iVar2;
  return;
}

