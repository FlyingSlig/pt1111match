// FUNCTION: PORT1111 0x00448db0
// name: FUN_00448db0
// sig: undefined FUN_00448db0(void * this, uint param_1, undefined4 param_2)


void __thiscall FUN_00448db0(void *this,uint param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0x1b) {
    FUN_0047ca30(*(void **)((int)this + 0x24),0x36,
                 (uint)*(ushort *)((int)*(void **)((int)this + 0x24) + 0x1c),0,0,0);
  }
  iVar1 = FUN_00467160();
  if (iVar1 == 0) {
    FUN_00417900(DAT_004e240c,param_1,param_2);
  }
  return;
}

