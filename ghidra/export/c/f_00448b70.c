// FUNCTION: PORT1111 0x00448b70
// name: FUN_00448b70
// sig: undefined FUN_00448b70(uint param_1, POINT * param_2)


void FUN_00448b70(uint param_1,POINT *param_2)

{
  BOOL BVar1;
  LONG *pLVar2;
  int iVar3;
  LONG local_10;
  LONG local_c;
  int local_8 [2];
  
  if ((param_1 & 1) == 0) {
    BVar1 = PtInRect((RECT *)&DAT_004e26d8,*param_2);
    if (BVar1 == 0) {
      local_10 = param_2->x;
      local_c = param_2->y;
    }
    else {
      pLVar2 = (LONG *)FUN_00421200((void *)(DAT_004e2404 + 0x94),local_8,&param_2->x);
      local_10 = *pLVar2;
      local_c = pLVar2[1];
    }
    iVar3 = FUN_00467160();
    if (iVar3 == 0) {
      FUN_00416770(DAT_004e240c,&local_10,param_1,0);
    }
  }
  return;
}

