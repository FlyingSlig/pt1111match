// FUNCTION: PORT1111 0x00466160
// name: FUN_00466160
// sig: int * FUN_00466160(void * this, uchar * param_1, size_t param_2)


int * __thiscall FUN_00466160(void *this,uchar *param_1,size_t param_2)

{
  uchar uVar1;
  undefined *_Memory;
  uchar *puVar2;
  uchar *puVar3;
  
  if ((param_1 == (uchar *)0x0) || (param_1 == PTR_DAT_004dd95c)) {
    _Memory = *(undefined **)this;
    if ((_Memory != (undefined *)0x0) && (_Memory != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined **)this = PTR_DAT_004dd95c;
    return this;
  }
  if ((int)param_2 < 1) {
    puVar3 = param_1;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (uVar1 != '\0');
    param_2 = (int)puVar3 - (int)(param_1 + 1);
  }
  puVar3 = *(uchar **)this;
  if ((puVar3 != (uchar *)0x0) && (puVar3 != PTR_DAT_004dd95c)) {
    puVar2 = puVar3;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (uVar1 != '\0');
    if ((int)param_2 <= (int)puVar2 - (int)(puVar3 + 1)) {
      __mbsnbcpy(puVar3,param_1,param_2);
      *(undefined1 *)(param_2 + *(int *)this) = 0;
      return this;
    }
    if (puVar3 != PTR_DAT_004dd95c) {
                    /* WARNING: Subroutine does not return */
      _free(puVar3);
    }
  }
  *(undefined **)this = PTR_DAT_004dd95c;
  if (param_2 == 0) {
    return this;
  }
  puVar3 = _malloc(param_2 + 1);
  *(uchar **)this = puVar3;
  __mbsnbcpy(puVar3,param_1,param_2);
  *(undefined1 *)(param_2 + *(int *)this) = 0;
  return this;
}

