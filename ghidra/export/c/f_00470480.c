// FUNCTION: PORT1111 0x00470480
// name: FUN_00470480
// sig: undefined FUN_00470480(int * param_1)


void __fastcall FUN_00470480(int *param_1)

{
  if ((param_1[0x10] != 0) && (param_1[0x28] != 0)) {
    (**(code **)(*param_1 + 0x1c))();
    FUN_0047a740((void *)param_1[0x10],(uint)*(ushort *)(param_1[0x28] + 4));
    param_1[0x28] = 0;
  }
  return;
}

