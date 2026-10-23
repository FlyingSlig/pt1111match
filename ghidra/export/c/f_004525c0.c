// FUNCTION: PORT1111 0x004525c0
// name: FUN_004525c0
// sig: undefined4 FUN_004525c0(void * this, void * param_1)


undefined4 __thiscall FUN_004525c0(void *this,void *param_1)

{
  int iVar1;
  void *this_00;
  
  *(void **)((int)this + 4) = param_1;
  FUN_0047d610(param_1,(int)this + 0x85c,0x30);
  iVar1 = FUN_00452150((int *)((int)this + 0x38));
  if (iVar1 != 0) {
    iVar1 = FUN_00452210((int)this + 0xb0);
    if (iVar1 != 0) {
      iVar1 = FUN_00452360((undefined4 *)((int)this + 0x79c));
      if (iVar1 != 0) {
        this_00 = (void *)((int)this + 8);
        iVar1 = FUN_00487c80(this_00,*(int *)(*(int *)((int)this + 4) + 0x34),0x30);
        if (iVar1 != 0) {
          FUN_00487ef0(this_00,2);
          FUN_00487ef0(this_00,3);
          FUN_00487ef0(this_00,4);
          return 1;
        }
      }
    }
  }
  return 0;
}

