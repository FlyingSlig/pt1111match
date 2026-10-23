// FUNCTION: PORT1111 0x004a08a3
// name: __FF_MSGBANNER
// sig: void __FF_MSGBANNER(void)


/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_004e2d38 == 1) || ((DAT_004e2d38 == 0 && (DAT_004dddb4 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_004e2ecc != (code *)0x0) {
      (*DAT_004e2ecc)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}

