// FUNCTION: PORT1111 0x00499b78
// name: fast_error_exit
// sig: undefined fast_error_exit(int param_1)


/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_004e2d38 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}

