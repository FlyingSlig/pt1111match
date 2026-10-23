// FUNCTION: PORT1111 0x00445db0
// name: FUN_00445db0
// sig: undefined4 * FUN_00445db0(void * this, int param_1, undefined4 param_2, int param_3)


undefined4 * __thiscall FUN_00445db0(void *this,int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,param_2,0,0x18,0xffffffff,0xffffffff,0xffffffff,0);
  *(undefined ***)this = &PTR_FUN_004c38b0;
  local_4 = 0;
  if (*(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x50) == 2) {
    if (param_3 != 2) {
      FUN_0047d670(*(void **)((int)this + 0x24),0,(uchar *)"mouro_vitoria.png",
                   *(int *)(DAT_004e2b14 + 100));
      if (DAT_004e2800 == (void *)0x0) {
        ExceptionList = local_c;
        return this;
      }
      FUN_0044d3a0(DAT_004e2800,2);
      ExceptionList = local_c;
      return this;
    }
    if (DAT_004e2800 != (void *)0x0) {
      FUN_0044d3a0(DAT_004e2800,1);
    }
    iVar2 = *(int *)(DAT_004e2b14 + 100);
    pcVar1 = "mouro_derrota.png";
  }
  else if (param_3 == 2) {
    if (DAT_004e2800 != (void *)0x0) {
      FUN_0044d3a0(DAT_004e2800,1);
    }
    iVar2 = *(int *)(DAT_004e2b14 + 100);
    pcVar1 = "cristao_vitoria.png";
  }
  else {
    if (DAT_004e2800 != (void *)0x0) {
      FUN_0044d3a0(DAT_004e2800,2);
    }
    iVar2 = *(int *)(DAT_004e2b14 + 100);
    pcVar1 = "cristao_derrota.png";
  }
  FUN_0047d670(*(void **)((int)this + 0x24),0,(uchar *)pcVar1,iVar2);
  ExceptionList = local_c;
  return this;
}

