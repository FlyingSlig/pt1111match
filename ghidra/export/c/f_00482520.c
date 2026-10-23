// FUNCTION: PORT1111 0x00482520
// name: FUN_00482520
// sig: undefined4 * FUN_00482520(void * this, int * param_1)


undefined4 * __thiscall FUN_00482520(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  LPCSTR lpString1;
  LPCSTR lpString2;
  int iVar5;
  uchar *_Str1;
  uchar *_Str2;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)local_4 + 0x11);
  puVar4 = *(undefined4 **)((int)this + 4);
  do {
    if (cVar1 != '\0') {
      return puVar4;
    }
    iVar2 = local_4[3];
    iVar3 = *param_1;
    iVar5 = *(int *)(*(int *)(iVar2 + 0x18) + 0x2a4);
    if (iVar5 == 0) {
LAB_00482599:
      bVar7 = *(uint *)(iVar2 + 0x24) < *(uint *)(iVar3 + 0x24);
    }
    else {
      if (iVar5 == 1) {
        _Str1 = (uchar *)FUN_00465e00((undefined4 *)(iVar2 + 8));
        _Str2 = (uchar *)FUN_00465e00((undefined4 *)(iVar3 + 8));
        iVar5 = __mbsicmp(_Str1,_Str2);
      }
      else {
        if (iVar5 != 2) goto LAB_00482599;
        lpString1 = (LPCSTR)FUN_00465e00((undefined4 *)(iVar2 + 8));
        lpString2 = (LPCSTR)FUN_00465e00((undefined4 *)(iVar3 + 8));
        iVar5 = lstrcmpiA(lpString1,lpString2);
      }
      bVar7 = iVar5 < 0;
      if (iVar5 == 0) goto LAB_00482599;
    }
    if (bVar7) {
      puVar6 = (undefined4 *)local_4[2];
      local_4 = puVar4;
    }
    else {
      puVar6 = (undefined4 *)*local_4;
    }
    cVar1 = *(char *)((int)puVar6 + 0x11);
    puVar4 = local_4;
    local_4 = puVar6;
  } while( true );
}

