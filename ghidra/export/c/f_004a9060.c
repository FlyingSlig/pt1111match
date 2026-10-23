// FUNCTION: PORT1111 0x004a9060
// name: FUN_004a9060
// sig: undefined FUN_004a9060(int * param_1)


void __cdecl FUN_004a9060(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char local_34 [52];
  
  if (param_1[0x3b] == 0) {
    _sprintf(local_34,s_NULL_row_buffer_for_row__ld__pas_004df3e0,param_1[0x39],
             (uint)*(byte *)(param_1 + 0x49));
    FUN_004ac6e0(param_1,local_34);
  }
  if ((param_1[0x1c] & 0x1000U) != 0) {
    if ((char)param_1[0x42] == '\x03') {
      FUN_004ab8d0((uint *)(param_1 + 0x40),param_1[0x3b] + 1,param_1[0x45],param_1[0x62],
                   (uint)*(ushort *)((int)param_1 + 0x11a));
    }
    else {
      if (*(short *)((int)param_1 + 0x11a) == 0) {
        iVar2 = param_1[0x3b];
        piVar3 = (int *)0x0;
      }
      else {
        iVar2 = param_1[0x3b];
        piVar3 = param_1 + 99;
      }
      FUN_004abb00(param_1 + 0x40,iVar2 + 1,(int)piVar3);
    }
  }
  if ((param_1[0x1c] & 0x40000U) != 0) {
    FUN_004a57e0((uint *)(param_1 + 0x40),(undefined1 *)(param_1[0x3b] + 1),0x80);
  }
  if ((param_1[0x1c] & 0x600000U) != 0) {
    iVar2 = FUN_004a9d90((uint)param_1,param_1 + 0x40,(byte *)(param_1[0x3b] + 1));
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x8a) = 1;
      if (param_1[0x1c] == 0x400000) {
        FUN_004ac710((int)param_1,s_png_do_rgb_to_gray_found_nongray_004df3b8);
      }
      if (param_1[0x1c] == 0x200000) {
        FUN_004ac6e0(param_1,s_png_do_rgb_to_gray_found_nongray_004df3b8);
      }
    }
  }
  if (((param_1[0x1c] & 0x4000U) != 0) && ((param_1[0x1a] & 0x800U) == 0)) {
    FUN_004a9c50(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if (((*(byte *)(param_1 + 0x1c) & 0x80) != 0) &&
     ((*(short *)((int)param_1 + 0x11a) != 0 || ((*(byte *)((int)param_1 + 0x126) & 4) != 0)))) {
    FUN_004aa4e0(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),(uint)(param_1 + 99),
                 (int)(param_1 + 0x4e),(int)param_1 + 0x142,param_1[0x59],param_1[0x5a],
                 param_1[0x5b],param_1[0x5c],param_1[0x5d],param_1[0x5e],(byte)param_1[0x56]);
  }
  if (((param_1[0x1c] & 0x2000U) != 0) &&
     ((((param_1[0x1c] & 0x80U) == 0 ||
       ((*(short *)((int)param_1 + 0x11a) == 0 && ((*(byte *)((int)param_1 + 0x126) & 4) == 0)))) &&
      (*(char *)((int)param_1 + 0x126) != '\x03')))) {
    FUN_004ab4e0(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),param_1[0x59],param_1[0x5c],
                 (byte)param_1[0x56]);
  }
  if ((param_1[0x1c] & 0x400U) != 0) {
    FUN_004a97c0(param_1 + 0x40,(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    FUN_004abe90(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),param_1[0x7b],param_1[0x7c]);
    if (param_1[0x41] == 0) {
      FUN_004ac6e0(param_1,s_png_do_dither_returned_rowbytes__004df394);
    }
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x20) != 0) {
    FUN_004a5730((int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
  }
  if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
    FUN_004a95e0(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),(byte *)((int)param_1 + 0x181));
  }
  if ((*(byte *)(param_1 + 0x1c) & 4) != 0) {
    FUN_004a94b0(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    FUN_004a59f0(param_1 + 0x40,(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x10000U) != 0) {
    FUN_004a5790((int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
  }
  if (((param_1[0x1c] & 0x4000U) != 0) && ((param_1[0x1a] & 0x800U) != 0)) {
    FUN_004a9c50(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x8000U) != 0) {
    FUN_004a99e0((uint *)(param_1 + 0x40),param_1[0x3b] + 1,(uint)*(ushort *)((int)param_1 + 0x12e),
                 (byte)param_1[0x1b]);
  }
  if ((param_1[0x1c] & 0x80000U) != 0) {
    FUN_004a9910(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x20000U) != 0) {
    FUN_004a9810(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    FUN_004a5760(param_1 + 0x40,(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x100000U) != 0) {
    if ((code *)param_1[0x16] != (code *)0x0) {
      (*(code *)param_1[0x16])(param_1,param_1 + 0x40,param_1[0x3b] + 1);
    }
    if ((char)param_1[0x19] != '\0') {
      *(char *)((int)param_1 + 0x109) = (char)param_1[0x19];
    }
    if (*(char *)((int)param_1 + 0x65) != '\0') {
      *(char *)((int)param_1 + 0x10a) = *(char *)((int)param_1 + 0x65);
    }
    bVar1 = *(char *)((int)param_1 + 0x10a) * *(char *)((int)param_1 + 0x109);
    *(byte *)((int)param_1 + 0x10b) = bVar1;
    param_1[0x41] = param_1[0x40] * (uint)bVar1 + 7 >> 3;
  }
  return;
}

