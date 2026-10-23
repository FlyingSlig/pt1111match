// FUNCTION: PORT1111 0x00445030
// name: FUN_00445030
// sig: undefined FUN_00445030(void * this, int param_1)


void __thiscall FUN_00445030(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  
  bVar1 = FUN_0043dc50(*(int *)(*(int *)((int)this + 0x18) + 0x50) + 0x270);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return;
  }
  iVar3 = 2000;
  switch(param_1) {
  case 0x3ed:
    iVar3 = *(int *)((int)this + 0x18);
    iVar2 = FUN_00407d00(iVar3);
    if (iVar2 == 0) {
      iVar3 = 0x7d8;
    }
    else {
      iVar3 = 0x7d7 - (uint)(*(int *)(iVar3 + 0xec) != 0);
    }
    break;
  case 0x3ef:
    iVar3 = *(int *)((int)this + 0x18);
    if (*(int *)(iVar3 + 0xdc) + *(int *)(iVar3 + 0xd8) + *(int *)(iVar3 + 0xd4) == 0) {
      iVar3 = 0x7d3;
      break;
    }
    iVar2 = FUN_00407d00(iVar3);
    if (iVar2 == 0) {
      iVar3 = 0x7d8;
      break;
    }
    iVar3 = *(int *)(iVar3 + 0xdc) + *(int *)(iVar3 + 0xd8) + *(int *)(iVar3 + 0xd4);
    goto LAB_004450f2;
  case 0x3f1:
    iVar3 = *(int *)(*(int *)((int)this + 0x18) + 0x124);
    if (iVar3 == 0) {
      iVar3 = 0x7d3;
    }
    else if (iVar3 < 2) {
      iVar3 = 0x7d4;
    }
    else {
      iVar3 = (iVar3 == 2) + 0x7d5;
    }
    break;
  case 0x3f6:
    iVar3 = *(int *)(*(int *)((int)this + 0x18) + 0xdc);
    if (iVar3 == 0) {
      iVar3 = 0x7d3;
      break;
    }
LAB_004450f2:
    iVar3 = (uint)(99 < iVar3) * 2 + 0x7d4;
    break;
  case 0x3f9:
    iVar3 = 0x7d1;
    break;
  case 0x410:
    iVar3 = (*(int *)(*(int *)((int)this + 0x18) + 0x104) != 0) + 0x7d1;
    if (iVar3 != 0x7d1) break;
    iVar2 = 0x411;
    goto LAB_0044522a;
  case 0x411:
    iVar3 = (*(int *)(*(int *)((int)this + 0x18) + 0x104) != 1) + 0x7d1;
    if (iVar3 != 0x7d1) break;
    iVar2 = 0x410;
LAB_0044522a:
    FUN_00444c80(this,iVar2,0x7d2);
    iVar2 = 0x412;
LAB_004452ae:
    FUN_00444c80(this,iVar2,0x7d2);
    iVar2 = 0x413;
LAB_0044530d:
    FUN_00444c80(this,iVar2,0x7d2);
    break;
  case 0x412:
    iVar3 = (*(int *)(*(int *)((int)this + 0x18) + 0x104) != 2) + 0x7d1;
    if (iVar3 != 0x7d1) break;
    FUN_00444c80(this,0x410,0x7d2);
    iVar2 = 0x411;
    goto LAB_004452ae;
  case 0x413:
    iVar3 = (*(int *)(*(int *)((int)this + 0x18) + 0x104) != 3) + 0x7d1;
    if (iVar3 != 0x7d1) break;
    FUN_00444c80(this,0x410,0x7d2);
    FUN_00444c80(this,0x411,0x7d2);
    iVar2 = 0x412;
    goto LAB_0044530d;
  case 0x449:
    iVar3 = *(int *)(*(int *)((int)this + 0x18) + 0x50);
    iVar2 = FUN_00412720(*(int *)((int)this + 0x18));
    iVar3 = 100 - (iVar2 * 100) / *(int *)(iVar3 + 0xa8);
    if (iVar3 < 1) {
      iVar3 = 0x7d3;
    }
    else if (iVar3 < 0x22) {
      iVar3 = 0x7d4;
    }
    else {
      iVar3 = (iVar3 < 0x42) + 0x7d5;
    }
    break;
  case 0x44a:
    iVar3 = *(int *)(*(int *)((int)this + 0x18) + 0x50);
    iVar2 = FUN_00412730(*(int *)((int)this + 0x18));
    iVar3 = (iVar2 * 100) / *(int *)(iVar3 + 0x22c);
    if (iVar3 < 1) {
      iVar3 = 0x7d3;
    }
    else if (iVar3 < 0x22) {
      iVar3 = 0x7d4;
    }
    else {
      iVar3 = (iVar3 < 0x42) + 0x7d5;
    }
  }
  iVar3 = FUN_00444c80(this,param_1,iVar3);
  if (iVar3 != 0) {
    FUN_004137d0(*(int *)((int)this + 0x18));
  }
  return;
}

