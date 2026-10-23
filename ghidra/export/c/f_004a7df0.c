// FUNCTION: PORT1111 0x004a7df0
// name: FUN_004a7df0
// sig: undefined FUN_004a7df0(int * param_1, uint * param_2)


void __cdecl FUN_004a7df0(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined3 extraout_var;
  
  piVar2 = param_1;
  FUN_004afd10(param_1,0);
  puVar3 = param_2;
  pbVar1 = (byte *)(piVar2 + 0x47);
  do {
    FUN_004ac610(piVar2,&param_1,4);
    uVar5 = FUN_004afc90((byte *)&param_1);
    FUN_004a6d00((int)piVar2);
    FUN_004afce0(piVar2,pbVar1,4);
    if (*(int *)pbVar1 == DAT_004c844c) {
      FUN_004b0170(piVar2,puVar3,uVar5);
    }
    else if (*(int *)pbVar1 == DAT_004c845c) {
      FUN_004b0450(piVar2,puVar3,uVar5);
    }
    else {
      uVar4 = FUN_004a7210((int)piVar2,(int *)pbVar1);
      if (CONCAT31(extraout_var,uVar4) == 0) {
        if (*(int *)pbVar1 == DAT_004c8454) {
          if ((uVar5 != 0) || ((*(byte *)(piVar2 + 0x1a) & 8) != 0)) {
            FUN_004ac6e0(piVar2,s_Too_many_IDAT_s_found_004df328);
          }
          FUN_004afd10(piVar2,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c8464) {
          FUN_004b02e0(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c846c) {
          FUN_004b1470(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c8474) {
          FUN_004b0760(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c847c) {
          FUN_004b04a0(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c8484) {
          FUN_004b1670(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c849c) {
          FUN_004b18b0(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84a4) {
          FUN_004b19a0(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84ac) {
          FUN_004b1bd0(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84b4) {
          FUN_004b17c0(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84bc) {
          FUN_004b05f0(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84cc) {
          FUN_004b0c60(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c848c) {
          FUN_004b0e70(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84c4) {
          FUN_004b1030(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84d4) {
          FUN_004b1e70(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84dc) {
          FUN_004b1d80(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84e4) {
          FUN_004b1230(piVar2,(int)puVar3,uVar5);
        }
        else if (*(int *)pbVar1 == DAT_004c84ec) {
          FUN_004b1f30(piVar2,(int)puVar3,uVar5);
        }
        else {
          FUN_004b2040(piVar2,(int)puVar3,uVar5);
        }
      }
      else {
        if (*(int *)pbVar1 == DAT_004c8454) {
          if ((uVar5 != 0) || ((*(byte *)(piVar2 + 0x1a) & 8) != 0)) {
            FUN_004ac6e0(piVar2,s_Too_many_IDAT_s_found_004df328);
          }
        }
        else {
          piVar2[0x1a] = piVar2[0x1a] | 8;
        }
        FUN_004b2040(piVar2,(int)puVar3,uVar5);
        if (*(int *)pbVar1 == DAT_004c8464) {
          piVar2[0x1a] = piVar2[0x1a] | 2;
        }
      }
    }
  } while ((*(byte *)(piVar2 + 0x1a) & 0x10) == 0);
  return;
}

