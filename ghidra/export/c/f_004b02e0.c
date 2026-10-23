// FUNCTION: PORT1111 0x004b02e0
// name: FUN_004b02e0
// sig: undefined FUN_004b02e0(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b02e0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  byte local_304;
  undefined1 local_303;
  undefined1 local_302;
  undefined4 local_300;
  
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    pcVar6 = s_Missing_IHDR_before_PLTE_004dfbd4;
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_PLTE_after_IDAT_004dfbbc);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) goto LAB_004b033a;
    pcVar6 = s_Duplicate_PLTE_chunk_004dfba4;
  }
  FUN_004ac6e0(param_1,pcVar6);
LAB_004b033a:
  param_1[0x1a] = param_1[0x1a] | 2;
  if ((0x300 < param_3) || (param_3 % 3 != 0)) {
    if (*(char *)((int)param_1 + 0x126) != '\x03') {
      FUN_004ac710((int)param_1,s_Invalid_palette_chunk_004dfb8c);
      FUN_004afd10(param_1,param_3);
      return;
    }
    FUN_004ac6e0(param_1,s_Invalid_palette_chunk_004dfb8c);
  }
  iVar2 = (int)param_3 / 3;
  if (0 < iVar2) {
    puVar5 = (undefined1 *)((int)&local_300 + 2);
    iVar3 = iVar2;
    do {
      FUN_004afce0(param_1,&local_304,3);
      puVar5[-2] = local_304;
      puVar5[-1] = local_303;
      *puVar5 = local_302;
      puVar5 = puVar5 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004afd10(param_1,0);
  FUN_004a6270(param_1,param_2,&local_300,iVar2);
  if (((*(char *)((int)param_1 + 0x126) == '\x03') && (param_2 != 0)) &&
     ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
    uVar4 = (ushort)iVar2;
    if (uVar4 < *(ushort *)((int)param_1 + 0x11a)) {
      FUN_004ac710((int)param_1,s_Truncating_incorrect_tRNS_chunk_l_004dfb64);
      *(ushort *)((int)param_1 + 0x11a) = uVar4;
    }
    if (uVar4 < *(ushort *)(param_2 + 0x16)) {
      FUN_004ac710((int)param_1,s_Truncating_incorrect_info_tRNS_c_004dfb38);
      *(ushort *)(param_2 + 0x16) = uVar4;
    }
  }
  return;
}

