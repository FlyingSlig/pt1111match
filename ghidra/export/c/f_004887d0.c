// FUNCTION: PORT1111 0x004887d0
// name: FUN_004887d0
// sig: bool FUN_004887d0(void * this, undefined4 * param_1)


bool __thiscall FUN_004887d0(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  LPCSTR lpString;
  int iVar1;
  int iVar2;
  
  this_00 = param_1;
  FUN_00465e40(param_1);
  lpString = operator_new(0x80);
  iVar1 = FUN_00488740(this,(int)lpString,-0x80);
  do {
    if (iVar1 == 0) {
LAB_00488862:
      if (lpString != (LPCSTR)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(lpString);
      }
      return iVar1 != 0;
    }
    iVar2 = lstrlenA(lpString);
    if (iVar2 < 0x80) {
      if (lpString[iVar2 + -1] == '\n') goto LAB_00488855;
LAB_0048885a:
      thunk_FUN_00466040(this_00,lpString);
      goto LAB_00488862;
    }
    if (lpString[iVar2 + -1] == '\n') {
LAB_00488855:
      lpString[iVar2 + -1] = '\0';
      goto LAB_0048885a;
    }
    if (lpString[0x7f] == '\n') {
      lpString[0x7f] = '\0';
    }
    FUN_00466c60(this_00,&param_1,lpString);
    FUN_00465e40(&param_1);
    iVar1 = FUN_00488740(this,(int)lpString,-0x80);
  } while( true );
}

