// FUNCTION: PORT1111 0x00459450
// name: FUN_00459450
// sig: void * FUN_00459450(void * param_1, int param_2)


void * FUN_00459450(void *param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_0043d870(&DAT_004e27cc);
    puVar2 = *(uchar **)(iVar1 + 8);
  }
  else {
    iVar1 = FUN_0043d870(&DAT_004e27cc);
    puVar2 = *(uchar **)(iVar1 + 0xc);
  }
  FUN_00466af0(param_1,puVar2,0xffffffff);
  return param_1;
}

