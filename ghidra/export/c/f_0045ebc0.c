// FUNCTION: PORT1111 0x0045ebc0
// name: FUN_0045ebc0
// sig: undefined FUN_0045ebc0(int param_1, int param_2, int param_3, int param_4, void * param_5, int param_6)


void __cdecl FUN_0045ebc0(int param_1,int param_2,int param_3,int param_4,void *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  int local_4;
  
  uVar7 = param_3 - param_1 >> 0x1f;
  iVar6 = (param_3 - param_1 ^ uVar7) - uVar7;
  uVar7 = param_4 - param_2 >> 0x1f;
  iVar5 = (param_4 - param_2 ^ uVar7) - uVar7;
  bVar3 = param_1 <= param_3;
  param_3 = 0;
  iVar1 = (uint)bVar3 * 2 + -1;
  iVar2 = (uint)(param_2 <= param_4) * 2 + -1;
  if (iVar6 < iVar5) {
    iVar6 = iVar6 * 2;
    iVar8 = iVar6 - iVar5;
    if (-1 < iVar5) {
      param_4 = iVar5 + 1;
      do {
        if (param_3 % param_6 == 0) {
          local_8 = param_1;
          local_4 = param_2;
          FUN_0040fdf0(param_5,&local_8);
        }
        param_2 = param_2 + iVar2;
        iVar4 = iVar6;
        if (0 < iVar8) {
          param_1 = param_1 + iVar1;
          iVar4 = iVar6 + iVar5 * -2;
        }
        iVar8 = iVar8 + iVar4;
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  else {
    iVar5 = iVar5 * 2;
    iVar8 = iVar5 - iVar6;
    if (-1 < iVar6) {
      param_4 = iVar6 + 1;
      do {
        if (param_3 % param_6 == 0) {
          local_8 = param_1;
          local_4 = param_2;
          FUN_0040fdf0(param_5,&local_8);
        }
        iVar4 = iVar5;
        if (0 < iVar8) {
          param_2 = param_2 + iVar2;
          iVar4 = iVar5 + iVar6 * -2;
        }
        iVar8 = iVar8 + iVar4;
        param_1 = param_1 + iVar1;
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  return;
}

