// FUNCTION: PORT1111 0x004ad610
// name: FUN_004ad610
// sig: undefined FUN_004ad610(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, double param_6, double param_7, double param_8, double param_9, double param_10, double param_11)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004ad610(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,double param_6,double param_7,double param_8,double param_9,
            double param_10,double param_11)

{
  longlong lVar1;
  byte local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (((((double)CONCAT44(param_3,param_2) < _DAT_004c8418) ||
       (_DAT_004c8618 < (double)CONCAT44(param_3,param_2))) ||
      ((double)CONCAT44(param_5,param_4) < _DAT_004c8418)) ||
     ((_DAT_004c8618 < (double)CONCAT44(param_5,param_4) ||
      (_DAT_004c8400 < (double)CONCAT44(param_3,param_2) + (double)CONCAT44(param_5,param_4))))) {
    FUN_004ac710((int)param_1,s_Invalid_cHRM_white_point_specifi_004df71c);
    FID_conflict__fwprintf
              ((FILE *)&DAT_004ddb70,(wchar_t *)s_white_x__f__white_y__f_004df704,param_2,param_3,
               param_4,param_5);
    return;
  }
  lVar1 = __ftol();
  FUN_004ac8c0(local_20,(int)lVar1);
  lVar1 = __ftol();
  FUN_004ac8c0(local_1c,(int)lVar1);
  if (((_DAT_004c8418 <= param_6) && (param_6 <= _DAT_004c8618)) &&
     ((_DAT_004c8418 <= param_7 &&
      ((param_7 <= _DAT_004c8618 && (param_6 + param_7 <= _DAT_004c8400)))))) {
    lVar1 = __ftol();
    FUN_004ac8c0(local_18,(int)lVar1);
    lVar1 = __ftol();
    FUN_004ac8c0(local_14,(int)lVar1);
    if ((((_DAT_004c8418 <= param_8) && (param_8 <= _DAT_004c8618)) && (_DAT_004c8418 <= param_9))
       && ((param_9 <= _DAT_004c8618 && (param_8 + param_9 <= _DAT_004c8400)))) {
      lVar1 = __ftol();
      FUN_004ac8c0(local_10,(int)lVar1);
      lVar1 = __ftol();
      FUN_004ac8c0(local_c,(int)lVar1);
      if (((_DAT_004c8418 <= param_10) && (param_10 <= _DAT_004c8618)) &&
         ((_DAT_004c8418 <= param_11 &&
          ((param_11 <= _DAT_004c8618 && (param_10 + param_11 <= _DAT_004c8400)))))) {
        lVar1 = __ftol();
        FUN_004ac8c0(local_8,(int)lVar1);
        lVar1 = __ftol();
        FUN_004ac8c0(local_4,(int)lVar1);
        FUN_004ac940(param_1,(byte *)&DAT_004c8474,local_20,0x20);
        return;
      }
      FUN_004ac710((int)param_1,s_Invalid_cHRM_blue_point_specifie_004df788);
      return;
    }
    FUN_004ac710((int)param_1,s_Invalid_cHRM_green_point_specifi_004df764);
    return;
  }
  FUN_004ac710((int)param_1,s_Invalid_cHRM_red_point_specified_004df740);
  return;
}

