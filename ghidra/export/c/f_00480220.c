// FUNCTION: PORT1111 0x00480220
// name: FUN_00480220
// sig: undefined4 * FUN_00480220(void * this, undefined4 param_1, undefined4 param_2, ushort param_3, undefined4 param_4)


undefined4 * __thiscall
FUN_00480220(void *this,undefined4 param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR_FUN_004c6788;
  *(undefined4 *)((int)this + 0x1c) = param_4;
  *(undefined4 *)((int)this + 4) = param_2;
  uVar1 = FUN_00468ef0(DAT_004e2b14,param_3);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return this;
}

