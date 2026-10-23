// FUNCTION: PORT1111 0x00465e40
// name: FUN_00465e40
// sig: undefined FUN_00465e40(undefined4 * param_1)


void __fastcall FUN_00465e40(undefined4 *param_1)

{
  undefined *_Memory;
  
  _Memory = (undefined *)*param_1;
  if ((_Memory != (undefined *)0x0) && (_Memory != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *param_1 = PTR_DAT_004dd95c;
  return;
}

