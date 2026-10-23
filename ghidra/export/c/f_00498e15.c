// FUNCTION: PORT1111 0x00498e15
// name: flsall
// sig: int flsall(int param_1)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_004e4580; _Index = _Index + 1) {
    _File = *(void **)(DAT_004e3570 + _Index * 4);
    if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      pFVar1 = *(FILE **)(DAT_004e3570 + _Index * 4);
      if ((pFVar1->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_lk(pFVar1);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((pFVar1->_flag & 2U) != 0)) {
          iVar2 = __fflush_lk(pFVar1);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_00498eb5();
    }
  }
  FUN_00498ee1();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}

