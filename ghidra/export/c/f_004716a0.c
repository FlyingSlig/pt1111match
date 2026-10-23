// FUNCTION: PORT1111 0x004716a0
// name: FUN_004716a0
// sig: undefined FUN_004716a0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, LPRECT param_9)


void __cdecl
FUN_004716a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,LPRECT param_9)

{
  ulonglong uVar1;
  
  if (param_3 - param_1 == param_7 - param_5) {
    OffsetRect(param_9,param_5 - param_1,0);
  }
  else {
    uVar1 = FUN_00497d88();
    param_9->left = (LONG)uVar1;
    uVar1 = FUN_00497d88();
    param_9->right = (LONG)uVar1;
  }
  if (param_4 - param_2 == param_8 - param_6) {
    OffsetRect(param_9,0,param_6 - param_2);
    return;
  }
  uVar1 = FUN_00497d88();
  param_9->top = (LONG)uVar1;
  uVar1 = FUN_00497d88();
  param_9->bottom = (LONG)uVar1;
  return;
}

