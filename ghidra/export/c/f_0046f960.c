// FUNCTION: PORT1111 0x0046f960
// name: FUN_0046f960
// sig: undefined4 FUN_0046f960(void * this, int param_1)


undefined4 __thiscall FUN_0046f960(void *this,int param_1)

{
  int iVar1;
  
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  if (*(HCURSOR *)((int)this + 0x4c) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)((int)this + 0x4c));
  }
  FUN_0046ec00((int)this);
  iVar1 = FUN_0046f100(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00466a50((void *)((int)this + 0xa4),(undefined4 *)(param_1 + 0xa4));
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  FUN_00466a50((void *)((int)this + 0x94),(undefined4 *)(param_1 + 0x94));
  return 1;
}

