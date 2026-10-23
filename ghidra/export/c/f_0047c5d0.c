// FUNCTION: PORT1111 0x0047c5d0
// name: FUN_0047c5d0
// sig: int FUN_0047c5d0(int param_1)


int __fastcall FUN_0047c5d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_004e2b14 + 0xf8);
  }
  return iVar1;
}

