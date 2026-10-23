// FUNCTION: PORT1111 0x004629a0
// name: FUN_004629a0
// sig: undefined FUN_004629a0(int * param_1, undefined1 * param_2, int param_3, int param_4)


void __cdecl FUN_004629a0(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = 0;
  if (param_1[0x1f] < 1) {
    uVar5 = param_3 + 5;
  }
  else {
    if ((char)param_1[7] == '\x02') {
      FUN_00463ef0((int)param_1);
    }
    FUN_00462b90(param_1,param_1 + 0x2c4);
    FUN_00462b90(param_1,param_1 + 0x2c7);
    iVar3 = FUN_00463160(param_1);
    uVar6 = param_1[0x5a8] + 10U >> 3;
    uVar5 = param_1[0x5a9] + 10U >> 3;
    if (uVar6 < uVar5) goto LAB_00462a0a;
  }
  uVar6 = uVar5;
LAB_00462a0a:
  if ((uVar6 < param_3 + 4U) || (param_2 == (undefined1 *)0x0)) {
    iVar2 = param_1[0x5ad];
    bVar4 = (byte)iVar2;
    if (uVar5 == uVar6) {
      iVar3 = param_4 + 2;
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x5ac) =
             *(ushort *)(param_1 + 0x5ac) | (ushort)(iVar3 << (bVar4 & 0x1f));
        param_1[0x5ad] = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ac) =
             *(ushort *)(param_1 + 0x5ac) | (ushort)(iVar3 << (bVar4 & 0x1f));
        *(char *)(param_1[2] + param_1[5]) = (char)param_1[0x5ac];
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(undefined1 *)(param_1[2] + iVar2 + 1) = *(undefined1 *)((int)param_1 + 0x16b1);
        iVar2 = param_1[0x5ad];
        param_1[5] = param_1[5] + 1;
        param_1[0x5ad] = iVar2 + -0xd;
        *(ushort *)(param_1 + 0x5ac) = (ushort)iVar3 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00463ab0((int)param_1,0x4c5320,0x4c57a0);
    }
    else {
      iVar1 = param_4 + 4;
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x5ac) =
             *(ushort *)(param_1 + 0x5ac) | (ushort)(iVar1 << (bVar4 & 0x1f));
        param_1[0x5ad] = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ac) =
             *(ushort *)(param_1 + 0x5ac) | (ushort)(iVar1 << (bVar4 & 0x1f));
        *(char *)(param_1[5] + param_1[2]) = (char)param_1[0x5ac];
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(undefined1 *)(iVar2 + 1 + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b1);
        iVar2 = param_1[0x5ad];
        param_1[5] = param_1[5] + 1;
        param_1[0x5ad] = iVar2 + -0xd;
        *(ushort *)(param_1 + 0x5ac) = (ushort)iVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_004632c0((int)param_1,param_1[0x2c5] + 1,param_1[0x2c8] + 1,iVar3 + 1);
      FUN_00463ab0((int)param_1,(int)(param_1 + 0x23),(int)(param_1 + 0x260));
    }
  }
  else {
    FUN_004626a0((int)param_1,param_2,param_3,param_4);
  }
  FUN_00462630((int)param_1);
  if (param_4 != 0) {
    FUN_00464020((int)param_1);
  }
  return;
}

