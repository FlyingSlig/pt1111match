// FUNCTION: PORT1111 0x004032f0
// name: FUN_004032f0
// sig: undefined FUN_004032f0(void)


void FUN_004032f0(void)

{
  void *_Memory;
  
  FUN_00454db0();
  FUN_0042ac60();
  FUN_004146d0();
  if (DAT_004e2800 != (void *)0x0) {
    FUN_0044c400((int)DAT_004e2800);
    _Memory = DAT_004e2800;
    if (DAT_004e2800 != (void *)0x0) {
      FUN_0044cfd0(DAT_004e2800);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}

