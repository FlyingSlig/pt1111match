// FUNCTION: PORT1111 0x0046f0a0
// name: FUN_0046f0a0
// sig: undefined4 FUN_0046f0a0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)


undefined4 __thiscall
FUN_0046f0a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  if (*(HCURSOR *)((int)this + 0x4c) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)((int)this + 0x4c));
  }
  FUN_0046ec00((int)this);
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x48) = param_1;
  *(undefined2 *)((int)this + 0x2c) = 0;
  return 1;
}

