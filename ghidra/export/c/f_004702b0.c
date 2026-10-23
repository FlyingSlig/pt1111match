// FUNCTION: PORT1111 0x004702b0
// name: FUN_004702b0
// sig: undefined4 FUN_004702b0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)


undefined4 __thiscall
FUN_004702b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  if (*(HCURSOR *)((int)this + 0x4c) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)((int)this + 0x4c));
  }
  FUN_0046ec00((int)this);
  iVar1 = FUN_0046f0a0(this,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x28) = 2;
  *(undefined4 *)((int)this + 0x20) = 0x10;
  return 1;
}

