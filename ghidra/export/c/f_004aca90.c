// FUNCTION: PORT1111 0x004aca90
// name: FUN_004aca90
// sig: undefined FUN_004aca90(int * param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6, int param_7, int param_8)


void __cdecl
FUN_004aca90(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  byte local_10 [4];
  undefined1 local_c [4];
  char local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  switch(param_5) {
  case 0:
    switch(param_4) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
switchD_004acafc_caseD_1:
      *(undefined1 *)((int)param_1 + 0x12a) = 1;
      goto LAB_004acb73;
    default:
      pcVar4 = s_Invalid_bit_depth_for_grayscale_i_004df5f4;
    }
    break;
  default:
    pcVar4 = s_Invalid_image_color_type_specifi_004df538;
    break;
  case 2:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_004ac6e0(param_1,s_Invalid_bit_depth_for_RGB_image_004df5d4);
    }
    *(undefined1 *)((int)param_1 + 0x12a) = 3;
    goto LAB_004acb73;
  case 3:
    switch(param_4) {
    case 1:
    case 2:
    case 4:
    case 8:
      goto switchD_004acafc_caseD_1;
    default:
      pcVar4 = s_Invalid_bit_depth_for_paletted_i_004df5ac;
    }
    break;
  case 4:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_004ac6e0(param_1,s_Invalid_bit_depth_for_grayscale__004df580);
    }
    *(undefined1 *)((int)param_1 + 0x12a) = 2;
    goto LAB_004acb73;
  case 6:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_004ac6e0(param_1,s_Invalid_bit_depth_for_RGBA_image_004df55c);
    }
    *(undefined1 *)((int)param_1 + 0x12a) = 4;
    goto LAB_004acb73;
  }
  FUN_004ac6e0(param_1,pcVar4);
LAB_004acb73:
  if (param_6 != 0) {
    FUN_004ac710((int)param_1,s_Invalid_compression_type_specifi_004df514);
    param_6 = 0;
  }
  if (param_7 != 0) {
    FUN_004ac710((int)param_1,s_Invalid_filter_type_specified_004df4f4);
    param_7 = 0;
  }
  if ((param_8 != 0) && (param_8 != 1)) {
    FUN_004ac710((int)param_1,s_Invalid_interlace_type_specified_004df4d0);
    param_8 = 1;
  }
  *(char *)((int)param_1 + 0x123) = (char)param_8;
  *(undefined1 *)((int)param_1 + 0x126) = (undefined1)param_5;
  cVar3 = (char)param_4;
  bVar2 = *(char *)((int)param_1 + 0x12a) * cVar3;
  *(byte *)((int)param_1 + 0x129) = bVar2;
  param_1[0x36] = (uint)bVar2 * param_2 + 7 >> 3;
  *(char *)((int)param_1 + 0x127) = cVar3;
  param_1[0x32] = param_2;
  param_1[0x33] = param_3;
  param_1[0x35] = param_2;
  *(char *)(param_1 + 0x4a) = cVar3;
  *(char *)((int)param_1 + 299) = *(char *)((int)param_1 + 0x12a);
  FUN_004ac8c0(local_10,param_2);
  FUN_004ac8c0(local_c,param_3);
  local_6 = (undefined1)param_6;
  local_7 = (undefined1)param_5;
  local_5 = (undefined1)param_7;
  local_8 = cVar3;
  local_4 = (char)param_8;
  FUN_004ac940(param_1,(byte *)&DAT_004c844c,local_10,0xd);
  param_1[0x25] = (int)FUN_004a6c70;
  param_1[0x26] = (int)FUN_004a6ce0;
  param_1[0x27] = (int)param_1;
  if (*(char *)((int)param_1 + 0x125) == '\0') {
    if ((*(char *)((int)param_1 + 0x126) == '\x03') || (*(byte *)((int)param_1 + 0x127) < 8)) {
      *(undefined1 *)((int)param_1 + 0x125) = 8;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x125) = 0xf8;
    }
  }
  uVar1 = param_1[0x1b];
  if ((uVar1 & 1) == 0) {
    if (*(char *)((int)param_1 + 0x125) == '\b') {
      param_1[0x31] = 0;
    }
    else {
      param_1[0x31] = 1;
    }
  }
  if ((uVar1 & 2) == 0) {
    param_1[0x2d] = -1;
  }
  if ((uVar1 & 4) == 0) {
    param_1[0x30] = 8;
  }
  if ((uVar1 & 8) == 0) {
    param_1[0x2f] = 0xf;
  }
  if ((uVar1 & 0x10) == 0) {
    param_1[0x2e] = 8;
  }
  FUN_004602d0((int)(param_1 + 0x1d),param_1[0x2d],param_1[0x2e],param_1[0x2f],param_1[0x30],
               param_1[0x31],s_1_1_4_004dc520,0x38);
  param_1[0x20] = param_1[0x2b];
  param_1[0x21] = param_1[0x2c];
  param_1[0x1a] = 1;
  return;
}

