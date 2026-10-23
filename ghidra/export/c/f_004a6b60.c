// FUNCTION: PORT1111 0x004a6b60
// name: FUN_004a6b60
// sig: undefined FUN_004a6b60(int * param_1, void * param_2, size_t param_3)


void __cdecl FUN_004a6b60(int *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = _fwrite(param_2,1,param_3,(FILE *)param_1[0x15]);
  if (sVar1 != param_3) {
    FUN_004ac6e0(param_1,s_Write_Error_004df19c);
  }
  return;
}

