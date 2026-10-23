// FUNCTION: PORT1111 0x0049e2d2
// name: __ftbuf
// sig: void __ftbuf(int _Flag, FILE * _File)


/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  byte *pbVar1;
  
  if ((_Flag != 0) && ((_File->_flag & 0x1000) != 0)) {
    __flush(_File);
    pbVar1 = (byte *)((int)&_File->_flag + 1);
    *pbVar1 = *pbVar1 & 0xee;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}

