// FUNCTION: PORT1111 0x004ac6a0
// name: FUN_004ac6a0
// sig: undefined FUN_004ac6a0(int * param_1, void * param_2, size_t param_3)


void __cdecl FUN_004ac6a0(int *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = _fread(param_2,1,param_3,(FILE *)param_1[0x15]);
  if (sVar1 != param_3) {
    FUN_004ac6e0(param_1,s_Read_Error_004df49c);
  }
  return;
}

