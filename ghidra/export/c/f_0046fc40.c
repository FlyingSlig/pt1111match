// FUNCTION: PORT1111 0x0046fc40
// name: FUN_0046fc40
// sig: undefined FUN_0046fc40(int * param_1)


void __fastcall FUN_0046fc40(int *param_1)

{
  FUN_00405130();
  if (param_1[0xd] != 0) {
    FUN_0046ecf0(param_1);
    param_1[0xd] = 0;
  }
  FUN_00466a50(param_1 + 0x29,param_1 + 0x27);
  return;
}

