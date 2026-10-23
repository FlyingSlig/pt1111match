// FUNCTION: PORT1111 0x004a8ed0
// name: FUN_004a8ed0
// sig: undefined FUN_004a8ed0(int param_1, int * param_2)


void __cdecl FUN_004a8ed0(int param_1,int *param_2)

{
  byte bVar1;
  
  if ((*(uint *)(param_1 + 0x70) & 0x1000) == 0) goto LAB_004a8f20;
  if (*(byte *)((int)param_2 + 0x19) == 3) {
    *(byte *)((int)param_2 + 0x19) = (-(*(short *)(param_1 + 0x11a) != 0) & 4U) + 2;
LAB_004a8f17:
    *(undefined1 *)(param_2 + 6) = 8;
  }
  else {
    if (*(short *)(param_1 + 0x11a) != 0) {
      *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 4;
    }
    if (*(byte *)(param_2 + 6) < 8) goto LAB_004a8f17;
  }
  *(undefined2 *)((int)param_2 + 0x16) = 0;
LAB_004a8f20:
  if ((*(byte *)(param_1 + 0x70) & 0x80) != 0) {
    *(undefined2 *)((int)param_2 + 0x16) = 0;
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) & 0xfb;
    *(undefined4 *)((int)param_2 + 0x5a) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)((int)param_2 + 0x5e) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined2 *)((int)param_2 + 0x62) = *(undefined2 *)(param_1 + 0x140);
  }
  if ((*(uint *)(param_1 + 0x70) & 0x2000) != 0) {
    param_2[10] = *(int *)(param_1 + 0x15c);
    param_2[0x3f] = *(int *)(param_1 + 0x234);
  }
  if (((*(uint *)(param_1 + 0x70) & 0x400) != 0) && ((char)param_2[6] == '\x10')) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  if (((*(byte *)(param_1 + 0x70) & 0x40) != 0) &&
     ((((*(char *)((int)param_2 + 0x19) == '\x02' || (*(char *)((int)param_2 + 0x19) == '\x06')) &&
       (*(int *)(param_1 + 0x1ec) != 0)) && ((char)param_2[6] == '\b')))) {
    *(undefined1 *)((int)param_2 + 0x19) = 3;
  }
  if (((*(byte *)(param_1 + 0x70) & 4) != 0) && (*(byte *)(param_2 + 6) < 8)) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  if ((*(uint *)(param_1 + 0x70) & 0x4000) != 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 2;
  }
  if ((*(uint *)(param_1 + 0x70) & 0x600000) != 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) & 0xfd;
  }
  bVar1 = *(byte *)((int)param_2 + 0x19);
  if ((bVar1 == 3) || ((bVar1 & 2) == 0)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
  }
  if ((*(uint *)(param_1 + 0x70) & 0x40000) != 0) {
    *(byte *)((int)param_2 + 0x19) = bVar1 & 0xfb;
  }
  bVar1 = *(byte *)((int)param_2 + 0x19);
  if ((bVar1 & 4) != 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  if (((*(uint *)(param_1 + 0x70) & 0x8000) != 0) && ((bVar1 == 2 || (bVar1 == 0)))) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x70) & 0x100000) != 0) {
    if (*(byte *)(param_2 + 6) < *(byte *)(param_1 + 100)) {
      *(byte *)(param_2 + 6) = *(byte *)(param_1 + 100);
    }
    if (*(byte *)((int)param_2 + 0x1d) < *(byte *)(param_1 + 0x65)) {
      *(byte *)((int)param_2 + 0x1d) = *(byte *)(param_1 + 0x65);
    }
  }
  bVar1 = (char)param_2[6] * *(char *)((int)param_2 + 0x1d);
  *(byte *)((int)param_2 + 0x1e) = bVar1;
  param_2[3] = (uint)bVar1 * *param_2 + 7 >> 3;
  return;
}

