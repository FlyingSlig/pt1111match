// FUNCTION: PORT1111 0x004a01d7
// name: FUN_004a01d7
// sig: int FUN_004a01d7(UINT param_1)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl FUN_004a01d7(UINT param_1)

{
  int *_Memory;
  int iVar1;
  int local_24;
  
  local_24 = -1;
  __lock(0xd);
  DAT_004e2ec8 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_004e2ec8 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_004e2ec8 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_004e2ec8 = 1;
    param_1 = DAT_004e3060;
  }
  if (param_1 == DAT_004e3304) {
    local_24 = 0;
  }
  else {
    if ((DAT_004e31f4 == (int *)0x0) || (_Memory = DAT_004e31f4, *DAT_004e31f4 != 0)) {
      _Memory = _malloc(0x220);
    }
    if ((_Memory != (int *)0x0) && (local_24 = __setmbcp_lk(param_1), local_24 == 0)) {
      *_Memory = 0;
      _Memory[1] = DAT_004e3304;
      _Memory[2] = DAT_004e31f8;
      _Memory[3] = DAT_004e31f0;
      for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
        *(undefined2 *)((int)_Memory + iVar1 * 2 + 0x10) = (&DAT_004e3310)[iVar1];
      }
      for (iVar1 = 0; iVar1 < 0x101; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x1c + (int)_Memory) = (&DAT_004e3200)[iVar1];
      }
      for (iVar1 = 0; DAT_004e31f4 = _Memory, iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x11d + (int)_Memory) = (&DAT_004e3320)[iVar1];
      }
    }
    if ((local_24 == -1) && (_Memory != DAT_004e31f4)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  FUN_004a031e();
  return local_24;
}

