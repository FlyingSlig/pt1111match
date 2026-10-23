// FUNCTION: PORT1111 0x00466100
// name: FUN_00466100
// sig: undefined FUN_00466100(void * this, int param_1)


void __thiscall FUN_00466100(void *this,int param_1)

{
  char cVar1;
  char *_Memory;
  char *pcVar2;
  undefined1 *puVar3;
  
  _Memory = *(char **)this;
  pcVar2 = _Memory;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != _Memory + 1) {
    if ((_Memory != (char *)0x0) && (_Memory != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined **)this = PTR_DAT_004dd95c;
  }
  puVar3 = _malloc(param_1 + 1);
  *(undefined1 **)this = puVar3;
  *puVar3 = 0;
  return;
}

