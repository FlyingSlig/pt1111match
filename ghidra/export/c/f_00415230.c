// FUNCTION: PORT1111 0x00415230
// name: FUN_00415230
// sig: undefined FUN_00415230(void * this, int param_1)


void __thiscall FUN_00415230(void *this,int param_1)

{
  int *this_00;
  int *piVar1;
  int iVar2;
  void *local_4;
  
  iVar2 = DAT_004e240c;
  local_4 = this;
  FUN_00413aa0((void *)(DAT_004e240c + 4),&local_4,&param_1);
  if ((local_4 != *(void **)(iVar2 + 8)) &&
     (this_00 = *(int **)((int)local_4 + 0x10), this_00 != (int *)0x0)) {
    FUN_00405d00(this_00,1);
    (**(code **)(*this_00 + 0x88))();
    iVar2 = DAT_004e240c;
    if ((this_00[0xf] & 0x100U) != 0) {
      param_1 = this_00[0x48];
      FUN_00413aa0((void *)(DAT_004e240c + 4),&local_4,&param_1);
      if ((local_4 != *(void **)(iVar2 + 8)) && (*(void **)((int)local_4 + 0x10) != (void *)0x0)) {
        FUN_00409a10(*(void **)((int)local_4 + 0x10),-1);
      }
    }
    piVar1 = *(int **)((int)this + 0x40);
    if (this_00 == piVar1) {
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(piVar1[0x18] + 0x30) = 0;
      }
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    (**(code **)(*this_00 + 0x50))();
    (**(code **)(*this_00 + 0x80))();
    (**(code **)*this_00)(1);
  }
  return;
}

