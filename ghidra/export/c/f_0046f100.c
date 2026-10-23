// FUNCTION: PORT1111 0x0046f100
// name: FUN_0046f100
// sig: undefined4 FUN_0046f100(void * this, int param_1)


undefined4 __thiscall FUN_0046f100(void *this,int param_1)

{
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  if (*(HCURSOR *)((int)this + 0x4c) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)((int)this + 0x4c));
  }
  FUN_0046ec00((int)this);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)((int)this + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  FUN_00466a50((void *)((int)this + 0x24),(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  FUN_00466a50((void *)((int)this + 0x50),(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  return 1;
}

