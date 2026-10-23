// FUNCTION: PORT1111 0x004b0170
// name: FUN_004b0170
// sig: undefined FUN_004b0170(int * param_1, uint * param_2, int param_3)


void __cdecl FUN_004b0170(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte local_10 [4];
  byte local_c [4];
  byte bStack_8;
  byte local_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  byte bStack_4;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    FUN_004ac6e0(param_1,s_Out_of_place_IHDR_004dfb24);
  }
  if (param_3 != 0xd) {
    FUN_004ac6e0(param_1,s_Invalid_IHDR_chunk_004dfb10);
  }
  param_1[0x1a] = param_1[0x1a] | 1;
  FUN_004afce0(param_1,local_10,0xd);
  FUN_004afd10(param_1,0);
  uVar2 = FUN_004afc90(local_10);
  uVar3 = FUN_004afc90(local_c);
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  *(byte *)((int)param_1 + 0x127) = bStack_8;
  *(byte *)((int)param_1 + 0x123) = bStack_4;
  *(byte *)((int)param_1 + 0x126) = local_7;
  switch((uint)local_7) {
  case 0:
  case 3:
    *(undefined1 *)((int)param_1 + 0x12a) = 1;
    break;
  case 2:
    *(undefined1 *)((int)param_1 + 0x12a) = 3;
    break;
  case 4:
    *(undefined1 *)((int)param_1 + 0x12a) = 2;
    break;
  case 6:
    *(undefined1 *)((int)param_1 + 0x12a) = 4;
  }
  bVar1 = *(char *)((int)param_1 + 0x12a) * bStack_8;
  *(byte *)((int)param_1 + 0x129) = bVar1;
  param_1[0x36] = bVar1 * uVar2 + 7 >> 3;
  FUN_004a5ea0(param_1,param_2,uVar2,uVar3,(uint)bStack_8,(uint)local_7,(uint)bStack_4,
               CONCAT12(bStack_4,CONCAT11(uStack_5,uStack_6)) & 0xff,
               CONCAT11(bStack_4,uStack_5) & 0xff);
  return;
}

