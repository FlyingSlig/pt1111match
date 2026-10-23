// FUNCTION: PORT1111 0x00470510
// name: FUN_00470510
// sig: undefined FUN_00470510(void * this, LPRECT param_1)


void __thiscall FUN_00470510(void *this,LPRECT param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  HDC hdc;
  HGDIOBJ pvVar2;
  LPCSTR pCVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  LONG *pLVar5;
  undefined1 local_20 [4];
  int iStack_1c;
  int iStack_18;
  LONG aLStack_14 [5];
  
  bVar1 = FUN_00466ab0((undefined4 *)((int)this + 0x94),"");
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(*(int *)this + 0x30))(local_20);
    iStack_1c = iStack_1c + 1000;
    iStack_18 = iStack_18 + 1000;
    hdc = GetDC((HWND)0x0);
    pvVar2 = (HGDIOBJ)FUN_0048b0d0((LOGFONTA *)((int)this + 0xac));
    pvVar2 = SelectObject(hdc,pvVar2);
    pLVar5 = (LONG *)&stack0xffffffdc;
    pCVar3 = (LPCSTR)FUN_00465e00((undefined4 *)((int)this + 0x94));
    puVar4 = (undefined4 *)FUN_0048a3a0(aLStack_14,hdc,pCVar3,pLVar5);
    *unaff_retaddr = *puVar4;
    unaff_retaddr[1] = puVar4[1];
    unaff_retaddr[2] = puVar4[2];
    unaff_retaddr[3] = puVar4[3];
    SelectObject(hdc,pvVar2);
    ReleaseDC((HWND)0x0,hdc);
    return;
  }
  SetRect(param_1,0,0,0,0);
  return;
}

