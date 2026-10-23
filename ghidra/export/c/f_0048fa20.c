// FUNCTION: PORT1111 0x0048fa20
// name: FUN_0048fa20
// sig: undefined FUN_0048fa20(void * param_1, int * param_2, int param_3, int param_4, int param_5, int * param_6)


void __cdecl
FUN_0048fa20(void *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (0 < param_4) {
    do {
      iVar1 = *param_6;
      *param_6 = iVar1 + 1;
      if (iVar1 + 1 == param_5) {
        *param_6 = 0;
        iVar1 = *(int *)((int)param_1 + 4);
        if ((iVar1 == 0) ||
           ((uint)(*(int *)((int)param_1 + 0xc) - iVar1 >> 3) <=
            (uint)(*(int *)((int)param_1 + 8) - iVar1 >> 3))) {
          FUN_0040fba0(param_1,*(undefined4 **)((int)param_1 + 8),1,param_2);
        }
        else {
          puVar2 = *(undefined4 **)((int)param_1 + 8);
          FUN_0041f4d0(puVar2,1,param_2);
          *(undefined4 **)((int)param_1 + 8) = puVar2 + 2;
        }
      }
      param_4 = param_4 + -1;
      *param_2 = *param_2 + param_3;
    } while (param_4 != 0);
    param_2[1] = param_2[1] + 1;
    return;
  }
  param_2[1] = param_2[1] + 1;
  return;
}

