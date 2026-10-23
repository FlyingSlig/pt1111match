// FUNCTION: PORT1111 0x0045e4a0
// name: FUN_0045e4a0
// sig: int FUN_0045e4a0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)


int __cdecl FUN_0045e4a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_00497d88();
  if ((int)uVar3 != 0) {
    uVar1 = (((param_2 - param_4) * param_5 - param_2 * param_3) + (param_3 - param_1) * param_6 +
            param_1 * param_4) / (int)uVar3;
    uVar2 = (int)uVar1 >> 0x1f;
    return (uVar1 ^ uVar2) - uVar2;
  }
  return 0;
}

