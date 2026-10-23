// FUNCTION: PORT1111 0x00455220
// name: FUN_00455220
// sig: undefined FUN_00455220(void * param_1)


void __fastcall FUN_00455220(void *param_1)

{
  bool bVar1;
  int *piVar2;
  uchar *puVar3;
  undefined3 extraout_var;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *local_1c;
  int iStack_18;
  void *local_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b8db0;
  pvStack_c = ExceptionList;
  local_1c = (int *)((int)param_1 + 0x8a4);
  iVar4 = 0x12;
  piVar5 = local_1c;
  ExceptionList = &pvStack_c;
  do {
    *piVar5 = 0;
    piVar5 = piVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)0x0;
  local_14 = param_1;
  if ((0 < *(int *)(*(int *)(DAT_004e240c + 0x21c) + 8)) &&
     (iVar4 = FUN_00453b10(*(int *)(DAT_004e240c + 0x21c)), iVar4 != 0)) {
    piVar5 = (int *)FUN_00414c30(DAT_004e240c);
    iVar4 = (**(code **)(*piVar5 + 0x88))();
    if ((*(int *)(iVar4 + 0x34) == DAT_004e26fc) &&
       (piVar7 = *(int **)(piVar5[0x14] + 0x94), piVar7 != *(int **)(piVar5[0x14] + 0x98))) {
      do {
        iStack_18 = 1;
        if ((*(int *)(*(int *)(DAT_004e240c + 0x21c) + 8) < 2) ||
           (piVar2 = *(int **)(*(int *)(DAT_004e240c + 0x21c) + 4), piVar6 = (int *)*piVar2,
           piVar6 == piVar2)) {
LAB_00455377:
          *local_1c = *piVar7;
          local_1c = local_1c + 2;
        }
        else {
          do {
            iVar4 = FUN_00414c30(DAT_004e240c);
            if (iVar4 != 0) {
              if (((*(byte *)(iVar4 + 0x3c) & 4) == 0) || (*(int *)(iVar4 + 0xf0) == 0)) {
                iVar4 = *(int *)(iVar4 + 0x50);
                piVar2 = *(int **)(iVar4 + 0x94);
                if (piVar2 != *(int **)(iVar4 + 0x98)) {
                  bVar1 = false;
                  do {
                    if (*piVar7 == *piVar2) {
                      bVar1 = true;
                    }
                    piVar2 = piVar2 + 1;
                  } while (piVar2 != *(int **)(iVar4 + 0x98));
                  if (bVar1) goto LAB_0045535c;
                }
              }
              iStack_18 = 0;
            }
LAB_0045535c:
            piVar6 = (int *)*piVar6;
          } while (piVar6 != (int *)*(int *)(*(int *)(DAT_004e240c + 0x21c) + 4));
          if (iStack_18 != 0) goto LAB_00455377;
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != *(int **)(piVar5[0x14] + 0x98));
    }
  }
  local_1c = (int *)0x0;
  piVar7 = (int *)((int)local_14 + 0x8a8);
  do {
    iVar4 = piVar7[-1];
    if (iVar4 == 0) {
      FUN_0046ff40(*(int **)(*piVar7 + 0xb0));
      FUN_0046ff40(*(int **)(*piVar7 + 0xb4));
      FUN_0046ff40(*(int **)(*piVar7 + 0xb8));
      FUN_00466af0(&uStack_10,"",0xffffffff);
      uStack_4 = 1;
      FUN_00466a50((void *)(*piVar7 + 0x50),&uStack_10);
      uStack_4 = 0xffffffff;
      FUN_00465e40(&uStack_10);
LAB_004556bb:
      piVar2 = (int *)*piVar7;
LAB_004556bf:
      FUN_00472ef0(piVar2);
    }
    else {
      if ((iVar4 < 1) || (0x4c < iVar4)) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = &DAT_004e2810 + iVar4 * 2;
      }
      if (puVar8[1] == 0) {
        puVar3 = (uchar *)FUN_00465e00(puVar8);
        FUN_00455080(local_14,(int)local_1c,piVar7[-1],puVar3);
        FUN_00471e00((void *)*piVar7,1);
      }
      else {
        FUN_00465cf0(&iStack_18);
        uStack_4 = 2;
        FUN_00466970(&iStack_18,(byte *)"%s\r\nCusto:%d");
        puVar3 = (uchar *)FUN_00465e00(&iStack_18);
        FUN_00455080(local_14,(int)local_1c,piVar7[-1],puVar3);
        if (*(uint *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x38) <
            *(uint *)(puVar8[1] + 0x110)) {
          FUN_00472ef0((int *)*piVar7);
        }
        else {
          FUN_00471e00((int *)*piVar7,1);
        }
        uStack_4 = 0xffffffff;
        FUN_00465e40(&iStack_18);
      }
      switch(piVar7[-1]) {
      case 0x3b:
        if ((piVar5 != (int *)0x0) && ((piVar5[0xf] & 0x10000U) != 0)) {
          FUN_00409530((int)piVar5);
          if ((piVar5[0x48] < 1) || ((0x14 < piVar5[0x48] || (DAT_004e2444 == 0))))
          goto LAB_004556bb;
          FUN_00471e00((void *)*piVar7,1);
        }
        break;
      default:
        *(undefined4 *)(*piVar7 + 0xcc) = 1;
        break;
      case 0x3d:
        *(undefined4 *)(*piVar7 + 0xcc) = 2;
        if (piVar5 != (int *)0x0) {
          bVar1 = FUN_00405f40(piVar5,1);
          piVar2 = (int *)*piVar7;
          if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_00455583:
            FUN_00471e90((int)piVar2);
          }
          else {
            FUN_00471e40(piVar2);
          }
        }
        break;
      case 0x40:
        if ((piVar5 != (int *)0x0) && ((char)piVar5[0xf] < '\0')) {
          piVar2 = (int *)*piVar7;
          if (0 < piVar5[0x49]) goto LAB_004556bf;
          FUN_00471e00(piVar2,1);
        }
        break;
      case 0x46:
        if (piVar5 != (int *)0x0) {
          piVar2 = (int *)*piVar7;
          if (piVar5[0x37] + piVar5[0x36] < 1) goto LAB_004556bf;
          FUN_00471e00(piVar2,1);
        }
        break;
      case 0x47:
        *(undefined4 *)(*piVar7 + 0xcc) = 2;
        if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0xf) & 4) != 0)) {
          piVar2 = (int *)*piVar7;
          if (piVar5[0x41] != 0) goto LAB_00455583;
          FUN_00471e40(piVar2);
        }
        break;
      case 0x48:
        *(undefined4 *)(*piVar7 + 0xcc) = 2;
        if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0xf) & 4) != 0)) {
          piVar2 = (int *)*piVar7;
          if (piVar5[0x41] != 1) goto LAB_00455583;
          FUN_00471e40(piVar2);
        }
        break;
      case 0x49:
        *(undefined4 *)(*piVar7 + 0xcc) = 2;
        if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0xf) & 4) != 0)) {
          piVar2 = (int *)*piVar7;
          if (piVar5[0x41] != 2) goto LAB_00455583;
          FUN_00471e40(piVar2);
        }
        break;
      case 0x4a:
        *(undefined4 *)(*piVar7 + 0xcc) = 2;
        if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0xf) & 4) != 0)) {
          piVar2 = (int *)*piVar7;
          if (piVar5[0x41] != 3) goto LAB_00455583;
          FUN_00471e40(piVar2);
        }
      }
    }
    if (DAT_004e2444 == 0) {
      (**(code **)(*(int *)*piVar7 + 0x9c))();
    }
    else {
      iVar4 = piVar7[-1];
      if (((iVar4 < 1) || (0x3a < iVar4)) || (iVar4 = FUN_0041ca90(&DAT_004e2430,iVar4), iVar4 != 0)
         ) {
        (**(code **)(*(int *)*piVar7 + 0x9c))();
      }
      else {
        (**(code **)(*(int *)*piVar7 + 0xa0))();
      }
    }
    local_1c = (int *)((int)local_1c + 1);
    piVar7 = piVar7 + 2;
    if (0x11 < (int)local_1c) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

