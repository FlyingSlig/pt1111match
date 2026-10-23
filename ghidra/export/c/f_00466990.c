// FUNCTION: PORT1111 0x00466990
// name: FUN_00466990
// sig: undefined4 FUN_00466990(void * this, int * param_1)


undefined4 __thiscall FUN_00466990(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uchar *_Memory;
  int unaff_EBX;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  param_1 = (int *)0x0;
  iVar2 = (**(code **)(iVar2 + 8))(&param_1,4);
  if (iVar2 != 0) {
    _Memory = _malloc(unaff_EBX + 1);
    if (unaff_EBX == 0) {
      FUN_00465e40(this);
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 8))(_Memory,unaff_EBX);
      if (iVar2 == unaff_EBX) {
        _Memory[unaff_EBX] = '\0';
        FUN_00466160(this,_Memory,0xffffffff);
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return 0;
}

