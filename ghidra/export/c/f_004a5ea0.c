// FUNCTION: PORT1111 0x004a5ea0
// name: FUN_004a5ea0
// sig: undefined FUN_004a5ea0(int * param_1, uint * param_2, uint param_3, uint param_4, int param_5, uint param_6, int param_7, int param_8, int param_9)


void __cdecl
FUN_004a5ea0(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6,
            int param_7,int param_8,int param_9)

{
  byte bVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_004ac6e0(param_1,s_Image_width_or_height_is_zero_in_004df0cc);
  }
  if ((0x7fffffff < param_3) || (0x7fffffff < param_4)) {
    FUN_004ac6e0(param_1,s_Invalid_image_size_in_IHDR_004df0b0);
  }
  if ((((param_5 != 1) && (param_5 != 2)) && (param_5 != 4)) &&
     ((param_5 != 8 && (param_5 != 0x10)))) {
    FUN_004ac6e0(param_1,s_Invalid_bit_depth_in_IHDR_004df094);
  }
  if ((((int)param_6 < 0) || (param_6 == 1)) || ((param_6 == 5 || (6 < (int)param_6)))) {
    FUN_004ac6e0(param_1,s_Invalid_color_type_in_IHDR_004df078);
  }
  if (param_6 == 3) {
    if (param_5 < 9) goto LAB_004a5f8a;
  }
  else if ((((param_6 != 2) && (param_6 != 4)) && (param_6 != 6)) || (7 < param_5))
  goto LAB_004a5f8a;
  FUN_004ac6e0(param_1,s_Invalid_color_type_bit_depth_com_004df044);
LAB_004a5f8a:
  if (1 < param_7) {
    FUN_004ac6e0(param_1,s_Unknown_interlace_method_in_IHDR_004df020);
  }
  if (param_8 != 0) {
    FUN_004ac6e0(param_1,s_Unknown_compression_method_in_IH_004deffc);
  }
  if (param_9 != 0) {
    FUN_004ac6e0(param_1,s_Unknown_filter_method_in_IHDR_004defdc);
  }
  *(undefined1 *)((int)param_2 + 0x1a) = (undefined1)param_8;
  param_2[1] = param_4;
  *param_2 = param_3;
  *(char *)(param_2 + 6) = (char)param_5;
  *(char *)((int)param_2 + 0x19) = (char)param_6;
  *(undefined1 *)((int)param_2 + 0x1b) = (undefined1)param_9;
  *(undefined1 *)(param_2 + 7) = (undefined1)param_7;
  if (((char)param_6 == '\x03') || ((param_6 & 2) == 0)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
  }
  if ((param_6 & 4) != 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  bVar1 = *(char *)((int)param_2 + 0x1d) * (char)param_5;
  *(byte *)((int)param_2 + 0x1e) = bVar1;
  if (param_3 <= (uint)(0x7fffffff / (ulonglong)(uint)((int)(bVar1 + 7) >> 3))) {
    param_2[3] = bVar1 * param_3 + 7 >> 3;
    return;
  }
  FUN_004ac710((int)param_1,s_Width_too_large_to_process_image_004def9c);
  param_2[3] = 0;
  return;
}

