// FUNCTION: PORT1111 0x00482050
// name: FUN_00482050
// sig: int FUN_00482050(void * this, int param_1)


int __thiscall FUN_00482050(void *this,int param_1)

{
  LPCSTR lpString1;
  LPCSTR lpString2;
  int iVar1;
  uchar *_Str1;
  uchar *_Str2;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x18) + 0x2a4);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 0;
    }
    lpString1 = (LPCSTR)FUN_00465e00((undefined4 *)((int)this + 8));
    lpString2 = (LPCSTR)FUN_00465e00((undefined4 *)(param_1 + 8));
    iVar1 = lstrcmpiA(lpString1,lpString2);
    return iVar1;
  }
  _Str1 = (uchar *)FUN_00465e00((undefined4 *)((int)this + 8));
  _Str2 = (uchar *)FUN_00465e00((undefined4 *)(param_1 + 8));
  iVar1 = __mbsicmp(_Str1,_Str2);
  return iVar1;
}

