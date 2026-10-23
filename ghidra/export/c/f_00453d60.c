// FUNCTION: PORT1111 0x00453d60
// name: FUN_00453d60
// sig: bool FUN_00453d60(int param_1, uint param_2, int param_3, void * param_4, int param_5, uint param_6)


bool __cdecl
FUN_00453d60(int param_1,uint param_2,int param_3,void *param_4,int param_5,uint param_6)

{
  POINT pt;
  void *this;
  char cVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  RECT local_20;
  tagRECT local_10;
  
  this = param_4;
  iVar5 = param_3;
  iVar8 = param_1 + (*(short *)(param_3 + 0x40) - param_5);
  iVar7 = param_2 + ((int)*(short *)(param_3 + 0x42) - param_6);
  if (param_4 != (void *)0x0) {
    iVar2 = FUN_00453c80(param_4,&local_20.left);
    if (iVar2 == 0) {
      FUN_004520b0(this,&param_6,&param_2);
      iVar2 = *(int *)(iVar5 + 0x24);
      param_5 = *(int *)(iVar5 + 0x28);
      param_1 = iVar2;
      if (iVar2 == 0) {
        param_1 = FUN_0047e810(iVar5);
      }
      iVar4 = param_5;
      if (param_5 == 0) {
        iVar4 = FUN_0047e870(iVar5);
      }
      if (iVar8 < 0) {
        return false;
      }
      if (iVar7 < 0) {
        return false;
      }
      if (param_1 <= iVar8) {
        return false;
      }
      if (iVar4 <= iVar7) {
        return false;
      }
      iVar8 = iVar8 + iVar2 * param_6;
      iVar7 = iVar7 + param_5 * param_2;
    }
    else {
      SetRect(&local_10,(int)*(short *)((int)this + 6),(int)*(short *)((int)this + 8),
              (int)*(short *)(*(int *)((int)this + 0xc) + 8) + (int)*(short *)((int)this + 6),
              (int)*(short *)(*(int *)((int)this + 0xc) + 10) + (int)*(short *)((int)this + 8));
      iVar8 = iVar8 + (local_20.left - local_10.left);
      iVar7 = iVar7 + (local_20.top - local_10.top);
      pt.y = iVar7;
      pt.x = iVar8;
      BVar3 = PtInRect(&local_20,pt);
      if (BVar3 == 0) {
        return false;
      }
    }
  }
  piVar6 = *(int **)(iVar5 + 4);
  if ((piVar6[1] == 2) || (piVar6 = *(int **)(iVar5 + 8), piVar6 != (int *)0x0)) {
    iVar5 = (**(code **)(*piVar6 + 0x50))(&param_3,iVar8,iVar7,0);
    if (iVar5 != 0) goto LAB_00453e9b;
  }
  else {
    cVar1 = (**(code **)(**(int **)(iVar5 + 4) + 0xc))();
    if (cVar1 == ' ') {
LAB_00453e9b:
      return local_10.bottom != 0;
    }
    iVar7 = (**(code **)(**(int **)(iVar5 + 4) + 0x50))(&local_10.bottom,iVar8,iVar7,0);
    if (iVar7 != 0) {
      return local_20.bottom != *(int *)(*(int *)(iVar5 + 4) + 0x1c);
    }
  }
  return false;
}

