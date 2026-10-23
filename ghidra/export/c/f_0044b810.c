// FUNCTION: PORT1111 0x0044b810
// name: FUN_0044b810
// sig: int FUN_0044b810(void * this, LPVOID * param_1)


int __thiscall FUN_0044b810(void *this,LPVOID *param_1)

{
  HRESULT HVar1;
  int iVar2;
  
  HVar1 = CoCreateInstance((IID *)&DAT_004c4cb0,(LPUNKNOWN)0x0,3,(IID *)&DAT_004c4c30,param_1);
  if ((-1 < HVar1) && (*param_1 != (LPVOID)0x0)) {
    iVar2 = (**(code **)(**(int **)((int)this + 4) + 0xc))
                      (*(int **)((int)this + 4),*param_1,L"Overlay Mixer");
    if (-1 < iVar2) {
      iVar2 = FUN_0044b300(*param_1);
      if (iVar2 < 0) {
        (**(code **)(**(int **)((int)this + 4) + 0x10))(*(int **)((int)this + 4),*param_1);
        (**(code **)(*(int *)*param_1 + 8))(*param_1);
        *param_1 = (LPVOID)0x0;
        return iVar2;
      }
      return 0;
    }
    (**(code **)(*(int *)*param_1 + 8))(*param_1);
    *param_1 = (LPVOID)0x0;
  }
  return -0x7fffbffb;
}

