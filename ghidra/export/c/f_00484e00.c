// FUNCTION: PORT1111 0x00484e00
// name: FUN_00484e00
// sig: LRESULT FUN_00484e00(HWND param_1, UINT param_2, HWND param_3, undefined4 * param_4)


LRESULT FUN_00484e00(HWND param_1,UINT param_2,HWND param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  HWND wParam;
  int *piVar4;
  undefined4 *lParam;
  LRESULT local_8;
  int local_4;
  
  lParam = param_4;
  iVar3 = 0;
  piVar4 = (int *)0x0;
  local_8 = 0;
  if (param_2 == 1) {
    piVar4 = (int *)*param_4;
    (**(code **)(*piVar4 + 0x1c))(param_1,0);
    wParam = param_1;
    iVar3 = (**(code **)(*piVar4 + 0x14))(1,param_1,lParam,&stack0xfffffff0);
    iVar2 = (**(code **)(*piVar4 + 0x24))();
    if (iVar2 == 0) {
      return -1;
    }
  }
  else {
    FUN_00495300(&DAT_004e2c84,&local_4,(uint *)&param_1);
    lParam = param_4;
    wParam = param_3;
    if (local_4 != DAT_004e2c88) {
      piVar4 = *(int **)(local_4 + 0x10);
      iVar3 = (**(code **)(*piVar4 + 0x14))(param_2,param_3,param_4,&local_8);
    }
    if (param_2 == 0x82) {
      (**(code **)(*piVar4 + 0x20))();
    }
  }
  if (iVar3 == 0) {
    LVar1 = DefWindowProcA(param_1,param_2,(WPARAM)wParam,(LPARAM)lParam);
    return LVar1;
  }
  return local_8;
}

