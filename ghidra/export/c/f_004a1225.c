// FUNCTION: PORT1111 0x004a1225
// name: _ValidateRead
// sig: int _ValidateRead(void * param_1, uint param_2)


/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2003 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return (uint)(BVar1 == 0);
}

