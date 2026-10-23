// FUNCTION: PORT1111 0x0044bcc0
// name: FUN_0044bcc0
// sig: HRESULT FUN_0044bcc0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)


HRESULT __thiscall
FUN_0044bcc0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HRESULT HVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = param_4 != 0;
  HVar1 = CoCreateInstance((IID *)&DAT_004c4ba0,(LPUNKNOWN)0x0,3,(IID *)&DAT_004c4b70,
                           (LPVOID *)((int)this + 4));
  if (-1 < HVar1) {
    HVar1 = CoCreateInstance((IID *)&DAT_004c4bc0,(LPUNKNOWN)0x0,3,(IID *)&DAT_004c4b60,
                             (LPVOID *)((int)this + 8));
    if (-1 < HVar1) {
      piVar2 = *(LPVOID *)((int)this + 8);
      HVar1 = (**(code **)(*piVar2 + 0xb0))
                        (piVar2,0,-(uint)bVar4 & (uint)&param_4,param_1,param_3,param_2,0x3f,0);
      if (HVar1 < 0) {
        if (HVar1 == -0x7787ff88) {
          return -0x7787ff88;
        }
      }
      else {
        piVar2 = FUN_0044baf0((int)this);
        if (piVar2 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar2 + 0xc))
                            (piVar2,0,0x8000,0,&DAT_004c5e2c,0,&DAT_004c4bd0,
                             (undefined4 *)((int)this + 0xc));
          if (-1 < iVar3) {
            piVar2 = *(int **)((int)this + 0xc);
            *(undefined4 *)((int)this + 0x10) = 0x40;
            (**(code **)(*piVar2 + 0xc))(piVar2,(undefined4 *)((int)this + 0x10));
          }
        }
        HVar1 = 0;
      }
    }
  }
  return HVar1;
}

