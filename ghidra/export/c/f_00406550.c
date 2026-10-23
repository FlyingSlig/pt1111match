// FUNCTION: PORT1111 0x00406550
// name: FUN_00406550
// sig: bool FUN_00406550(int param_1)


bool __fastcall FUN_00406550(int param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  
  uVar1 = FUN_00405a40(param_1);
  return (bool)('\x01' - (CONCAT31(extraout_var,uVar1) != 0));
}

