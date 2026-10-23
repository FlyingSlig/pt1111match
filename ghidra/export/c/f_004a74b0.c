// FUNCTION: PORT1111 0x004a74b0
// name: FUN_004a74b0
// sig: undefined FUN_004a74b0(int * param_1, uint * param_2)


void __cdecl FUN_004a74b0(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined3 extraout_var;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  puVar3 = param_2;
  piVar2 = param_1;
  if (*(byte *)(param_1 + 0x4b) < 8) {
    uVar6 = (uint)*(byte *)(param_1 + 0x4b);
    uVar7 = -uVar6 + 8;
    FUN_004ac610(param_1,uVar6 + 0x20 + (int)param_2,uVar7);
    *(undefined1 *)(piVar2 + 0x4b) = 8;
    iVar5 = FUN_004a6bf0((int)(puVar3 + 8),uVar6,uVar7);
    if (iVar5 != 0) {
      if ((uVar6 < 4) && (iVar5 = FUN_004a6bf0((int)(puVar3 + 8),uVar6,-uVar6 + 4), iVar5 != 0)) {
        pcVar8 = s_Not_a_PNG_file_004df268;
      }
      else {
        pcVar8 = s_PNG_file_corrupted_by_ASCII_conv_004df240;
      }
      FUN_004ac6e0(piVar2,pcVar8);
    }
    if (uVar6 < 3) {
      piVar2[0x1a] = piVar2[0x1a] | 0x1000;
    }
  }
  pbVar1 = (byte *)(piVar2 + 0x47);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            FUN_004ac610(piVar2,&param_1,4);
            uVar6 = FUN_004afc90((byte *)&param_1);
            FUN_004a6d00((int)piVar2);
            FUN_004afce0(piVar2,pbVar1,4);
            if (*(int *)pbVar1 != DAT_004c844c) break;
            FUN_004b0170(piVar2,puVar3,uVar6);
          }
          if (*(int *)pbVar1 != DAT_004c845c) break;
          FUN_004b0450(piVar2,puVar3,uVar6);
        }
        uVar4 = FUN_004a7210((int)piVar2,(int *)pbVar1);
        if (CONCAT31(extraout_var,uVar4) == 0) break;
        if (*(int *)pbVar1 == DAT_004c8454) {
          piVar2[0x1a] = piVar2[0x1a] | 4;
        }
        FUN_004b2040(piVar2,(int)puVar3,uVar6);
        if (*(int *)pbVar1 == DAT_004c8464) {
          piVar2[0x1a] = piVar2[0x1a] | 2;
        }
        else if (*(int *)pbVar1 == DAT_004c8454) {
          if ((piVar2[0x1a] & 1U) == 0) {
            FUN_004ac6e0(piVar2,s_Missing_IHDR_before_IDAT_004df224);
            return;
          }
          if ((*(char *)((int)piVar2 + 0x126) == '\x03') && ((piVar2[0x1a] & 2U) == 0)) {
            FUN_004ac6e0(piVar2,s_Missing_PLTE_before_IDAT_004df208);
            return;
          }
          return;
        }
      }
      if (*(int *)pbVar1 != DAT_004c8464) break;
      FUN_004b02e0(piVar2,(int)puVar3,uVar6);
    }
    if (*(int *)pbVar1 == DAT_004c8454) break;
    if (*(int *)pbVar1 == DAT_004c846c) {
      FUN_004b1470(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c8474) {
      FUN_004b0760(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c847c) {
      FUN_004b04a0(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c8484) {
      FUN_004b1670(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c849c) {
      FUN_004b18b0(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84a4) {
      FUN_004b19a0(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84ac) {
      FUN_004b1bd0(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84b4) {
      FUN_004b17c0(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84bc) {
      FUN_004b05f0(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84cc) {
      FUN_004b0c60(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c848c) {
      FUN_004b0e70(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84c4) {
      FUN_004b1030(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84d4) {
      FUN_004b1e70(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84dc) {
      FUN_004b1d80(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84e4) {
      FUN_004b1230(piVar2,(int)puVar3,uVar6);
    }
    else if (*(int *)pbVar1 == DAT_004c84ec) {
      FUN_004b1f30(piVar2,(int)puVar3,uVar6);
    }
    else {
      FUN_004b2040(piVar2,(int)puVar3,uVar6);
    }
  }
  if ((piVar2[0x1a] & 1U) == 0) {
    pcVar8 = s_Missing_IHDR_before_IDAT_004df224;
  }
  else {
    if ((*(char *)((int)piVar2 + 0x126) != '\x03') || ((piVar2[0x1a] & 2U) != 0)) goto LAB_004a783b;
    pcVar8 = s_Missing_PLTE_before_IDAT_004df208;
  }
  FUN_004ac6e0(piVar2,pcVar8);
LAB_004a783b:
  piVar2[0x43] = uVar6;
  piVar2[0x1a] = piVar2[0x1a] | 4;
  return;
}

