// FUNCTION: PORT1111 0x004a4710
// name: FUN_004a4710
// sig: void * FUN_004a4710(int * param_1, size_t param_2)


void * __cdecl FUN_004a4710(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pvVar1 = _malloc(param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_004ac6e0(param_1,s_Out_of_Memory_004deacb + 1);
    }
    return pvVar1;
  }
  return (void *)0x0;
}

