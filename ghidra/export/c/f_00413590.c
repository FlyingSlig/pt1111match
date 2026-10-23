// FUNCTION: PORT1111 0x00413590
// name: FUN_00413590
// sig: int FUN_00413590(int param_1, int param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00413590(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(param_2 + 0x2a8) == 9) {
    return 0;
  }
  if (*(int *)(param_2 + 0xcc) < *(int *)(param_1 + 0xc4)) {
    iVar4 = *(int *)(param_2 + 0xd8);
  }
  else {
    iVar4 = *(int *)(param_2 + 0xd4);
  }
  if (*(int *)(param_2 + 0xd0) < *(int *)(param_1 + 200)) {
    iVar2 = *(int *)(param_2 + 0xe0);
  }
  else {
    iVar2 = *(int *)(param_2 + 0xdc);
  }
  iVar2 = *(int *)(param_2 + 0xa4) + iVar4 + iVar2;
  iVar4 = *(int *)(param_1 + 0xc0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_2 + 0xe4);
  }
  else if (iVar4 == 1) {
    iVar4 = *(int *)(param_2 + 0xe8);
  }
  else if (iVar4 == 2) {
    iVar4 = *(int *)(param_2 + 0xec);
  }
  else {
    if (iVar4 != 3) goto LAB_00413636;
    iVar4 = *(int *)(param_2 + 0xf0);
  }
  iVar2 = iVar2 + iVar4;
LAB_00413636:
  iVar2 = *(int *)(param_1 + 0xa0) - iVar2;
  if (iVar2 < 0) {
    fVar6 = (float10)1.4426950408889634 * (float10)iVar2 * (float10)_DAT_004bef48;
    fVar5 = ROUND(fVar6);
    fVar6 = (float10)f2xm1(fVar6 - fVar5);
    fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
    fVar5 = fVar5 * (float10)_DAT_004bd578;
  }
  else if (iVar2 == 0) {
    fVar5 = (float10)_DAT_004bd578;
  }
  else {
    fVar6 = (float10)1.4426950408889634 * (float10)iVar2 * (float10)_DAT_004bef40;
    fVar5 = ROUND(fVar6);
    fVar6 = (float10)f2xm1(fVar6 - fVar5);
    fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
    fVar5 = -(fVar5 * (float10)_DAT_004bd578) + (float10)_DAT_004bef38;
  }
  iVar4 = *(int *)(param_1 + 0xbc);
  fVar6 = (float10)_DAT_004bef30;
  iVar2 = _rand();
  dVar1 = (double)(iVar2 % 1000) * _DAT_004bef28;
  if (dVar1 < (double)((float10)iVar4 * fVar6 * fVar5)) {
    return 999999;
  }
  if (dVar1 < (double)fVar5) {
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar2 = *(int *)(param_1 + 0xb4);
    iVar3 = _rand();
    return iVar3 % ((iVar4 - iVar2) + 1) + *(int *)(param_1 + 0xb4);
  }
  return 0;
}

