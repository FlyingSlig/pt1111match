// FUNCTION: PORT1111 0x004a1275
// name: _abort
// sig: void _abort(void)


/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2003 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  
  __NMSG_WRITE(10);
  _raise(0x16);
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

