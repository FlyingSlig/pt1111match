// FUNCTION: PORT1111 0x00425a30
// name: FUN_00425a30
// sig: undefined FUN_00425a30(void * this, uint param_1)


void __thiscall FUN_00425a30(void *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00439210(param_1,(undefined1 *)&param_1);
  if ((char)uVar1 != '\0') {
    *(uint *)((int)this + 0x3c) = param_1 & 0xff;
  }
  return;
}

