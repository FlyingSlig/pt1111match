// FUNCTION: PORT1111 0x004565e0
// name: FUN_004565e0
// sig: undefined4 FUN_004565e0(void * this, uint param_1, short param_2)


undefined4 __thiscall FUN_004565e0(void *this,uint param_1,short param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (param_2 == *(short *)(*(int *)((int)this + 0x8a0) + 0x1c)) {
    uVar1 = (ushort)param_1;
    if ((uVar1 < 0xb) || (0x1c < uVar1)) {
      if (uVar1 != 3) goto LAB_0045661a;
    }
    else {
      FUN_00455d20(this,(param_1 & 0xffff) - 0xb);
    }
    return 1;
  }
LAB_0045661a:
  uVar2 = FUN_004526e0((void *)((int)this + 0x18),param_1,param_2);
  return uVar2;
}

