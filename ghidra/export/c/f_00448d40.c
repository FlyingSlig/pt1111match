// FUNCTION: PORT1111 0x00448d40
// name: FUN_00448d40
// sig: undefined FUN_00448d40(undefined4 param_1, POINT * param_2)


void FUN_00448d40(undefined4 param_1,POINT *param_2)

{
  BOOL BVar1;
  int local_8 [2];
  
  BVar1 = PtInRect((RECT *)&DAT_004e26d8,*param_2);
  if (BVar1 != 0) {
    FUN_00421200((void *)(DAT_004e2404 + 0x94),local_8,&param_2->x);
  }
  FUN_004110a0();
  return;
}

