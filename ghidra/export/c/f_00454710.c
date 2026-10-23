// FUNCTION: PORT1111 0x00454710
// name: FUN_00454710
// sig: undefined FUN_00454710(void * this, int param_1)


void __thiscall FUN_00454710(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *_Memory;
  
  FUN_00453950((int)this);
  piVar1 = *(int **)((int)this + param_1 * 0x1c + 4);
  _Memory = (int *)*piVar1;
  if (_Memory != piVar1) {
    do {
      piVar1 = (int *)FUN_00414c30(DAT_004e240c);
      if (((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0xa4))(), iVar2 == 0)) ||
         (((*(byte *)(piVar1 + 0xf) & 4) != 0 && (piVar1[0x3c] != 0)))) {
        piVar1 = (int *)*_Memory;
        if (_Memory != *(int **)((int)this + param_1 * 0x1c + 4)) {
          *(int **)_Memory[1] = piVar1;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      else {
        FUN_00453f50(this,piVar1);
        piVar1 = (int *)*_Memory;
      }
      _Memory = piVar1;
    } while (piVar1 != *(int **)((int)this + param_1 * 0x1c + 4));
  }
  FUN_00453b90((int)this);
  return;
}

