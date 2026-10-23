// FUNCTION: PORT1111 0x00448c00
// name: FUN_00448c00
// sig: undefined FUN_00448c00(void * this, uint param_1, POINT * param_2)


void __thiscall FUN_00448c00(void *this,uint param_1,POINT *param_2)

{
  int iVar1;
  int *piVar2;
  int local_8 [2];
  
  if ((DAT_004e2410 != (void *)0x0) && (iVar1 = FUN_00455010(DAT_004e2410,param_2), iVar1 != 0)) {
    return;
  }
  iVar1 = *(int *)((int)this + 0x38);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if ((param_1 & 1) == 0) {
        return;
      }
      piVar2 = (int *)FUN_004211c0((void *)(DAT_004e2404 + 0x94),local_8,&param_2->x);
      FUN_0043a280((DAT_004e26d0 - DAT_004e26c8) / 2 + *piVar2,
                   (DAT_004e26d4 - DAT_004e26cc) / 2 + piVar2[1]);
      FUN_00413300();
      return;
    }
    if (iVar1 != 3) {
      return;
    }
  }
  FUN_00413400(DAT_004e240c,&param_2->x,param_1);
  return;
}

