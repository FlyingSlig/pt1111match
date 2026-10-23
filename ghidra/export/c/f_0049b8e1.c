// FUNCTION: PORT1111 0x0049b8e1
// name: FUN_0049b8e1
// sig: undefined FUN_0049b8e1(void)


void FUN_0049b8e1(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_004dddd0;
  while ((lpCriticalSection = (LPCRITICAL_SECTION)*puVar1,
         lpCriticalSection == (LPCRITICAL_SECTION)0x0 || (puVar1[1] == 1))) {
    puVar1 = puVar1 + 2;
    if (0x4ddeef < (int)puVar1) {
      puVar1 = &DAT_004dddd0;
      do {
        if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
          DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
        }
        puVar1 = puVar1 + 2;
      } while ((int)puVar1 < 0x4ddef0);
      return;
    }
  }
  DeleteCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
  _free(lpCriticalSection);
}

