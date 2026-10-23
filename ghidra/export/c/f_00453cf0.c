// FUNCTION: PORT1111 0x00453cf0
// name: FUN_00453cf0
// sig: int FUN_00453cf0(int param_1)


int __fastcall FUN_00453cf0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0043d220();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 3;
  return param_1;
}

