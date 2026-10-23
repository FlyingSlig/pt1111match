// FUNCTION: PORT1111 0x00454010
// name: FUN_00454010
// sig: undefined FUN_00454010(void * this, int * param_1)


void __thiscall FUN_00454010(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  tagRECT local_10;
  
  piVar1 = param_1;
  iVar3 = FUN_004056a0((int)param_1);
  if (((iVar3 == 0) && ((piVar1[0xf] & 8U) == 0)) &&
     (((piVar1[0xf] & 4U) == 0 || (piVar1[0x3c] == 0)))) {
    local_10.left = DAT_004e26c8;
    local_10.bottom = DAT_004e26d4;
    local_10.top = DAT_004e26cc;
    local_10.right = DAT_004e26d0;
    OffsetRect(&local_10,-DAT_004e2c30,-DAT_004e2c34);
    param_1 = (int *)**(int **)(DAT_004e240c + 8);
    if (param_1 != *(int **)(DAT_004e240c + 8)) {
      do {
        piVar2 = param_1;
        iVar3 = (**(code **)(*(int *)param_1[4] + 0xa4))();
        if (((((iVar3 != 0) &&
              (*(int *)(((int *)piVar2[4])[0x14] + 0x14) == *(int *)(piVar1[0x14] + 0x14))) &&
             (iVar3 = (**(code **)(*(int *)piVar2[4] + 0x9c))(), iVar3 == 0)) &&
            (((*(byte *)(piVar2[4] + 0x3c) & 4) == 0 || (*(int *)(piVar2[4] + 0xf0) == 0)))) &&
           (BVar4 = PtInRect(&local_10,*(POINT *)(piVar2[4] + 4)), BVar4 != 0)) {
          FUN_00453f50(this,(int *)piVar2[4]);
        }
        FUN_00413730((int *)&param_1);
      } while (param_1 != *(int **)(DAT_004e240c + 8));
    }
    *(undefined4 *)((int)this + 0xc) = 1;
  }
  return;
}

