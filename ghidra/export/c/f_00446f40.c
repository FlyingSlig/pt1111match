// FUNCTION: PORT1111 0x00446f40
// name: FUN_00446f40
// sig: undefined4 * FUN_00446f40(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00446f40(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  FUN_00451f00((undefined4 *)((int)this + 4));
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x84) = DVar1;
  *(undefined4 *)this = param_1;
  return this;
}

