// FUNCTION: PORT1111 0x00458250
// name: FUN_00458250
// sig: undefined4 FUN_00458250(void * this, void * param_1)


undefined4 __thiscall FUN_00458250(void *this,void *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char *_Delim;
  uchar *puVar3;
  undefined3 extraout_var;
  char *pcVar4;
  
  puVar1 = (undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 0x10) == 0) {
    _Delim = (char *)FUN_00465e00(puVar1);
    pcVar4 = *(char **)((int)this + 0xc);
  }
  else {
    _Delim = (char *)FUN_00465e00(puVar1);
    pcVar4 = (char *)0x0;
  }
  puVar3 = (uchar *)_strtok(pcVar4,_Delim);
  if (puVar3 != (uchar *)0x0) {
    *(undefined4 *)((int)this + 0x10) = 1;
    FUN_00466a40(param_1,puVar3);
    return 1;
  }
  while( true ) {
    bVar2 = FUN_004887d0(*(void **)this,(undefined4 *)((int)this + 4));
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return 0;
    }
    if (*(void **)((int)this + 0xc) != (void *)0x0) break;
    pcVar4 = (char *)FUN_00465e00((undefined4 *)((int)this + 4));
    pcVar4 = __strdup(pcVar4);
    *(char **)((int)this + 0xc) = pcVar4;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    pcVar4 = (char *)FUN_00465e00(puVar1);
    puVar3 = (uchar *)_strtok(*(char **)((int)this + 0xc),pcVar4);
    if (puVar3 != (uchar *)0x0) {
      *(undefined4 *)((int)this + 0x10) = 1;
      FUN_00466a40(param_1,puVar3);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0xc));
}

