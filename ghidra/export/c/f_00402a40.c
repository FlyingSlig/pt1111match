// FUNCTION: PORT1111 0x00402a40
// name: FUN_00402a40
// sig: undefined4 FUN_00402a40(int * param_1, char * param_2, size_t param_3)


undefined4 __cdecl FUN_00402a40(int *param_1,char *param_2,size_t param_3)

{
  char *_Dest;
  size_t _Count;
  char cVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  _Count = param_3;
  _Dest = param_2;
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  if ((param_2 != (char *)0x0) && (0 < (int)param_3)) {
    *param_2 = '\0';
  }
  local_8 = 0;
  local_4 = 0;
  param_2 = (char *)CONCAT31(param_2._1_3_,0x20);
  iVar2 = FUN_00401db0();
  if (iVar2 < 0) {
    iVar2 = FUN_004020c0(&local_8,&local_4,(undefined1 *)&param_2);
    if (iVar2 < 0) {
      return 0x80004005;
    }
  }
  iVar2 = _tolower((int)(char)param_2);
  cVar1 = (char)iVar2;
  if (param_1 != (int *)0x0) {
    iVar2 = (local_8 * 0x100 + local_4) * 0x100;
    if (('`' < cVar1) && (cVar1 < '{')) {
      iVar2 = iVar2 + -0x60 + (int)cVar1;
    }
    *param_1 = iVar2;
  }
  if ((_Dest != (char *)0x0) && (0 < (int)_Count)) {
    if (cVar1 == ' ') {
      __snprintf(_Dest,_Count,"%d.%d",local_8,local_4);
      _Dest[_Count - 1] = '\0';
      return 0;
    }
    __snprintf(_Dest,_Count,"%d.%d%c",local_8,local_4,(int)cVar1);
    _Dest[_Count - 1] = '\0';
  }
  return 0;
}

