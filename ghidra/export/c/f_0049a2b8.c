// FUNCTION: PORT1111 0x0049a2b8
// name: __mbclen
// sig: size_t __mbclen(uchar * _Str)


/* Library Function - Single Match
    __mbclen
   
   Library: Visual Studio 2003 Release */

size_t __cdecl __mbclen(uchar *_Str)

{
  if ((((&DAT_004e3201)[*_Str] & 4) != 0) && (_Str[1] != '\0')) {
    return 2;
  }
  return 1;
}

