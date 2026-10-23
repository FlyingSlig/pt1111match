// FUNCTION: PORT1111 0x004602d0
// name: FUN_004602d0
// sig: undefined4 FUN_004602d0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, char * param_7, int param_8)


undefined4 __cdecl
FUN_004602d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  if (((param_7 == (char *)0x0) || (*param_7 != *PTR_s_1_1_4_004dc598)) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_00462580;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined **)(param_1 + 0x24) = &DAT_004625a0;
    }
    if (param_2 == -1) {
      param_2 = 6;
    }
    bVar6 = param_4 < 0;
    if (bVar6) {
      param_4 = -param_4;
    }
    if (((((0 < param_5) && (param_5 < 10)) &&
         ((param_3 == 8 && ((8 < param_4 && (param_4 < 0x10)))))) && (-1 < param_2)) &&
       (((param_2 < 10 && (-1 < param_6)) && (param_6 < 3)))) {
      piVar2 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16b8);
      if (piVar2 == (int *)0x0) {
        return 0xfffffffc;
      }
      *(int **)(param_1 + 0x1c) = piVar2;
      piVar2[6] = (uint)bVar6;
      iVar5 = 1 << ((byte)param_4 & 0x1f);
      piVar2[10] = param_4;
      *piVar2 = param_1;
      piVar2[0x12] = param_5 + 7;
      piVar2[9] = iVar5;
      piVar2[0xb] = iVar5 + -1;
      iVar3 = 1 << ((byte)(param_5 + 7) & 0x1f);
      piVar2[0x11] = iVar3;
      piVar2[0x13] = iVar3 + -1;
      piVar2[0x14] = (param_5 + 9U) / 3;
      iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar5,2);
      piVar2[0xc] = iVar3;
      iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[9],2);
      piVar2[0xe] = iVar3;
      iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[0x11],2);
      piVar2[0xf] = iVar3;
      iVar3 = 1 << ((char)param_5 + 6U & 0x1f);
      piVar2[0x5a5] = iVar3;
      iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar3,4);
      uVar1 = piVar2[0x5a5];
      piVar2[2] = iVar3;
      piVar2[3] = uVar1 * 4;
      if (((piVar2[0xc] != 0) && (piVar2[0xe] != 0)) && ((piVar2[0xf] != 0 && (iVar3 != 0)))) {
        *(undefined1 *)((int)piVar2 + 0x1d) = 8;
        piVar2[0x5a7] = iVar3 + (uVar1 & 0xfffffffe);
        piVar2[0x5a4] = iVar3 + uVar1 * 3;
        piVar2[0x20] = param_6;
        piVar2[0x1f] = param_2;
        uVar4 = FUN_004604d0(param_1);
        return uVar4;
      }
      *(undefined **)(param_1 + 0x18) = PTR_s_insufficient_memory_004dc628;
      FUN_004608b0(param_1);
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}

