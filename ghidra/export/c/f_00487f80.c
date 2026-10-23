// FUNCTION: PORT1111 0x00487f80
// name: FUN_00487f80
// sig: undefined FUN_00487f80(undefined2 param_1, undefined1 param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00487f80(undefined2 param_1,undefined1 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = CONCAT44(CONCAT22(param_1,param_1),CONCAT22(param_1,param_1));
  uVar4 = uVar1 & _DAT_004dd9c0;
  uVar3 = uVar1 & _DAT_004dd9b8;
  uVar2 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(param_2,param_2),param_2),param_2),
                                     param_2),param_2),CONCAT11(param_2,param_2)) & _DAT_004dd9d8;
  local_20 = (undefined4)((uVar1 & _DAT_004dd9b0) >> 0xb);
  uStack_1c = (uint)((uVar1 & _DAT_004dd9b0) >> 0x2b);
  *param_3 = local_20;
  local_18 = (undefined4)(uVar3 >> 5);
  param_3[1] = uStack_1c;
  uStack_14 = (uint)(uVar3 >> 0x25);
  *param_4 = local_18;
  local_10 = (undefined4)uVar4;
  param_4[1] = uStack_14;
  uStack_c = (undefined4)(uVar4 >> 0x20);
  *param_5 = local_10;
  local_8 = (undefined4)uVar2;
  param_5[1] = uStack_c;
  uStack_4 = (undefined4)(uVar2 >> 0x20);
  *param_6 = local_8;
  param_6[1] = uStack_4;
  return;
}

