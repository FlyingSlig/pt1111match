// FUNCTION: PORT1111 0x00454140
// name: FUN_00454140
// sig: undefined FUN_00454140(void * this, int param_1, uint param_2, undefined4 param_3, undefined4 param_4, int * param_5, char param_6)


void __thiscall
FUN_00454140(void *this,int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            char param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (param_6 == '\x01') {
    if (param_5 == (int *)0x1) {
      FUN_00453950((int)this);
      piVar2 = (int *)FUN_00429c90(DAT_004e2404,&param_1,1,1);
      if (((piVar2 == (int *)0x0) &&
          (piVar2 = (int *)FUN_00429c90(DAT_004e2404,&param_1,0,1), piVar2 == (int *)0x0)) &&
         (piVar2 = (int *)FUN_00429c90(DAT_004e2404,&param_1,0,0), piVar2 == (int *)0x0)) {
        return;
      }
      iVar1 = FUN_00453f50(this,piVar2);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_004056a0((int)piVar2);
      if (iVar1 == 0) {
        if ((*(byte *)(piVar2 + 0xf) & 8) != 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
          iVar1 = (**(code **)(*piVar2 + 0xac))();
          if (iVar1 == 0) {
            return;
          }
          FUN_00405de0(piVar2,0);
          return;
        }
        iVar1 = FUN_00453830((int)piVar2);
        if (iVar1 != 0) {
          *(undefined4 *)((int)this + 0xc) = 4;
          return;
        }
        iVar1 = FUN_00453850((int)piVar2);
        if (iVar1 == 0) {
          return;
        }
        *(undefined4 *)((int)this + 0xc) = 1;
        FUN_00405de0(piVar2,0);
        return;
      }
      *(undefined4 *)((int)this + 0xc) = 2;
      return;
    }
    piVar2 = (int *)**(int **)((int)this + 4);
    if (piVar2 != *(int **)((int)this + 4)) {
      do {
        iVar1 = FUN_00414c30(DAT_004e240c);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x78) = 1;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)((int)this + 4));
    }
  }
  else if (param_6 == '\x03') {
    piVar2 = (int *)**(int **)((int)this + 4);
    if (piVar2 == *(int **)((int)this + 4)) {
      return;
    }
    do {
      iVar1 = FUN_00414c30(DAT_004e240c);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x78) = 0;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 4));
    return;
  }
  param_5 = (int *)**(int **)(DAT_004e240c + 8);
  if (param_5 == *(int **)(DAT_004e240c + 8)) {
    return;
  }
  do {
    piVar2 = param_5;
    if (param_6 == '\x01') {
      iVar1 = FUN_00405db0((int *)param_5[4],param_1,param_2);
    }
    else {
      iVar1 = (**(code **)(*(int *)param_5[4] + 0xa8))(&param_1);
    }
    iVar3 = (**(code **)(*(int *)piVar2[4] + 0xa4))();
    if (((iVar3 == 0) || (iVar1 == 0)) ||
       (iVar1 = (**(code **)(*(int *)(piVar2[4] + 0x14) + 0x14))(), iVar1 == 0)) {
      iVar1 = (**(code **)(*(int *)piVar2[4] + 0x9c))();
      if ((iVar1 != 0) && (((int *)piVar2[4])[0x1e] == 0)) {
        FUN_00453a00(this,(int *)piVar2[4]);
      }
    }
    else {
      if (*(int *)((int)this + 0xc) == 3) {
        iVar1 = FUN_004056a0(piVar2[4]);
        if (iVar1 == 0) {
          iVar1 = piVar2[4];
          if (((*(byte *)(iVar1 + 0x3c) & 4) == 0) || (*(int *)(iVar1 + 0xf0) == 0)) {
            if ((*(byte *)(iVar1 + 0x3c) & 8) == 0) {
              iVar1 = FUN_00453850(iVar1);
              if (iVar1 != 0) {
                *(undefined4 *)((int)this + 0xc) = 1;
              }
            }
            else {
              *(undefined4 *)((int)this + 0xc) = 0;
            }
          }
          else {
            *(undefined4 *)((int)this + 0xc) = 4;
          }
        }
        else {
          *(undefined4 *)((int)this + 0xc) = 2;
        }
      }
      else if (((*(int *)((int)this + 0xc) != 1) && (*(int *)((int)this + 8) == 1)) &&
              (iVar1 = FUN_00453850(piVar2[4]), iVar1 != 0)) {
        FUN_00453950((int)this);
        *(undefined4 *)((int)this + 0xc) = 1;
        goto LAB_00454475;
      }
      switch(*(undefined4 *)((int)this + 0xc)) {
      case 0:
        if ((*(byte *)(piVar2[4] + 0x3c) & 8) == 0) goto LAB_00454475;
      case 4:
        bVar4 = *(int *)((int)this + 8) == 1;
        break;
      case 1:
        iVar1 = FUN_00453850(piVar2[4]);
        bVar4 = iVar1 == 0;
        break;
      case 2:
        iVar1 = FUN_004056a0(piVar2[4]);
        if (iVar1 == 0) goto LAB_00454475;
        bVar4 = *(int *)((int)this + 8) == 1;
        break;
      default:
        goto switchD_004543a4_caseD_3;
      }
      if (!bVar4) {
switchD_004543a4_caseD_3:
        iVar1 = (**(code **)(*(int *)piVar2[4] + 0x9c))();
        if ((iVar1 != 0) && (param_6 == '\x01')) {
          FUN_00453a00(this,(int *)piVar2[4]);
          return;
        }
        iVar1 = (**(code **)(*(int *)piVar2[4] + 0x9c))();
        if (((iVar1 == 0) && (iVar1 = FUN_00453f50(this,(int *)piVar2[4]), iVar1 != 0)) &&
           (param_6 == '\x01')) {
          if (*(int *)((int)this + 8) != 1) {
            return;
          }
          iVar1 = FUN_004056a0(piVar2[4]);
          if (iVar1 != 0) {
            return;
          }
          iVar1 = (**(code **)(*(int *)piVar2[4] + 0xac))();
          if (iVar1 == 0) {
            return;
          }
          FUN_00405de0((void *)piVar2[4],0);
          return;
        }
      }
    }
LAB_00454475:
    FUN_00413730((int *)&param_5);
    if (param_5 == *(int **)(DAT_004e240c + 8)) {
      return;
    }
  } while( true );
}

