// FUNCTION: PORT1111 0x00488740
// name: FUN_00488740
// sig: int FUN_00488740(void * this, int param_1, int param_2)


int __thiscall FUN_00488740(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  iVar4 = param_2;
  if (param_2 < 0) {
    iVar4 = -param_2;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    while (iVar2 = (**(code **)(*(int *)this + 8))(&param_1,1), iVar2 != 0) {
      if ((char)param_1 == '\n') {
LAB_004887a6:
        if (param_2 != iVar4) {
          *(char *)(iVar3 + iVar1) = (char)param_1;
          iVar3 = iVar3 + 1;
        }
        break;
      }
      if ((char)param_1 == '\r') {
        iVar2 = (**(code **)(*(int *)this + 8))(&param_1,1);
        if (iVar2 != 0) goto LAB_004887a6;
        break;
      }
      *(char *)(iVar3 + iVar1) = (char)param_1;
      iVar3 = iVar3 + 1;
      if (iVar4 <= iVar3) break;
    }
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + iVar1) = 0;
      return iVar1;
    }
  }
  return 0;
}

