// FUNCTION: PORT1111 0x0047aeb0
// name: FUN_0047aeb0
// sig: undefined4 FUN_0047aeb0(void * this, int param_1, int * param_2, int * param_3, int * param_4, int * param_5, int param_6)


undefined4 __thiscall
FUN_0047aeb0(void *this,int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  uint *puVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = *(int *)(*(int *)((int)this + 0x10) + 0x14);
  iVar4 = *(int *)(iVar2 + 4);
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 8) - iVar4 >> 2;
  }
  _Memory = *(void **)((int)this + 4);
  uVar3 = (iVar2 * *(int *)(*(int *)((int)this + 0x10) + 0x4c) + (uint)*(ushort *)(param_1 + 4)) -
          *(int *)((int)this + 0x14);
  *(uint *)((int)this + 0x1c) = uVar3;
  if (_Memory != (void *)0x0) {
    if ((uVar3 < (uint)(*(int *)((int)this + 8) - (int)_Memory >> 3)) && (param_6 != 0))
    goto LAB_0047af69;
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (uint *)(*(int *)((int)this + 0x10) + 0x28);
  *puVar1 = *puVar1 & 0xffffffef;
  iVar2 = FUN_00478ab0(*(int *)((int)this + 0x10));
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  iVar4 = *(int *)(*(int *)(iVar2 + 0x14) + 4);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar2 + 0x14) + 8) - iVar4 >> 2;
  }
  *(int *)((int)this + 0x1c) =
       ((int)*(short *)(iVar2 + 0x2e) + iVar4 * *(int *)(iVar2 + 0x4c)) - *(int *)((int)this + 0x14)
  ;
LAB_0047af69:
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)((int)this + 0x18) == 0) {
    piVar5 = (int *)(iVar2 + *(int *)((int)this + 0x1c) * 8);
  }
  else if (iVar2 == 0) {
    piVar5 = (int *)((*(int *)((int)this + 0x1c) + 1) * -8);
  }
  else {
    piVar5 = (int *)(iVar2 + ((*(int *)((int)this + 0x1c) + 1) * 0x1fffffff +
                             (*(int *)((int)this + 8) - iVar2 >> 3)) * 8);
  }
  iVar2 = *piVar5;
  iVar4 = piVar5[1];
  *param_4 = iVar2;
  *param_5 = iVar4;
  *param_2 = iVar2 - *(short *)(*(int *)((int)this + 0x10) + 0x30);
  *param_3 = iVar4 - *(short *)(*(int *)((int)this + 0x10) + 0x32);
  *param_2 = *param_2 + (int)**(short **)(param_1 + 0xc);
  *param_3 = *param_3 + (int)*(short *)(*(int *)(param_1 + 0xc) + 2);
  return 1;
}

