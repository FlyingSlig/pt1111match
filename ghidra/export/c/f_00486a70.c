// FUNCTION: PORT1111 0x00486a70
// name: FUN_00486a70
// sig: HRESULT FUN_00486a70(void * this, LPCSTR param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00486cad) */
/* WARNING: Removing unreachable block (ram,0x00486b79) */
/* WARNING: Removing unreachable block (ram,0x00486c2d) */
/* WARNING: Removing unreachable block (ram,0x00486cbf) */

HRESULT __thiscall FUN_00486a70(void *this,LPCSTR param_1)

{
  LPVOID *ppv;
  LPVOID *ppv_00;
  int iVar1;
  int *piVar2;
  HRESULT HVar3;
  void *pvVar4;
  undefined4 *puVar5;
  LPCSTR lpOutputString;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_21c;
  WCHAR aWStack_218 [260];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba88b;
  pvStack_c = ExceptionList;
  ppv = (LPVOID *)((int)this + 0x20);
  local_10 = DAT_004ddb0c;
  ExceptionList = &pvStack_c;
  HVar3 = CoCreateInstance((IID *)&DAT_004c4c60,(LPUNKNOWN)0x0,1,(IID *)&DAT_004c4c70,ppv);
  if (((-1 < HVar3) && (HVar3 = (**(code **)(*(int *)*ppv + 0x30))(*ppv,0,1,0), -1 < HVar3)) &&
     (HVar3 = (**(code **)(*(int *)*ppv + 0x3c))(*ppv,0,&DAT_004c83e4,0,0), -1 < HVar3)) {
    MultiByteToWideChar(0,0,param_1,-1,aWStack_218,0x104);
    HVar3 = (**(code **)(*(int *)*ppv + 0x40))();
    if (-1 < HVar3) {
      (**(code **)(*(int *)*ppv + 0x24))(*ppv,(uint *)((int)this + 0x18));
      HVar3 = (**(code **)(*(int *)*ppv + 0x10))(*ppv,&DAT_004c83e4);
      if ((-1 < HVar3) && (HVar3 = (*(code *)*puRam00000000)(), -1 < HVar3)) {
        pvVar4 = operator_new(0x12);
        *(void **)((int)this + 8) = pvVar4;
        HVar3 = (*(code *)puRam00000000[9])(0,pvVar4);
        if (-1 < HVar3) {
          iVar1 = *(int *)((int)this + 8);
          lVar6 = __allmul(*(uint *)(iVar1 + 4),0,*(uint *)((int)this + 0x18),
                           *(int *)((int)this + 0x1c));
          uVar7 = __alldiv((uint)lVar6,(uint)((ulonglong)lVar6 >> 0x20),10000000,0);
          *(int *)((int)this + 0x2c) = (int)uVar7;
          ppv_00 = (LPVOID *)((int)this + 0x28);
          *(uint *)((int)this + 0xc) = (uint)*(ushort *)(iVar1 + 0xc) * (int)uVar7;
          HVar3 = CoCreateInstance((IID *)&DAT_004c83d4,(LPUNKNOWN)0x0,1,(IID *)&DAT_004c4c40,ppv_00
                                  );
          if (((-1 < HVar3) &&
              (HVar3 = (**(code **)(*(int *)*ppv_00 + 0x1c))(*ppv_00,*(undefined4 *)((int)this + 8))
              , -1 < HVar3)) &&
             ((HVar3 = (*(code *)puRam00000000[0xb])(0,*ppv_00,0,(int)this + 0x24), -1 < HVar3 &&
              (HVar3 = (**(code **)(*(int *)*ppv + 0x1c))(*ppv,1), -1 < HVar3)))) {
            ExceptionList = pvStack_c;
            return HVar3;
          }
        }
      }
    }
  }
  pvVar4 = (void *)FUN_00465cf0(&local_21c);
  uStack_4 = 0;
  puVar5 = FUN_00466970(pvVar4,(byte *)" OpenFail %d\n");
  lpOutputString = (LPCSTR)FUN_00465e00(puVar5);
  OutputDebugStringA(lpOutputString);
  uStack_4 = 0xffffffff;
  FUN_00465e40(&local_21c);
  if (*(void **)((int)this + 8) == (void *)0x0) {
    piVar2 = *ppv;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c))(piVar2,0);
    }
    piVar2 = *ppv;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *ppv = (LPVOID)0x0;
    }
    FUN_004869b0((int)this);
    ExceptionList = pvStack_c;
    return HVar3;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 8));
}

