// FUNCTION: PORT1111 0x004a0939
// name: FUN_004a0939
// sig: undefined4 FUN_004a0939(void)


undefined4 FUN_004a0939(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  if (DAT_004e4590 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  puVar4 = DAT_004e2d30;
  if (DAT_004e2d30 != (uint *)0x0) {
    for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + sVar2 + 1)) {
      if ((char)*puVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen((char *)puVar4);
    }
    puVar1 = _malloc(iVar5 * 4 + 4);
    puVar4 = DAT_004e2d30;
    DAT_004e2d08 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if ((char)*puVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
          _free(DAT_004e2d30);
        }
        sVar2 = _strlen((char *)puVar4);
        if ((char)*puVar4 != '=') {
          puVar3 = _malloc(sVar2 + 1);
          *puVar1 = puVar3;
          if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(DAT_004e2d08);
          }
          FUN_0049b7a0(puVar3,puVar4);
          puVar1 = puVar1 + 1;
        }
        puVar4 = (uint *)((int)puVar4 + sVar2 + 1);
      } while( true );
    }
  }
  return 0xffffffff;
}

