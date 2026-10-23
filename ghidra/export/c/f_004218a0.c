// FUNCTION: PORT1111 0x004218a0
// name: FUN_004218a0
// sig: undefined FUN_004218a0(void * this, int param_1, int param_2)


void __thiscall FUN_004218a0(void *this,int param_1,int param_2)

{
  void *this_00;
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int *piVar7;
  RECT local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  DWORD local_4;
  
  FUN_00403d40(&local_24.left,DAT_004e26c8,DAT_004e26cc,DAT_004e26d0,DAT_004e26d4);
  pt.y = param_2;
  pt.x = param_1;
  BVar1 = PtInRect(&local_24,pt);
  if (BVar1 == 0) {
    DVar2 = GetTickCount();
    piVar6 = (int *)**(int **)((int)this + 0xc);
    if (piVar6 != *(int **)((int)this + 0xc)) {
      do {
        if (DVar2 - piVar6[6] < 0x3a99) {
          pt_00.y = param_2;
          pt_00.x = param_1;
          BVar1 = PtInRect((RECT *)(piVar6 + 2),pt_00);
          if (BVar1 != 0) {
            return;
          }
          piVar7 = (int *)*piVar6;
        }
        else {
          piVar7 = (int *)*piVar6;
          if (piVar6 != *(int **)((int)this + 0xc)) {
            *(int **)piVar6[1] = piVar7;
            *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
            _free(piVar6);
          }
        }
        piVar6 = piVar7;
      } while (piVar7 != *(int **)((int)this + 0xc));
    }
    iVar3 = 0;
    piVar6 = (int *)((int)this + 0x1c);
    while ((*(byte *)(*piVar6 + 0x2c) & 1) != 0) {
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
      if (9 < iVar3) {
        return;
      }
    }
    this_00 = *(void **)((int)this + iVar3 * 4 + 0x1c);
    if (this_00 != (void *)0x0) {
      bVar5 = (byte)*(undefined4 *)((int)this + 0x48);
      FUN_00478700(this_00,(param_1 >> (bVar5 & 0x1f)) + *(int *)((int)this + 0x68) +
                           *(int *)((int)this + 0x4c),
                   (param_2 >> (bVar5 & 0x1f)) + *(int *)((int)this + 0x6c) +
                   *(int *)((int)this + 0x54));
      FUN_00478920(this_00);
      local_24.bottom = DAT_004e26d4;
      local_24.right = DAT_004e26d0;
      local_24.left = DAT_004e26c8;
      local_24.top = DAT_004e26cc;
      OffsetRect(&local_24,param_1 - (DAT_004e26d0 - DAT_004e26c8 >> 1),
                 param_2 - (DAT_004e26d4 - DAT_004e26cc >> 1));
      iVar3 = *(int *)((int)this + 0xc);
      local_14 = local_24.left;
      local_c = local_24.right;
      local_8 = local_24.bottom;
      local_10 = local_24.top;
      local_4 = DVar2;
      iVar4 = FUN_00421560(iVar3,*(undefined4 *)(iVar3 + 4),&local_14);
      FUN_00421800((void *)((int)this + 8),1);
      *(int *)(iVar3 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      FUN_0044d910(&DAT_004e279c,"alert.wav");
    }
  }
  return;
}

