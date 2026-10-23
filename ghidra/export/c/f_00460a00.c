// FUNCTION: PORT1111 0x00460a00
// name: FUN_00460a00
// sig: uint FUN_00460a00(int * param_1, int param_2)


uint __cdecl FUN_00460a00(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  uVar7 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar7 = param_1[3] - 5U;
  }
  do {
    uVar5 = param_1[0x1b];
    if (uVar5 < 2) {
      FUN_00460b60(param_1);
      uVar5 = param_1[0x1b];
      if (uVar5 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar6 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_004629a0(param_1,puVar6,param_1[0x19] - iVar2,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_00460830(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    iVar2 = param_1[0x19];
    param_1[0x1b] = 0;
    param_1[0x19] = iVar2 + uVar5;
    iVar3 = param_1[0x15];
    uVar4 = param_1[0x19];
    uVar1 = iVar3 + uVar7;
    if ((iVar2 + uVar5 == 0) || (uVar1 <= uVar4)) {
      param_1[0x19] = uVar1;
      param_1[0x1b] = uVar4 - uVar1;
      if (iVar3 < 0) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = (undefined1 *)(param_1[0xc] + iVar3);
      }
      FUN_004629a0(param_1,puVar6,uVar1 - iVar3,0);
      param_1[0x15] = param_1[0x19];
      FUN_00460830(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar2 = param_1[0x15];
    if (param_1[9] - 0x106U <= (uint)(param_1[0x19] - iVar2)) {
      if (iVar2 < 0) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_004629a0(param_1,puVar6,param_1[0x19] - iVar2,0);
      param_1[0x15] = param_1[0x19];
      FUN_00460830(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

