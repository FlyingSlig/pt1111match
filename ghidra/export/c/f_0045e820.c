// FUNCTION: PORT1111 0x0045e820
// name: FUN_0045e820
// sig: int FUN_0045e820(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10)


int __cdecl
FUN_0045e820(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar2 = param_9 - param_1;
  iVar1 = ((param_8 - param_2) * iVar2) / (param_7 - param_1) + param_2;
  if (((iVar1 <= param_10) &&
      (param_10 < ((param_6 - param_4) * (param_9 - param_3)) / (param_5 - param_3) + param_4)) &&
     (param_10 < ((param_4 - param_2) * iVar2) / (param_3 - param_1) + param_2)) {
    iVar1 = FUN_0045e4a0(param_1,param_2,param_3,param_4,param_9,param_10);
    return iVar1;
  }
  iVar2 = ((param_4 - param_2) * iVar2) / (param_3 - param_1) + param_2;
  if (((iVar2 <= param_10) &&
      (param_10 < ((param_9 - param_5) * (param_8 - param_6)) / (param_7 - param_5) + param_6)) &&
     (((param_6 - param_4) * (param_9 - param_3)) / (param_5 - param_3) + param_4 <= param_10)) {
    iVar1 = FUN_0045e4a0(param_3,param_4,param_5,param_6,param_9,param_10);
    return iVar1;
  }
  if (((iVar1 <= param_10) &&
      (param_10 < ((param_6 - param_4) * (param_9 - param_3)) / (param_5 - param_3) + param_4)) &&
     (((param_9 - param_5) * (param_8 - param_6)) / (param_7 - param_5) + param_6 <= param_10)) {
    iVar1 = FUN_0045e4a0(param_5,param_6,param_7,param_8,param_9,param_10);
    return iVar1;
  }
  if (((iVar2 <= param_10) &&
      (param_10 < ((param_9 - param_5) * (param_8 - param_6)) / (param_7 - param_5) + param_6)) &&
     (param_10 < iVar1)) {
    iVar1 = FUN_0045e4a0(param_1,param_2,param_7,param_8,param_9,param_10);
    return iVar1;
  }
  uVar3 = FUN_00497d88();
  uVar4 = FUN_00497d88();
  param_2 = (int)uVar3;
  if ((int)uVar4 < (int)uVar3) {
    param_2 = (int)uVar4;
  }
  uVar3 = FUN_00497d88();
  if ((int)uVar3 < param_2) {
    param_2 = (int)uVar3;
  }
  uVar3 = FUN_00497d88();
  if ((int)uVar3 < param_2) {
    param_2 = (int)uVar3;
  }
  return param_2;
}

