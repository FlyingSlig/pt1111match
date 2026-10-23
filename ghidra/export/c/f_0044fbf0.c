// FUNCTION: PORT1111 0x0044fbf0
// name: FUN_0044fbf0
// sig: undefined4 FUN_0044fbf0(int param_1)


undefined4 __cdecl FUN_0044fbf0(int param_1)

{
  undefined4 *_Memory;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  _Memory = *(undefined4 **)(param_1 + 0x9c);
  if (_Memory == (undefined4 *)0x0) {
    return 0xffffff9a;
  }
  if ((void *)*_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*_Memory);
  }
  *_Memory = 0;
  if (_Memory[0x10] != 0) {
    FUN_0045fd20((int)(_Memory + 1));
  }
  _Memory[0x10] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

