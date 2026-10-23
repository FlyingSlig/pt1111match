// FUNCTION: PORT1111 0x00465ee0
// name: FUN_00465ee0
// sig: undefined4 * FUN_00465ee0(undefined4 * param_1)


undefined4 * __fastcall FUN_00465ee0(undefined4 *param_1)

{
  uchar uVar1;
  uchar *_String;
  uchar *puVar2;
  
  _String = (uchar *)*param_1;
  puVar2 = _String;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (uVar1 != '\0');
  if (puVar2 != _String + 1) {
    __mbslwr(_String);
  }
  return param_1;
}

