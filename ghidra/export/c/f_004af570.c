// FUNCTION: PORT1111 0x004af570
// name: FUN_004af570
// sig: undefined FUN_004af570(int param_1)


void __cdecl FUN_004af570(int param_1)

{
  if (param_1 != 0) {
    if (((*(uint *)(param_1 + 0x70) & 0x100000) != 0) && (*(code **)(param_1 + 0x5c) != (code *)0x0)
       ) {
      (**(code **)(param_1 + 0x5c))(param_1,param_1 + 0x100,*(int *)(param_1 + 0xec) + 1);
    }
    if ((*(uint *)(param_1 + 0x70) & 0x8000) != 0) {
      FUN_004a57e0((uint *)(param_1 + 0x100),(undefined1 *)(*(int *)(param_1 + 0xec) + 1),
                   (byte)*(undefined4 *)(param_1 + 0x6c));
    }
    if ((*(uint *)(param_1 + 0x70) & 0x10000) != 0) {
      FUN_004a5790(param_1 + 0x100,(byte *)(*(int *)(param_1 + 0xec) + 1));
    }
    if ((*(byte *)(param_1 + 0x70) & 4) != 0) {
      FUN_004af6d0((int *)(param_1 + 0x100),(byte *)(*(int *)(param_1 + 0xec) + 1),
                   (uint)*(byte *)(param_1 + 0x127));
    }
    if ((*(byte *)(param_1 + 0x70) & 0x10) != 0) {
      FUN_004a5760((int *)(param_1 + 0x100),(undefined1 *)(*(int *)(param_1 + 0xec) + 1));
    }
    if ((*(byte *)(param_1 + 0x70) & 8) != 0) {
      FUN_004af7e0((int *)(param_1 + 0x100),(byte *)(*(int *)(param_1 + 0xec) + 1),
                   (byte *)(param_1 + 0x181));
    }
    if ((*(uint *)(param_1 + 0x70) & 0x80000) != 0) {
      FUN_004afb80((int *)(param_1 + 0x100),(undefined1 *)(*(int *)(param_1 + 0xec) + 1));
    }
    if ((*(uint *)(param_1 + 0x70) & 0x20000) != 0) {
      FUN_004afa70((int *)(param_1 + 0x100),(undefined1 *)(*(int *)(param_1 + 0xec) + 1));
    }
    if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
      FUN_004a59f0((int *)(param_1 + 0x100),(undefined1 *)(*(int *)(param_1 + 0xec) + 1));
    }
    if ((*(byte *)(param_1 + 0x70) & 0x20) != 0) {
      FUN_004a5730(param_1 + 0x100,(byte *)(*(int *)(param_1 + 0xec) + 1));
    }
  }
  return;
}

