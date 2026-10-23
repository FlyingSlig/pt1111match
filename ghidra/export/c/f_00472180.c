// FUNCTION: PORT1111 0x00472180
// name: FUN_00472180
// sig: undefined FUN_00472180(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)


void __thiscall
FUN_00472180(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  CRect::NormalizeRect((CRect *)&local_10);
  *(undefined4 *)((int)this + 0xc) = local_8;
  *(undefined4 *)((int)this + 0x10) = local_4;
  *(int *)((int)this + 4) = local_10;
  *(int *)((int)this + 8) = local_c;
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    FUN_004786d0(*(void **)((int)this + 0x40),local_10,local_c);
  }
  iVar3 = *(int *)((int)this + 0x94);
  if (iVar3 != 0) {
    sVar1 = *(short *)((int)this + 0x10);
    sVar2 = *(short *)((int)this + 8);
    *(short *)(*(int *)(iVar3 + 0xc) + 8) = *(short *)((int)this + 0xc) - *(short *)((int)this + 4);
    *(short *)(*(int *)(iVar3 + 0xc) + 10) = sVar1 - sVar2;
  }
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    FUN_00478740(*(void **)((int)this + 0x40));
  }
  return;
}

