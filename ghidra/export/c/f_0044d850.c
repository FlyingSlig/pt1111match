// FUNCTION: PORT1111 0x0044d850
// name: FUN_0044d850
// sig: undefined4 FUN_0044d850(void * this, char * param_1)


undefined4 __thiscall FUN_0044d850(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8ae8;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004016b0(local_28,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_0044d7e0(this,&param_1,local_28);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  if (param_1 == *(char **)((int)this + 4)) {
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x28);
}

