// FUNCTION: PORT1111 0x004a4c70
// name: FUN_004a4c70
// sig: undefined FUN_004a4c70(int * param_1, int param_2)


void __cdecl FUN_004a4c70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  if ((*(byte *)(param_1 + 0x1a) & 4) == 0) {
    FUN_004ac6e0(param_1,s_No_IDATs_written_into_file_004deb2c);
  }
  if (param_2 != 0) {
    if (((*(uint *)(param_2 + 8) & 0x200) != 0) && ((param_1[0x1a] & 0x200U) == 0)) {
      FUN_004ae240(param_1,(ushort *)(param_2 + 0x3c));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_2 + 0x30)) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(param_2 + 0x38) + iVar5;
        iVar2 = *(int *)(*(int *)(param_2 + 0x38) + iVar5);
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            if (iVar2 == -1) {
              FUN_004add90(param_1,*(byte **)(iVar1 + 4),*(byte **)(iVar1 + 8));
              *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar5) = 0xfffffffd;
            }
          }
          else {
            FUN_004ade40(param_1,*(byte **)(iVar1 + 4),*(byte **)(iVar1 + 8),0,iVar2);
            *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar5) = 0xfffffffe;
          }
        }
        else {
          FUN_004ac710((int)param_1,s_Unable_to_write_international_te_004deadc);
          *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar5) = 0xfffffffd;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar4 < *(int *)(param_2 + 0x30));
    }
    if ((*(int *)(param_2 + 0xc0) != 0) &&
       (pbVar6 = *(byte **)(param_2 + 0xbc), pbVar6 < pbVar6 + *(int *)(param_2 + 0xc0) * 0x14)) {
      do {
        uVar3 = FUN_004a7210((int)param_1,(int *)pbVar6);
        if (((CONCAT31(extraout_var,uVar3) != 1) &&
            ((pbVar6[0x10] != 0 && ((pbVar6[0x10] & 8) != 0)))) &&
           (((pbVar6[3] & 0x20) != 0 ||
            ((CONCAT31(extraout_var,uVar3) == 3 || ((param_1[0x1b] & 0x10000U) != 0)))))) {
          FUN_004ac940(param_1,pbVar6,*(byte **)(pbVar6 + 8),*(uint *)(pbVar6 + 0xc));
        }
        pbVar6 = pbVar6 + 0x14;
      } while (pbVar6 < (byte *)(*(int *)(param_2 + 0xbc) + *(int *)(param_2 + 0xc0) * 0x14));
    }
  }
  param_1[0x1a] = param_1[0x1a] | 8;
  FUN_004acec0(param_1);
  return;
}

