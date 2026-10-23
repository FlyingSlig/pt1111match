// FUNCTION: PORT1111 0x004a61f0
// name: FUN_004a61f0
// sig: undefined FUN_004a61f0(int param_1, int param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)


void __cdecl
FUN_004a61f0(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined1 *)(param_2 + 0xdc) = param_3;
    *(undefined4 *)(param_2 + 0xe0) = param_4;
    *(undefined4 *)(param_2 + 0xe4) = param_5;
    *(undefined4 *)(param_2 + 0xe8) = param_6;
    *(undefined4 *)(param_2 + 0xec) = param_7;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
  }
  return;
}

