// FUNCTION: PORT1111 0x0047b000
// name: FUN_0047b000
// sig: undefined4 FUN_0047b000(void * this, int * param_1, int * param_2, int param_3, int param_4)


undefined4 __thiscall FUN_0047b000(void *this,int *param_1,int *param_2,int param_3,int param_4)

{
  void *_Memory;
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x14) = 0;
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_0048fb90(this,param_1,param_2,param_4,(undefined4 *)((int)this + 0x18));
  _Memory = *(void **)((int)this + 4);
  if (_Memory != (void *)0x0) {
    if (1 < (uint)(*(int *)((int)this + 8) - (int)_Memory >> 3)) {
      uVar1 = FUN_0047ae00(this,param_3,*param_1,param_1[1]);
      return uVar1;
    }
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}

