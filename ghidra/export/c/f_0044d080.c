// FUNCTION: PORT1111 0x0044d080
// name: FUN_0044d080
// sig: undefined FUN_0044d080(void * this, char * param_1, char * param_2)


void __thiscall FUN_0044d080(void *this,char *param_1,char *param_2)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *this_00;
  int *piVar5;
  int unaff_EBX;
  undefined4 uStack_1c;
  int local_18;
  undefined4 local_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8a73;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00468110(DAT_004e2b14,&local_14,"data\\som\\");
  local_4 = 0;
  thunk_FUN_00466040(&local_14,param_1);
  pCVar1 = (LPCSTR)FUN_00465e00(&local_14);
  iVar2 = FUN_0044bd90((void *)((int)this + 0x10),&local_18,pCVar1);
  if (-1 < iVar2) {
    (**(code **)(**(int **)(local_18 + 4) + 0x40))(*(int **)(local_18 + 4),&DAT_004c4b90);
    uVar3 = FUN_00465e00(&uStack_1c);
    uVar4 = FUN_0044c0f0(uVar3);
    (**(code **)(**(int **)(unaff_EBX + 4) + 0x10))
              (*(int **)(unaff_EBX + 4),(uVar4 * 0x16800) / 0x3c);
    param_1 = param_2;
    FUN_00413aa0(this,&iStack_10,(int *)&param_1);
    if ((iStack_10 == *(int *)((int)this + 4)) || (*(void **)(iStack_10 + 0x10) == (void *)0x0)) {
      this_00 = operator_new(0x10);
      if (this_00 == (void *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)this_00 + 4) = 0;
        *(undefined4 *)((int)this_00 + 8) = 0;
        *(undefined4 *)((int)this_00 + 0xc) = 0;
      }
      local_4 = local_4 & 0xffffff00;
      FUN_0044cf50(this_00,&local_18);
      piVar5 = FUN_0044ced0(this,(int *)&param_2);
      *piVar5 = (int)this_00;
    }
    else {
      FUN_0044cf50(*(void **)(iStack_10 + 0x10),&local_18);
    }
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_14);
  ExceptionList = pvStack_c;
  return;
}

