// FUNCTION: PORT1111 0x0049a5cb
// name: __ultoa
// sig: char * __ultoa(ulong _Value, char * _Dest, int _Radix)


/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Release */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Radix,0);
  return _Dest;
}

