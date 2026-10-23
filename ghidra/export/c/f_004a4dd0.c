// FUNCTION: PORT1111 0x004a4dd0
// name: FUN_004a4dd0
// sig: int * FUN_004a4dd0(char * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)


int * __cdecl FUN_004a4dd0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char local_a8 [80];
  char local_58 [80];
  int *local_8;
  
  local_8 = FUN_004a46b0(1);
  if (local_8 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar3 = __setjmp3(local_8,0,unaff_EDI,unaff_ESI);
  piVar2 = local_8;
  if (iVar3 != 0) {
    FUN_004a4750((int)local_8,(void *)local_8[0x2b]);
    piVar2[0x2b] = 0;
    FUN_004a4700(piVar2);
    return (int *)0x0;
  }
  FUN_004ac8a0((int)local_8,param_2,param_3,param_4);
  pcVar4 = "1.0.12";
  do {
    if ((param_1 + -0x4c8430)[(int)pcVar4] != *pcVar4) {
      piVar2[0x1b] = piVar2[0x1b] | 0x20000;
    }
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((piVar2[0x1b] & 0x20000U) == 0) goto LAB_004a4f5c;
  if (param_1 == (char *)0x0) {
LAB_004a4ebd:
    _sprintf(local_58,s_Application_is_running_with_png__004debc4,&DAT_004c8430);
    FUN_004ac710((int)piVar2,local_58);
    FUN_004ac6e0(piVar2,s_Incompatible_libpng_version_in_a_004deb8c);
  }
  else {
    cVar1 = *param_1;
    if (((cVar1 != DAT_004c8430) || ((cVar1 == '1' && (param_1[2] != DAT_004c8432)))) ||
       ((cVar1 == '0' && (param_1[2] < '9')))) {
      if (param_1 != (char *)0x0) {
        _sprintf(local_58,s_Application_was_compiled_with_pn_004debfc,param_1);
        FUN_004ac710((int)piVar2,local_58);
      }
      goto LAB_004a4ebd;
    }
  }
  if ((((*param_1 == '1') && (param_1[2] == '0')) && ((param_1[4] < '2' || (param_1[4] == '6')))) &&
     (param_1[5] == '\0')) {
    if (param_1 != (char *)0x0) {
      _sprintf(local_a8,s_Application_was_compiled_with_pn_004debfc,param_1);
      FUN_004ac710((int)piVar2,local_a8);
    }
    _sprintf(local_a8,s_Application_is_running_with_png__004debc4,&DAT_004c8430);
    FUN_004ac710((int)piVar2,local_a8);
    FUN_004ac6e0(piVar2,s_Application_must_be_recompiled__v_004deb48);
  }
LAB_004a4f5c:
  piVar2[0x2c] = 0x2000;
  pvVar5 = FUN_004a4710(piVar2,0x2000);
  piVar2[0x2b] = (int)pvVar5;
  FUN_004a6af0((int)piVar2,0,0,0);
  FUN_004a5440(piVar2,0,1,(double *)0x0,(double *)0x0);
  return piVar2;
}

