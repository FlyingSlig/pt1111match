// FUNCTION: PORT1111 0x004a4fa0
// name: FUN_004a4fa0
// sig: undefined FUN_004a4fa0(int * param_1, undefined4 * param_2)


void __cdecl FUN_004a4fa0(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  
  if ((param_1[0x39] == 0) && ((char)param_1[0x49] == '\0')) {
    FUN_004ae2e0(param_1);
  }
  if ((*(char *)((int)param_1 + 0x123) != '\0') && ((*(byte *)(param_1 + 0x1c) & 2) != 0)) {
    switch((char)param_1[0x49]) {
    case '\0':
      if ((*(byte *)(param_1 + 0x39) & 7) != 0) {
        FUN_004ae480(param_1);
        return;
      }
      break;
    case '\x01':
      if (((*(byte *)(param_1 + 0x39) & 7) != 0) || ((uint)param_1[0x32] < 5)) {
        FUN_004ae480(param_1);
        return;
      }
      break;
    case '\x02':
      if (((byte)param_1[0x39] & 7) != 4) {
        FUN_004ae480(param_1);
        return;
      }
      break;
    case '\x03':
      if (((*(byte *)(param_1 + 0x39) & 3) != 0) || ((uint)param_1[0x32] < 3)) {
        FUN_004ae480(param_1);
        return;
      }
      break;
    case '\x04':
      if (((byte)param_1[0x39] & 3) != 2) {
        FUN_004ae480(param_1);
        return;
      }
      break;
    case '\x05':
      if (((*(byte *)(param_1 + 0x39) & 1) != 0) || ((uint)param_1[0x32] < 2)) {
        FUN_004ae480(param_1);
        return;
      }
      break;
    case '\x06':
      if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
        FUN_004ae480(param_1);
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)((int)param_1 + 0x126);
  *(char *)((int)param_1 + 0x109) = (char)param_1[0x4a];
  bVar2 = (char)param_1[0x4a] * *(char *)((int)param_1 + 299);
  *(byte *)((int)param_1 + 0x10b) = bVar2;
  puVar1 = (uint *)(param_1 + 0x40);
  *puVar1 = param_1[0x35];
  *(char *)((int)param_1 + 0x10a) = *(char *)((int)param_1 + 299);
  uVar3 = (uint)bVar2 * param_1[0x35] + 7 >> 3;
  param_1[0x41] = uVar3;
  FUN_004a4770(param_1,(undefined4 *)(param_1[0x3b] + 1),param_2,uVar3);
  if ((((*(char *)((int)param_1 + 0x123) != '\0') && (*(byte *)(param_1 + 0x49) < 6)) &&
      ((*(byte *)(param_1 + 0x1c) & 2) != 0)) &&
     (FUN_004ae640(puVar1,(undefined4 *)(param_1[0x3b] + 1),
                   (undefined4 *)(uint)*(byte *)(param_1 + 0x49)), *puVar1 == 0)) {
    FUN_004ae480(param_1);
    return;
  }
  if (param_1[0x1c] != 0) {
    FUN_004af570((int)param_1);
  }
  FUN_004ae8d0(param_1,(byte *)puVar1);
  if ((code *)param_1[0x67] != (code *)0x0) {
    (*(code *)param_1[0x67])(param_1,param_1[0x39],(char)param_1[0x49]);
  }
  return;
}

