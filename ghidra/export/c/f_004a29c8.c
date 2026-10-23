// FUNCTION: PORT1111 0x004a29c8
// name: __set_errno
// sig: errno_t __set_errno(int _Value)


/* Library Function - Single Match
    __set_errno
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl __set_errno(int _Value)

{
  int *piVar1;
  
  if (_Value == 1) {
    _Value = (int)FUN_0049fc4d();
    *(int *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    piVar1 = FUN_0049fc4d();
    *piVar1 = 0x22;
    return (errno_t)piVar1;
  }
  return _Value;
}

