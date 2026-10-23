// FUNCTION: PORT1111 0x0042ab60
// name: FUN_0042ab60
// sig: int FUN_0042ab60(int param_1)


int __fastcall FUN_0042ab60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0043d220();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

