// FUNCTION: PORT1111 0x0040b9d0
// name: FUN_0040b9d0
// sig: undefined FUN_0040b9d0(int param_1)


void __fastcall FUN_0040b9d0(int param_1)

{
  double dVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x44) + 1;
  dVar1 = (double)*(int *)(param_1 + 0x10) + *(double *)(param_1 + 0x38);
  *(int *)(param_1 + 0x44) = iVar2;
  *(double *)(param_1 + 0x38) = dVar1;
  if ((*(int *)(param_1 + 0xc) == 0) && (iVar2 == *(int *)(param_1 + 0x48))) {
    *(double *)(param_1 + 0x38) = dVar1 + (double)*(int *)(param_1 + 0x10);
    return;
  }
  return;
}

