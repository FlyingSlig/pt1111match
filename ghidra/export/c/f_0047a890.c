// FUNCTION: PORT1111 0x0047a890
// name: FUN_0047a890
// sig: undefined FUN_0047a890(undefined4 * param_1)


void __fastcall FUN_0047a890(undefined4 *param_1)

{
  void *_Memory;
  
  *param_1 = &PTR_FUN_004c667c;
  FUN_0047a6d0((int)param_1);
  _Memory = (void *)param_1[5];
  if (_Memory == (void *)0x0) {
    return;
  }
  if (*(void **)((int)_Memory + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)_Memory + 4));
  }
  *(undefined4 *)((int)_Memory + 4) = 0;
  *(undefined4 *)((int)_Memory + 8) = 0;
  *(undefined4 *)((int)_Memory + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

