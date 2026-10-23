// FUNCTION: PORT1111 0x00417900
// name: FUN_00417900
// sig: undefined4 FUN_00417900(void * this, uint param_1, undefined4 param_2)


undefined4 __thiscall FUN_00417900(void *this,uint param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  SHORT SVar3;
  SHORT SVar4;
  int iVar5;
  void *this_00;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b64c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_00454850((void *)((int)this + 0x104),param_1);
  if (iVar5 == 0) {
    switch(param_1) {
    case 0x1b:
      if (*(int **)((int)this + 0x74) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x74) + 8))();
        if (*(int **)((int)this + 0x74) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x74) + 0x30))(1);
        }
        *(undefined4 *)((int)this + 0x74) = 0;
      }
      break;
    default:
      SVar4 = GetKeyState(0x11);
      if (SVar4 < 0) {
        if (param_1 == 0x41) {
          DAT_004e086c = (uint)(DAT_004e086c == 0);
        }
        else {
          if (param_1 != 0x52) {
            ExceptionList = local_c;
            return 0;
          }
          FUN_00415ec0((int)this);
        }
      }
      else {
        if (param_1 != 0x52) {
          ExceptionList = local_c;
          return 0;
        }
        iVar5 = FUN_00453b70(*(int *)((int)this + 0x21c));
        if ((iVar5 == 0) || (*(int *)(iVar5 + 200) == -1)) {
          iVar5 = *(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x34);
        }
        else {
          this_00 = (void *)FUN_0043dc80((void *)(*(int *)(iVar5 + 0x50) + 0x270),
                                         *(int *)(iVar5 + 200));
          if (this_00 != (void *)0x0) {
            FUN_00465cf0(&param_2);
            local_4 = 0;
            FUN_004443f0(this_00,&param_2);
            FUN_00454bb0((int)DAT_004e2414);
            FUN_004079e0(DAT_004e2414,&param_2,
                         *(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x34));
            local_4 = 0xffffffff;
            FUN_00465e40(&param_2);
            ExceptionList = local_c;
            return 1;
          }
          iVar5 = *(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x34);
        }
        FUN_00454c50(DAT_004e2414,(uchar *)"Nenhuma regra.",iVar5);
      }
      break;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      uVar1 = GetAsyncKeyState(0x26);
      SVar4 = GetAsyncKeyState(0x28);
      uVar2 = GetAsyncKeyState(0x25);
      SVar3 = GetAsyncKeyState(0x27);
      iVar5 = 0;
      iVar6 = 0;
      if ((uVar1 & 0x8000) == 0) {
        if (SVar4 < 0) {
          iVar6 = -0x20;
        }
      }
      else {
        iVar6 = 0x20;
      }
      if ((uVar2 & 0x8000) == 0) {
        if (SVar3 < 0) {
          iVar5 = -0x20;
        }
      }
      else {
        iVar5 = 0x20;
      }
      FUN_0043a320(iVar5,iVar6);
      FUN_00413300();
      break;
    case 0x2e:
      FUN_004177c0(this);
      break;
    case 0x53:
      FUN_00413a00((int)this);
    }
  }
  ExceptionList = local_c;
  return 1;
}

