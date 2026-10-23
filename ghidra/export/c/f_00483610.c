// FUNCTION: PORT1111 0x00483610
// name: FUN_00483610
// sig: undefined FUN_00483610(void * this, undefined4 * param_1, int * param_2)


void __thiscall FUN_00483610(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  LPCSTR lpString1;
  LPCSTR lpString2;
  int iVar5;
  uchar *_Str1;
  uchar *_Str2;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 *local_c;
  undefined4 local_8;
  void *local_4;
  
  puVar6 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar6 + 0x11);
  bVar7 = true;
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar4 = *(undefined4 **)((int)this + 4);
  local_4 = this;
  while (cVar1 == '\0') {
    iVar2 = *param_2;
    iVar5 = *(int *)(*(int *)(iVar2 + 0x18) + 0x2a4);
    iVar3 = puVar6[3];
    local_c = puVar6;
    if (iVar5 == 0) {
LAB_00483691:
      bVar7 = *(uint *)(iVar2 + 0x24) < *(uint *)(iVar3 + 0x24);
    }
    else {
      if (iVar5 == 1) {
        _Str1 = (uchar *)FUN_00465e00((undefined4 *)(iVar2 + 8));
        _Str2 = (uchar *)FUN_00465e00((undefined4 *)(iVar3 + 8));
        iVar5 = __mbsicmp(_Str1,_Str2);
      }
      else {
        if (iVar5 != 2) goto LAB_00483691;
        lpString1 = (LPCSTR)FUN_00465e00((undefined4 *)(iVar2 + 8));
        lpString2 = (LPCSTR)FUN_00465e00((undefined4 *)(iVar3 + 8));
        iVar5 = lstrcmpiA(lpString1,lpString2);
      }
      bVar7 = iVar5 < 0;
      if (iVar5 == 0) goto LAB_00483691;
    }
    local_8 = CONCAT31(local_8._1_3_,bVar7);
    if (bVar7 == false) {
      puVar6 = (undefined4 *)puVar6[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
    puVar4 = local_c;
    cVar1 = *(char *)((int)puVar6 + 0x11);
  }
  local_c = puVar4;
  if (bVar7 != false) {
    if (puVar4 == (undefined4 *)**(int **)((int)local_4 + 4)) {
      uVar8 = 1;
      goto LAB_004836dd;
    }
    FUN_0041f1c0((int *)&local_c);
  }
  puVar6 = local_c;
  iVar2 = *param_2;
  this_00 = (void *)local_c[3];
  iVar5 = FUN_00482050(this_00,iVar2);
  bVar7 = iVar5 < 0;
  if (iVar5 == 0) {
    bVar7 = *(uint *)((int)this_00 + 0x24) < *(uint *)(iVar2 + 0x24);
  }
  uVar8 = local_8;
  if (!bVar7) {
    *param_1 = puVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_004836dd:
  puVar6 = (undefined4 *)FUN_004831a0(local_4,&param_2,(char)uVar8,puVar4,param_2);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

