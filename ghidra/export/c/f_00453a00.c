// FUNCTION: PORT1111 0x00453a00
// name: FUN_00453a00
// sig: undefined FUN_00453a00(void * this, int * param_1)


void __thiscall FUN_00453a00(void *this,int *param_1)

{
  int *piVar1;
  int *_Memory;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 4);
  _Memory = (int *)*piVar1;
  if (_Memory != piVar1) {
    do {
      if (_Memory[2] == param_1[4]) {
        if (_Memory != piVar1) {
          *(int *)_Memory[1] = *_Memory;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        (**(code **)(*param_1 + 0xa0))(0);
        param_1[0x1e] = 0;
        break;
      }
      _Memory = (int *)*_Memory;
    } while (_Memory != *(int **)((int)this + 4));
  }
  if (*(int *)((int)this + 8) == 0) {
    *(undefined4 *)((int)this + 0xc) = 3;
  }
  *(undefined4 *)((int)this + 0x14) = 1;
  if (*(int *)((int)this + 0x10) != 0) {
    iVar2 = FUN_0040af10(DAT_004e2418);
    if (iVar2 != 0) {
      FUN_0040abe0(iVar2);
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  FUN_00455c40(DAT_004e2410);
  FUN_004134a0(DAT_004e240c);
  return;
}

