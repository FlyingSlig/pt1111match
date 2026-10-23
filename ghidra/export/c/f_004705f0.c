// FUNCTION: PORT1111 0x004705f0
// name: FUN_004705f0
// sig: undefined FUN_004705f0(int * param_1)


void __fastcall FUN_004705f0(int *param_1)

{
  int *this;
  bool bVar1;
  undefined3 extraout_var;
  int mode;
  HGDIOBJ pvVar2;
  LPCSTR pCVar3;
  uchar *puVar4;
  HDC unaff_retaddr;
  tagRECT *ptVar5;
  int iVar6;
  UINT UVar7;
  int iVar8;
  COLORREF CVar9;
  int iVar10;
  uint uVar11;
  COLORREF CVar12;
  int iVar13;
  tagRECT tStack_14;
  
  this = param_1 + 0x25;
  bVar1 = FUN_00466ab0(this,"");
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x30))(&tStack_14.top);
  if (param_1[0x2a] == 0) {
    OffsetRect(&tStack_14,-tStack_14.left,-tStack_14.top);
  }
  SetTextColor(unaff_retaddr,param_1[0x3a]);
  mode = SetBkMode(unaff_retaddr,1);
  pvVar2 = (HGDIOBJ)FUN_0048b0d0((LOGFONTA *)(param_1 + 0x2b));
  pvVar2 = SelectObject(unaff_retaddr,pvVar2);
  if (param_1[0x3f] == 0) {
    iVar13 = param_1[0x3b];
    if (iVar13 != 0x6d) {
      if ((*(byte *)(param_1 + 0x27) & 1) == 0) {
        uVar11 = param_1[0x26];
        iVar10 = param_1[0x3c];
        ptVar5 = &tStack_14;
        pCVar3 = (LPCSTR)FUN_00465e00(this);
        FUN_0048a750(unaff_retaddr,pCVar3,&ptVar5->left,iVar13,iVar10,uVar11);
      }
      else {
        CVar12 = param_1[0x29];
        CVar9 = param_1[0x3a];
        UVar7 = param_1[0x26];
        iVar10 = param_1[0x3c];
        ptVar5 = &tStack_14;
        pCVar3 = (LPCSTR)FUN_00465e00(this);
        FUN_0048a840(unaff_retaddr,pCVar3,&ptVar5->left,iVar13,iVar10,UVar7,CVar9,CVar12);
      }
      goto LAB_00470739;
    }
    iVar8 = param_1[0x3c];
    iVar13 = -1;
    iVar10 = 0;
    iVar6 = 0x6d;
  }
  else {
    iVar13 = param_1[0x3e];
    iVar10 = param_1[0x3d];
    iVar8 = param_1[0x3c];
    iVar6 = param_1[0x3b];
  }
  ptVar5 = &tStack_14;
  puVar4 = (uchar *)FUN_00465e00(this);
  FUN_0048aa00(unaff_retaddr,puVar4,&ptVar5->left,iVar6,iVar8,iVar10,iVar13);
LAB_00470739:
  SetBkMode(unaff_retaddr,mode);
  SelectObject(unaff_retaddr,pvVar2);
  return;
}

