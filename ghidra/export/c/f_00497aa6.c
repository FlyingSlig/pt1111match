// FUNCTION: PORT1111 0x00497aa6
// name: __security_check_cookie
// sig: void __security_check_cookie(uintptr_t _StackCookie)


/* WARNING: This is an inlined function */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_004ddb0c) {
    return;
  }
  report_failure();
  return;
}

