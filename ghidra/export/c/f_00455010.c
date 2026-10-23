// FUNCTION: PORT1111 0x00455010
// name: FUN_00455010
// sig: undefined4 FUN_00455010(void * this, POINT * param_1)


undefined4 __thiscall FUN_00455010(void *this,POINT *param_1)

{
  BOOL BVar1;
  int *piVar2;
  uchar *puVar3;
  
  puVar3 = (uchar *)0x0;
  BVar1 = PtInRect((RECT *)((int)this + 4),*param_1);
  if (BVar1 != 0) {
    piVar2 = FUN_0047cf30(*(void **)((int)this + 0x8a0),&param_1->x,1);
    if ((piVar2 != (int *)0x0) && (piVar2[0x16] != 0)) {
      puVar3 = (uchar *)FUN_00465e00(piVar2 + 0x14);
      FUN_004737d0(*(void **)((int)this + 0x14),puVar3);
      return 0;
    }
    puVar3 = (uchar *)FUN_004526a0((void *)((int)this + 0x18),&param_1->x);
  }
  FUN_004737d0(*(void **)((int)this + 0x14),puVar3);
  return 0;
}

