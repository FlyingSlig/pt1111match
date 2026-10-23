// FUNCTION: PORT1111 0x00496470
// name: FUN_00496470
// sig: undefined4 FUN_00496470(void * this, LPCSTR param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_00496470(void *this,LPCSTR param_1)

{
  uint *puVar1;
  LPVOID *ppv;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  HRESULT HVar5;
  int iVar6;
  undefined3 extraout_var;
  int *unaff_EBX;
  longlong lVar7;
  undefined8 uVar8;
  int *local_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  WCHAR aWStack_20c [260];
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  FUN_004963d0((int)this);
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  local_234 = (int *)0x0;
  HVar5 = CoCreateInstance((IID *)&DAT_004c4c60,(LPUNKNOWN)0x0,1,(IID *)&DAT_004c4c70,&local_234);
  *(HRESULT *)((int)this + 0x14) = HVar5;
  if (-1 < HVar5) {
    iVar6 = (**(code **)(*local_234 + 0x30))(local_234,0,1,0);
    *(int *)((int)this + 0x14) = iVar6;
    if (-1 < iVar6) {
      iVar6 = (**(code **)(*local_234 + 0x3c))(local_234,0,&DAT_004c83e4,0,0);
      *(int *)((int)this + 0x14) = iVar6;
      if (-1 < iVar6) {
        MultiByteToWideChar(0,0,param_1,-1,aWStack_20c,0x104);
        iVar6 = (**(code **)(*local_234 + 0x40))();
        *(int *)((int)this + 0x14) = iVar6;
        if (-1 < iVar6) {
          puVar1 = (uint *)((int)this + 0x20);
          (**(code **)(*local_234 + 0x24))(local_234,puVar1);
          *(int **)((int)this + 0x2c) = unaff_EBX;
          iVar6 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,&DAT_004c83e4);
          *(int *)((int)this + 0x14) = iVar6;
          if (-1 < iVar6) {
            iVar6 = (**(code **)**(undefined4 **)((int)this + 0x30))();
            *(int *)((int)this + 0x14) = iVar6;
            if (-1 < iVar6) {
              iVar6 = (**(code **)(**(int **)((int)this + 0x38) + 0x24))
                                (*(int **)((int)this + 0x38),(int)this + 0x4c);
              *(int *)((int)this + 0x14) = iVar6;
              if (-1 < iVar6) {
                uVar2 = *(uint *)((int)this + 0x24);
                uVar3 = *puVar1;
                lVar7 = __allmul(*(uint *)((int)this + 0x50),0,uVar3,uVar2);
                uVar8 = __alldiv((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),10000000,0);
                *(int *)((int)this + 0x10) = (int)uVar8;
                uVar8 = __alldiv(uVar3,uVar2,10000,0);
                uStack_224 = 0;
                *puVar1 = (uint)uVar8;
                iStack_228 = (uint)*(ushort *)((int)this + 0x58) * *(int *)((int)this + 0x10);
                uStack_21c = 0;
                uStack_218 = 0;
                uStack_214 = 0;
                uStack_210 = 0;
                *(int *)((int)this + 0x18) = iStack_228;
                *(int *)((int)this + 0x1c) = iStack_228;
                *(int *)((int)this + 0x24) = (int)((ulonglong)uVar8 >> 0x20);
                uStack_230 = 0x24;
                uStack_22c = 2;
                iStack_220 = (int)this + 0x4c;
                iVar6 = (**(code **)(**(int **)((int)this + 0xc) + 0xc))
                                  (*(int **)((int)this + 0xc),&uStack_230,(int)this + 0x48,0);
                *(int *)((int)this + 0x14) = iVar6;
                if (-1 < iVar6) {
                  ppv = (LPVOID *)((int)this + 0x3c);
                  HVar5 = CoCreateInstance((IID *)&DAT_004c83d4,(LPUNKNOWN)0x0,1,
                                           (IID *)&DAT_004c4c40,ppv);
                  *(HRESULT *)((int)this + 0x14) = HVar5;
                  if (-1 < HVar5) {
                    iVar6 = (**(code **)(*(int *)*ppv + 0x1c))(*ppv,(int)this + 0x4c);
                    *(int *)((int)this + 0x14) = iVar6;
                    if (-1 < iVar6) {
                      iVar6 = (**(code **)(**(int **)((int)this + 0x38) + 0x2c))
                                        (*(int **)((int)this + 0x38),*ppv,0,(int)this + 0x34);
                      *(int *)((int)this + 0x14) = iVar6;
                      if (-1 < iVar6) {
                        (**(code **)(**(int **)((int)this + 0x2c) + 0x1c))
                                  (*(int **)((int)this + 0x2c),1);
                        bVar4 = FUN_00496220((int)this);
                        if (CONCAT31(extraout_var,bVar4) != 0) {
                          (**(code **)(**(int **)((int)this + 0x2c) + 0x1c))
                                    (*(int **)((int)this + 0x2c),0);
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_004963d0((int)this);
  return 0;
}

