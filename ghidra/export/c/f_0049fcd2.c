// FUNCTION: PORT1111 0x0049fcd2
// name: FUN_0049fcd2
// sig: undefined4 * FUN_0049fcd2(void)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 * FUN_0049fcd2(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *_File;
  
  puVar4 = (undefined4 *)0x0;
  __lock(1);
  iVar3 = 0;
  do {
    _File = puVar4;
    if (DAT_004e4580 <= iVar3) {
LAB_0049fdc1:
      if (_File != (undefined4 *)0x0) {
        _File[1] = 0;
        _File[3] = 0;
        _File[2] = 0;
        *_File = 0;
        _File[7] = 0;
        _File[4] = 0xffffffff;
      }
      FUN_0049fdeb();
      return _File;
    }
    iVar1 = *(int *)(DAT_004e3570 + iVar3 * 4);
    if (iVar1 == 0) {
      iVar3 = iVar3 * 4;
      pvVar2 = _malloc(0x38);
      *(void **)(iVar3 + DAT_004e3570) = pvVar2;
      if (*(int *)(iVar3 + DAT_004e3570) != 0) {
        iVar1 = ___crtInitCritSecAndSpinCount(*(int *)(iVar3 + DAT_004e3570) + 0x20,4000);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar3 + DAT_004e3570));
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_004e3570) + 0x20));
        _File = *(undefined4 **)(iVar3 + DAT_004e3570);
      }
      goto LAB_0049fdc1;
    }
    if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
      if (((2 < iVar3) && (iVar3 < 0x14)) && (iVar1 = FUN_0049b94b(iVar3 + 0x10), iVar1 == 0))
      goto LAB_0049fdc1;
      __lock_file2(iVar3,*(void **)(DAT_004e3570 + iVar3 * 4));
      _File = *(undefined4 **)(DAT_004e3570 + iVar3 * 4);
      if ((*(byte *)(_File + 3) & 0x83) == 0) goto LAB_0049fdc1;
      __unlock_file2(iVar3,_File);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

