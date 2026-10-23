// FUNCTION: PORT1111 0x0048b800
// name: FUN_0048b800
// sig: undefined FUN_0048b800(int * param_1, uint * param_2, int param_3, int param_4, int param_5, int param_6)


void __cdecl
FUN_0048b800(int *param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_1;
  if (0 < param_4) {
    param_1 = (int *)param_4;
    do {
      piVar2 = piVar5;
      puVar3 = param_2;
      iVar4 = param_3 >> 1;
      if (0 < param_3 >> 1) {
        do {
          uVar1 = *puVar3;
          *piVar2 = (((uVar1 & 0xf800) << 3 | uVar1 & 0x7e0) << 2 | uVar1 & 0x1f) << 3;
          uVar1 = *puVar3;
          piVar2[1] = ((uVar1 >> 2 & 0x7c000 | uVar1 & 0x7e00000) >> 3 | uVar1 & 0xf80000ff) >> 8;
          iVar4 = iVar4 + -1;
          piVar2 = piVar2 + 2;
          puVar3 = puVar3 + 1;
        } while (iVar4 != 0);
      }
      piVar5 = (int *)((int)piVar5 + param_5);
      param_2 = (uint *)((int)param_2 + param_6);
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return;
}

