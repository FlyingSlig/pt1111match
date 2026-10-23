// FUNCTION: PORT1111 0x004a5440
// name: FUN_004a5440
// sig: undefined FUN_004a5440(int * param_1, int param_2, size_t param_3, double * param_4, double * param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a5440(int *param_1,int param_2,size_t param_3,double *param_4,double *param_5)

{
  void *pvVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  
  if (2 < param_2) {
    FUN_004ac710((int)param_1,s_Unknown_filter_heuristic_method_004dec40);
    return;
  }
  if (param_2 == 0) {
    param_2 = 1;
  }
  if ((((int)param_3 < 0) || (param_4 == (double *)0x0)) || (param_2 == 1)) {
    param_3 = 0;
  }
  *(char *)((int)param_1 + 0x1f9) = (char)param_3;
  *(char *)(param_1 + 0x7e) = (char)param_2;
  if (0 < (int)param_3) {
    if (param_1[0x7f] == 0) {
      pvVar1 = FUN_004a4710(param_1,param_3);
      param_1[0x7f] = (int)pvVar1;
      iVar2 = 0;
      if (0 < (int)param_3) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined1 *)(param_1[0x7f] + -1 + iVar2) = 0xff;
        } while (iVar2 < (int)param_3);
      }
    }
    if (param_1[0x80] == 0) {
      pvVar1 = FUN_004a4710(param_1,param_3 * 2);
      param_1[0x80] = (int)pvVar1;
      pvVar1 = FUN_004a4710(param_1,param_3 * 2);
      param_1[0x81] = (int)pvVar1;
      iVar2 = 0;
      if (0 < (int)param_3) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(param_1[0x80] + -2 + iVar2 * 2) = 0x100;
          *(undefined2 *)(param_1[0x81] + -2 + iVar2 * 2) = 0x100;
        } while (iVar2 < (int)param_3);
      }
    }
    iVar2 = 0;
    if (0 < (int)param_3) {
      do {
        if (_DAT_004c8418 <= *param_4) {
          lVar4 = __ftol();
          *(short *)(param_1[0x81] + iVar2 * 2) = (short)lVar4;
          lVar4 = __ftol();
          *(short *)(param_1[0x80] + iVar2 * 2) = (short)lVar4;
        }
        else {
          *(undefined2 *)(param_1[0x80] + iVar2 * 2) = 0x100;
          *(undefined2 *)(param_1[0x81] + iVar2 * 2) = 0x100;
        }
        iVar2 = iVar2 + 1;
        param_4 = param_4 + 1;
      } while (iVar2 < (int)param_3);
    }
  }
  if (param_1[0x82] == 0) {
    pvVar1 = FUN_004a4710(param_1,10);
    param_1[0x82] = (int)pvVar1;
    pvVar1 = FUN_004a4710(param_1,10);
    param_1[0x83] = (int)pvVar1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 2;
      *(undefined2 *)(param_1[0x82] + -2 + iVar2) = 8;
      *(undefined2 *)(param_1[0x83] + -2 + iVar2) = 8;
    } while (iVar2 < 10);
  }
  iVar2 = 0;
  pdVar3 = param_5;
  do {
    if ((param_5 == (double *)0x0) || (*pdVar3 < _DAT_004c8418)) {
      *(undefined2 *)(param_1[0x82] + iVar2) = 8;
      *(undefined2 *)(param_1[0x83] + iVar2) = 8;
    }
    else if (_DAT_004c8400 <= *pdVar3) {
      lVar4 = __ftol();
      *(short *)(param_1[0x83] + iVar2) = (short)lVar4;
      lVar4 = __ftol();
      *(short *)(param_1[0x82] + iVar2) = (short)lVar4;
    }
    iVar2 = iVar2 + 2;
    pdVar3 = pdVar3 + 1;
  } while (iVar2 < 10);
  return;
}

