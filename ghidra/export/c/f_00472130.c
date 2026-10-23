// FUNCTION: PORT1111 0x00472130
// name: FUN_00472130
// sig: undefined FUN_00472130(int * param_1)


void __fastcall FUN_00472130(int *param_1)

{
  if ((param_1[0x10] != 0) && (param_1[0x25] != 0)) {
    (**(code **)(*param_1 + 0x1c))();
    FUN_0047a740((void *)param_1[0x10],(uint)*(ushort *)(param_1[0x25] + 4));
    param_1[0x25] = 0;
  }
  if (param_1[0xd] != 0) {
    FUN_0046ecf0(param_1);
    param_1[0xd] = 0;
  }
  return;
}

