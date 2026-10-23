// FUNCTION: PORT1111 0x0041af12
// name: FUN_0041af12
// sig: undefined4 FUN_0041af12(void * this, undefined4 param_1, undefined4 param_2, void * param_3)


uint __thiscall FUN_0041af12(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  uint uVar2;
  uchar *puVar3;
  void *pvVar4;
  void *unaff_EBX;
  bool in_ZF;
  void *in_stack_0000001c;
  int iVar5;
  
  if (!in_ZF) {
    FUN_00465cf0(&param_2);
    uVar1 = FUN_00439390((int)in_stack_0000001c,&param_2);
    if ((char)uVar1 == '\0') {
      uVar2 = FUN_00465e40(&param_2);
      ExceptionList = param_3;
      return uVar2 & 0xffffff00;
    }
    iVar5 = DAT_004e0b10;
    puVar3 = (uchar *)FUN_00465e00(&param_2);
    in_stack_0000001c = (void *)FUN_0044e9d0(&DAT_004e279c,puVar3,iVar5);
    if (in_stack_0000001c == unaff_EBX) {
      uVar2 = FUN_00465e40(&param_2);
      ExceptionList = param_3;
      return uVar2 & 0xffffff00;
    }
    if (*(void **)((int)this + DAT_004e0b10 * 4 + 0x234) == unaff_EBX) {
      pvVar4 = operator_new(0x10);
      if (pvVar4 == unaff_EBX) {
        pvVar4 = (void *)0x0;
      }
      else {
        *(void **)((int)pvVar4 + 4) = unaff_EBX;
        *(void **)((int)pvVar4 + 8) = unaff_EBX;
        *(void **)((int)pvVar4 + 0xc) = unaff_EBX;
      }
      *(void **)((int)this + DAT_004e0b10 * 4 + 0x234) = pvVar4;
    }
    FUN_0041a7b0(*(void **)((int)this + DAT_004e0b10 * 4 + 0x234),&stack0x0000001c);
    in_EAX = FUN_00465e40(&param_2);
  }
  ExceptionList = param_3;
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

