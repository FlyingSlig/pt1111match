// FUNCTION: PORT1111 0x00465bf0
// name: FUN_00465bf0
// sig: HCURSOR FUN_00465bf0(void * this, HINSTANCE param_1, ushort param_2)


HCURSOR __thiscall FUN_00465bf0(void *this,HINSTANCE param_1,ushort param_2)

{
  HCURSOR pHVar1;
  uint *puVar2;
  
  pHVar1 = LoadCursorA(param_1,(LPCSTR)(uint)param_2);
  if (pHVar1 == (HCURSOR)0x0) {
    return (HCURSOR)0x0;
  }
  puVar2 = FUN_00465b70((void *)((int)this + 0xc),(uint *)&stack0x0000000c);
  *puVar2 = (uint)pHVar1;
  return pHVar1;
}

