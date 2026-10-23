// FUNCTION: PORT1111 0x00486300
// name: FUN_00486300
// sig: undefined4 FUN_00486300(void * this, LPCSTR param_1, LPCSTR param_2, HMODULE param_3)


undefined4 __thiscall FUN_00486300(void *this,LPCSTR param_1,LPCSTR param_2,HMODULE param_3)

{
  int *piVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  void *pvVar3;
  DWORD DVar4;
  void *unaff_EDI;
  int *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba81b;
  pvStack_c = ExceptionList;
  this_00 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)((int)this + 4))(1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  hResInfo = FindResourceA(param_3,param_1,param_2);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(param_3,hResInfo);
    pvVar2 = LockResource(hResData);
    if (pvVar2 != (LPVOID)0x0) {
      pvVar3 = operator_new(0x28);
      uStack_4 = 0;
      if (pvVar3 != (void *)0x0) {
        this_00 = FUN_0047bfa0(pvVar3,0x400);
      }
      uStack_4 = 0xffffffff;
      DVar4 = SizeofResource(param_3,hResInfo);
      FUN_0047c190(this_00,pvVar2,DVar4);
      *(int **)((int)this + 4) = this_00;
      piVar1 = (int *)((int)this + 0xc);
      (**(code **)(*this_00 + 8))(piVar1,4);
      pvVar3 = operator_new(*piVar1 * 0x22);
      *(void **)((int)this + 8) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        (**(code **)(**(int **)((int)this + 4) + 8))((char *)((int)this + 0x10),1);
        (**(code **)(**(int **)((int)this + 4) + 8))
                  (*(undefined4 *)((int)this + 8),(int)*(char *)((int)this + 0x10) * *piVar1);
        ExceptionList = unaff_EDI;
        return 1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

