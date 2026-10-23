// FUNCTION: PORT1111 0x004771d0
// name: FUN_004771d0
// sig: undefined4 FUN_004771d0(void * this, uchar * param_1, void * param_2)


undefined4 __thiscall FUN_004771d0(void *this,uchar *param_1,void *param_2)

{
  bool bVar1;
  char cVar2;
  int *this_00;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uchar *puVar6;
  char *pcVar7;
  void *pvVar8;
  undefined4 *puVar9;
  LPCSTR lpOutputString;
  char *pcVar10;
  int extraout_ECX;
  size_t sVar11;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  DWORD local_38;
  undefined4 auStack_34 [3];
  undefined1 auStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba131;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_38 = GetTickCount();
  (**(code **)(*(int *)this + 0x20))();
  puVar6 = param_1;
  if ((param_2 == (void *)0x0) ||
     (this_00 = (int *)FUN_00486530(param_2,param_1), this_00 == (int *)0x0)) {
    param_2 = (void *)0x0;
    param_1 = operator_new(0x10);
    uStack_4 = 0;
    if (param_1 == (uchar *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = FUN_004884d0((undefined4 *)param_1);
    }
    uStack_4 = 0xffffffff;
    bVar1 = FUN_004884f0(this_00,puVar6,0x80000000,1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      if (this_00 == (int *)0x0) {
        ExceptionList = pvStack_c;
        return 0;
      }
      (**(code **)*this_00)(1);
      ExceptionList = pvStack_10;
      return 0;
    }
  }
  FUN_0048a050(auStack_34,this_00,1);
  uStack_4 = 1;
  FUN_0048a110(auStack_34,&DAT_004e2c54);
  cVar2 = (char)((uint)DAT_004e2c54 >> 8);
  if (((cVar2 != -0x60) && (cVar2 != -0x50)) &&
     (FUN_0046ab50("Invalid GAF version!",0), param_2 == (void *)0x0)) {
    (**(code **)(*this_00 + 4))();
    (**(code **)*this_00)(1);
LAB_004775b5:
    uStack_4 = 0xffffffff;
    FUN_0048a0c0(auStack_34);
    ExceptionList = pvStack_c;
    return 0;
  }
  if (0xa008 < DAT_004e2c54) {
    FUN_0048a150(auStack_34,(int)this + 0x38);
  }
  FUN_0048a110(auStack_34,&iStack_44);
  if (*(code **)((int)this + 4) != (code *)0x0) {
    (**(code **)((int)this + 4))(iStack_44);
  }
  param_1 = (uchar *)0x0;
  if (0 < iStack_44) {
    do {
      puStack_3c = operator_new(0x78);
      uStack_4._0_1_ = 2;
      if (puStack_3c == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_0047f360(puStack_3c);
      }
      uStack_4._0_1_ = 1;
      iVar4 = (**(code **)(*piVar3 + 4))(auStack_34);
      if (iVar4 == 0) {
        if (*(code **)((int)this + 8) != (code *)0x0) {
          (**(code **)((int)this + 8))(0xffffffff);
        }
        (**(code **)*piVar3)(1);
        goto LAB_004775b5;
      }
      puStack_3c = (undefined4 *)piVar3[0xd];
      piVar5 = FUN_00476600(*(void **)((int)this + 0xc),(int *)&puStack_3c);
      sVar11 = 0xffffffff;
      *piVar5 = (int)piVar3;
      puVar6 = (uchar *)FUN_00465e00(piVar3 + 0xc);
      FUN_00466af0(&uStack_48,puVar6,sVar11);
      uStack_4._0_1_ = 3;
      FUN_00465e70(&uStack_48,'\\');
      pcVar7 = (char *)FUN_00465e00(&uStack_48);
      pvStack_10 = (void *)0xf;
      uStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
      pcVar10 = pcVar7;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004016b0(auStack_28,(undefined4 *)pcVar7,(int)pcVar10 - (int)(pcVar7 + 1));
      uStack_4._0_1_ = 4;
      piVar5 = FUN_00476d90(*(void **)((int)this + 0x10),auStack_28);
      *piVar5 = (int)piVar3;
      uStack_4._0_1_ = 3;
      if (0xf < pvStack_10) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_24);
      }
      pvStack_10 = (void *)0xf;
      uStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
      if (*(code **)((int)this + 8) != (code *)0x0) {
        (**(code **)((int)this + 8))(param_1);
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_00465e40(&uStack_48);
      param_1 = param_1 + 1;
    } while ((int)param_1 < iStack_44);
  }
  FUN_0048a110(auStack_34,&iStack_40);
  param_1 = (uchar *)0x0;
  if (0 < iStack_40) {
    do {
      puStack_3c = operator_new(0x30);
      uStack_4._0_1_ = 5;
      if (puStack_3c == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_00477720(puStack_3c);
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      iVar4 = (**(code **)(*piVar3 + 4))(auStack_34);
      if (iVar4 == 0) {
        (**(code **)*piVar3)(1);
        goto LAB_004775b5;
      }
      puStack_3c = (undefined4 *)piVar3[1];
      piVar3[4] = (int)this;
      piVar5 = FUN_00476600(*(void **)((int)this + 0x14),(int *)&puStack_3c);
      *piVar5 = (int)piVar3;
      if (0xa00f < DAT_004e2c54) {
        FUN_00477930((int)piVar3);
      }
      param_1 = param_1 + 1;
    } while ((int)param_1 < iStack_40);
  }
  if (param_2 == (void *)0x0) {
    (**(code **)(*this_00 + 4))();
    (**(code **)*this_00)(1);
  }
  FUN_004751b0((int)this);
  FUN_00475130(extraout_ECX);
  pvVar8 = (void *)FUN_00465cf0(&param_1);
  uStack_4._0_1_ = 6;
  GetTickCount();
  puVar9 = FUN_00466970(pvVar8,(byte *)"* AF load time: %d\n");
  lpOutputString = (LPCSTR)FUN_00465e00(puVar9);
  OutputDebugStringA(lpOutputString);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  FUN_00465e40(&param_1);
  uStack_4 = 0xffffffff;
  FUN_0048a0c0(auStack_34);
  ExceptionList = pvStack_c;
  return 1;
}

