// FUNCTION: PORT1111 0x004a3c0c
// name: _raise
// sig: int _raise(int _SigNum)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2003 Release */

int __cdecl _raise(int _SigNum)

{
  int iVar1;
  void *extraout_ECX;
  void *_File;
  undefined4 *puVar2;
  code *pcVar3;
  void *local_34;
  void *local_30;
  _ptiddata local_28;
  void *local_20;
  
  local_20 = (void *)0x0;
  if (_SigNum == 2) {
    puVar2 = &DAT_004e30c0;
    pcVar3 = DAT_004e30c0;
LAB_004a3c99:
    local_20 = (void *)0x1;
  }
  else {
    if (((_SigNum != 4) && (_SigNum != 8)) && (_SigNum != 0xb)) {
      if (_SigNum == 0xf) {
        puVar2 = &DAT_004e30cc;
        pcVar3 = DAT_004e30cc;
      }
      else if (_SigNum == 0x15) {
        puVar2 = &DAT_004e30c4;
        pcVar3 = DAT_004e30c4;
      }
      else {
        if (_SigNum != 0x16) {
          return -1;
        }
        puVar2 = &DAT_004e30c8;
        pcVar3 = DAT_004e30c8;
      }
      goto LAB_004a3c99;
    }
    local_28 = __getptd();
    iVar1 = siglookup();
    puVar2 = (undefined4 *)(iVar1 + 8);
    pcVar3 = (code *)*puVar2;
  }
  _File = (void *)0x0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    __exit(3);
    _File = extraout_ECX;
  }
  if (local_20 != _File) {
    __lock((int)_File);
    _File = (void *)0x0;
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = local_28->_initarg;
    local_28->_initarg = _File;
    if (_SigNum == 8) {
      local_34 = local_28->_pxcptacttab;
      local_28->_pxcptacttab = (void *)0x8c;
      goto LAB_004a3cf8;
    }
  }
  else {
LAB_004a3cf8:
    iVar1 = DAT_004de3b8;
    if (_SigNum == 8) {
      for (; iVar1 < DAT_004de3bc + DAT_004de3b8; iVar1 = iVar1 + 1) {
        *(void **)((int)local_28->_initaddr + iVar1 * 0xc + 8) = _File;
      }
      goto LAB_004a3d26;
    }
  }
  *puVar2 = _File;
LAB_004a3d26:
  FUN_004a3d47((int)_File);
  if (_SigNum == 8) {
    (*pcVar3)(8,local_28->_pxcptacttab);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  local_28->_initarg = local_30;
  if (_SigNum == 8) {
    local_28->_pxcptacttab = local_34;
  }
  return 0;
}

