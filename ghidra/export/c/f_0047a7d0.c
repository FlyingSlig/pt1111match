// FUNCTION: PORT1111 0x0047a7d0
// name: FUN_0047a7d0
// sig: undefined4 FUN_0047a7d0(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_0047a7d0(void *this,int param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *_Src;
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 *_Dst;
  
  iVar3 = *(int *)((int)this + 0x14);
  _Dst = *(undefined4 **)(iVar3 + 4);
  _Src = _Dst;
  if (_Dst != *(undefined4 **)(iVar3 + 8)) {
    do {
      _Src = _Src + 1;
      _Memory = (undefined4 *)*_Dst;
      if (*(int *)(_Memory[3] + 4) == param_1) {
        if (((*(byte *)((int)this + 0x2c) & 2) == 0) && (param_2 == 0)) {
          _memmove(_Dst,_Src,(*(int *)(iVar3 + 8) - (int)_Src >> 2) << 2);
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -4;
          FUN_0047bab0(_Memory);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        return 0;
      }
      _Dst = _Dst + 1;
      iVar3 = *(int *)((int)this + 0x14);
    } while (_Dst != *(undefined4 **)(iVar3 + 8));
  }
  piVar1 = *(int **)(*(int *)((int)this + 0x14) + 4);
  sVar2 = 0;
  if (piVar1 != *(int **)(*(int *)((int)this + 0x14) + 8)) {
    do {
      *(short *)(*piVar1 + 4) = sVar2;
      piVar1 = piVar1 + 1;
      sVar2 = sVar2 + 1;
    } while (piVar1 != *(int **)(*(int *)((int)this + 0x14) + 8));
  }
  return 1;
}

