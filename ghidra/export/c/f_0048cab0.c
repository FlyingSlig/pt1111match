// FUNCTION: PORT1111 0x0048cab0
// name: FUN_0048cab0
// sig: undefined FUN_0048cab0(ulonglong * param_1, int param_2, int param_3, int param_4, int * param_5, int param_6, undefined2 param_7)


void __cdecl
FUN_0048cab0(ulonglong *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
            undefined2 param_7)

{
  int local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  if ((param_2 >> 2 != 0) &&
     (FUN_00487f80(param_7,0,&local_8,&local_10,&local_18,local_20), 0 < param_3)) {
    local_20[0] = param_3;
    do {
      FUN_0048ba60(CONCAT44(local_4,local_8),CONCAT44(local_c,local_10),CONCAT44(local_14,local_18),
                   param_1,param_5,param_2 >> 2);
      param_1 = (ulonglong *)((int)param_1 + param_4);
      param_5 = (int *)((int)param_5 + param_6);
      local_20[0] = local_20[0] + -1;
    } while (local_20[0] != 0);
  }
  return;
}

