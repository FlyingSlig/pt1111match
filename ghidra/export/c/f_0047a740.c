// FUNCTION: PORT1111 0x0047a740
// name: FUN_0047a740
// sig: undefined4 FUN_0047a740(void * this, int param_1)


undefined4 __thiscall FUN_0047a740(void *this,int param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  undefined4 *_Memory;
  int *piVar2;
  short sVar3;
  
  if ((*(byte *)((int)this + 0x2c) & 2) != 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x14);
  _Memory = *(undefined4 **)(*(int *)(iVar1 + 4) + param_1 * 4);
  _Dst = (void *)(*(int *)(iVar1 + 4) + param_1 * 4);
  _Src = (void *)((int)_Dst + 4);
  _memmove(_Dst,_Src,(*(int *)(iVar1 + 8) - (int)_Src >> 2) << 2);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -4;
  if (_Memory != (undefined4 *)0x0) {
    FUN_0047bab0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  piVar2 = *(int **)(*(int *)((int)this + 0x14) + 4);
  sVar3 = 0;
  if (piVar2 != *(int **)(*(int *)((int)this + 0x14) + 8)) {
    do {
      *(short *)(*piVar2 + 4) = sVar3;
      piVar2 = piVar2 + 1;
      sVar3 = sVar3 + 1;
    } while (piVar2 != *(int **)(*(int *)((int)this + 0x14) + 8));
  }
  return 1;
}

