// FUNCTION: PORT1111 0x00433920
// name: FUN_00433920
// sig: undefined FUN_00433920(undefined4 * param_1)


void __fastcall FUN_00433920(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004bfcdc;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_004bfcd0;
  return;
}

