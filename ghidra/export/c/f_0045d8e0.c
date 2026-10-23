// FUNCTION: PORT1111 0x0045d8e0
// name: FUN_0045d8e0
// sig: undefined FUN_0045d8e0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined4 param_7)


void __thiscall
FUN_0045d8e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(DAT_004e26f0 + param_5 * 4);
  *(undefined4 *)((int)this + 0x18) = param_6;
  *(undefined4 *)((int)this + 0x1c) = param_7;
  return;
}

