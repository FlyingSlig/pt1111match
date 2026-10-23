// FUNCTION: PORT1111 0x004a5e00
// name: FUN_004a5e00
// sig: undefined FUN_004a5e00(int * param_1, int param_2, int param_3)


void __cdecl FUN_004a5e00(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (*(short *)(param_2 + 0x14) == 0) {
      FUN_004ac710((int)param_1,s_Palette_size_0__hIST_allocation_s_004def70);
      return;
    }
    FUN_004a6df0((int)param_1,param_2,8,0);
    pvVar1 = FUN_004a4710(param_1,(uint)*(ushort *)(param_2 + 0x14) << 1);
    param_1[0x7d] = (int)pvVar1;
    iVar2 = 0;
    if (*(short *)(param_2 + 0x14) != 0) {
      do {
        *(undefined2 *)(param_1[0x7d] + iVar2 * 2) = *(undefined2 *)(param_3 + iVar2 * 2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 0x14));
    }
    *(int *)(param_2 + 0x7c) = param_1[0x7d];
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 8;
  }
  return;
}

