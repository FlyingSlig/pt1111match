// FUNCTION: PORT1111 0x00480aa0
// name: FUN_00480aa0
// sig: undefined4 * FUN_00480aa0(void * this, int param_1, undefined4 param_2, undefined4 param_3, ushort param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)


undefined4 * __thiscall
FUN_00480aa0(void *this,int param_1,undefined4 param_2,undefined4 param_3,ushort param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_00480220(this,param_1,0,param_4,0);
  *(undefined4 *)((int)this + 0x48) = param_2;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x28) = param_7;
  *(undefined ***)this = &PTR_FUN_004c6830;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x2c) = param_5;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(void **)(*(int *)(param_1 + 0x34) + 0x10) = this;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = param_8;
  return this;
}

