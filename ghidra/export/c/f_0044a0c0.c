// FUNCTION: PORT1111 0x0044a0c0
// name: FUN_0044a0c0
// sig: undefined FUN_0044a0c0(void)


void FUN_0044a0c0(void)

{
  void *this;
  int iVar1;
  int *piVar2;
  int yBottom;
  
  this = (void *)FUN_00468ef0(DAT_004e2b14,1);
  if (this == (void *)0x0) {
    return;
  }
  iVar1 = FUN_0047cf90(this,0x38);
  if (iVar1 == 0) {
    return;
  }
  *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) | 2;
  piVar2 = (int *)FUN_0047cf90(this,3);
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar2 + 0x30))(&DAT_004e26d8);
  iVar1 = *(int *)((int)DAT_004e2b14 + 0xf4);
  if (iVar1 == 0) {
    yBottom = 0x1e0;
    iVar1 = 0x280;
  }
  else if (iVar1 == 1) {
    yBottom = 600;
    iVar1 = 800;
  }
  else {
    if (iVar1 != 2) goto LAB_0044a154;
    yBottom = 0x300;
    iVar1 = 0x400;
  }
  SetRect((LPRECT)&DAT_004e26c8,0,0,iVar1,yBottom);
LAB_0044a154:
  FUN_00480d10(0x17,1);
  FUN_00480d10(0xf,1);
  FUN_00480d10(0x11,1);
  FUN_00480d10(0x15,1);
  FUN_00480d10(9,1);
  FUN_00480d10(0x13,1);
  FUN_00480d10(0x14,1);
  FUN_00480d10(0x18,1);
  FUN_00480d10(0x12,1);
  FUN_00480d10(0xb,1);
  FUN_00480d10(0xc,1);
  FUN_00480d10(0xd,1);
  FUN_00480d10(0x16,1);
  return;
}

