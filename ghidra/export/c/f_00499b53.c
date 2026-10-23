// FUNCTION: PORT1111 0x00499b53
// name: __amsg_exit
// sig: void __amsg_exit(int param_1)


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_004e2d38 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*(code *)PTR___exit_004dddb0)(0xff);
  return;
}

