// FUNCTION: PORT1111 0x0047b220
// name: FUN_0047b220
// sig: undefined FUN_0047b220(int * param_1, int param_2, int param_3, undefined2 param_4, int param_5)


void FUN_0047b220(int *param_1,int param_2,int param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  
  if (0 < param_2) {
    do {
      *(undefined2 *)*param_1 = param_4;
      iVar1 = *param_1 + param_3 * 2;
      param_2 = param_2 + -1;
      *param_1 = iVar1;
    } while (param_2 != 0);
    *param_1 = iVar1 + param_5 * 2;
    return;
  }
  *param_1 = *param_1 + param_5 * 2;
  return;
}

