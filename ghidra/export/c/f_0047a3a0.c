// FUNCTION: PORT1111 0x0047a3a0
// name: FUN_0047a3a0
// sig: undefined FUN_0047a3a0(void * this, int param_1, undefined4 param_2)


void __thiscall FUN_0047a3a0(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  if ((*(byte *)((int)this + 0x2c) & 0x20) == 0) {
    return;
  }
  iVar2 = *(int *)((int)this + 0x14);
  if (*(int *)(iVar2 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 8) - iVar4 >> 2;
  }
  if (iVar5 <= iVar4) {
    sVar3 = *(short *)(param_1 + 0x2e);
    *(short *)((int)this + 0x2e) = sVar3;
    if (*(int *)(iVar2 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2;
    }
    if (iVar5 <= sVar3) {
      if (*(int *)(iVar2 + 4) == 0) {
        sVar3 = 0;
      }
      else {
        sVar3 = (short)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2);
      }
      *(short *)((int)this + 0x2e) = sVar3 + -1;
    }
  }
  puVar1 = *(undefined4 **)(*(int *)(iVar2 + 4) + *(short *)((int)this + 0x2e) * 4);
  if (*(short *)(param_1 + 0x2e) == -1) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 4) + *(short *)(param_1 + 0x2e) * 4);
  }
  SetRect(&local_10,(int)*(short *)((int)puVar1 + 6),(int)*(short *)(puVar1 + 2),
          (int)*(short *)(puVar1[3] + 8) + (int)*(short *)((int)puVar1 + 6),
          (int)*(short *)(puVar1[3] + 10) + (int)*(short *)(puVar1 + 2));
  if (((*(byte *)((int)this + 0x28) & 0x20) == 0) ||
     (iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x20))(this,puVar1,&local_14,&local_18),
     iVar2 == 0)) {
    SetRect((LPRECT)((int)this + 0x18),*(int *)((int)this + 4),*(int *)((int)this + 8),
            (*(int *)((int)this + 4) - local_10.left) + local_10.right,
            (*(int *)((int)this + 8) - local_10.top) + local_10.bottom);
    iVar2 = (*(int *)(param_1 + 0x18) - (int)**(short **)(local_1c + 0xc)) +
            (int)*(short *)puVar1[3];
    iVar5 = ((int)((short *)puVar1[3])[1] - (int)(*(short **)(local_1c + 0xc))[1]) +
            *(int *)(param_1 + 0x1c);
  }
  else {
    SetRect((LPRECT)((int)this + 0x18),local_14,local_18,(local_10.right - local_10.left) + local_14
            ,(local_10.bottom - local_10.top) + local_18);
    iVar2 = DAT_004e2c30;
    iVar5 = DAT_004e2c34;
    if ((*(byte *)((int)this + 0x2c) & 0x40) == 0) goto LAB_0047a52f;
  }
  OffsetRect((LPRECT)((int)this + 0x18),iVar2,iVar5);
LAB_0047a52f:
  (**(code **)*puVar1)
            (*(undefined4 *)(*(int *)(*(int *)((int)this + 0xc) + 0x10) + 0x1c),
             *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),param_2);
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) | 0x10;
  return;
}

