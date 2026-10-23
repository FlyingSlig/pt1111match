// FUNCTION: PORT1111 0x00497eac
// name: ___onexitinit
// sig: undefined4 ___onexitinit(void)


/* Library Function - Single Match
    ___onexitinit
   
   Library: Visual Studio 2003 Release */

undefined4 ___onexitinit(void)

{
  DAT_004e458c = _malloc(0x80);
  if (DAT_004e458c == (undefined4 *)0x0) {
    return 0x18;
  }
  *DAT_004e458c = 0;
  DAT_004e4588 = DAT_004e458c;
  return 0;
}

