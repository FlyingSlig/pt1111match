// FUNCTION: PORT1111 0x004034f0
// name: FUN_004034f0
// sig: undefined4 FUN_004034f0(HINSTANCE param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004034f0(HINSTANCE param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uchar *puVar5;
  LPCSTR lpRootPathName;
  undefined3 extraout_var;
  int *piVar6;
  DWORD nVolumeNameSize;
  DWORD *lpVolumeSerialNumber;
  DWORD *lpMaximumComponentLength;
  DWORD *pDVar7;
  CHAR *lpFileSystemNameBuffer;
  uint uVar8;
  DWORD nFileSystemNameSize;
  undefined4 local_1cc;
  undefined4 local_1c8;
  uint local_1c4;
  undefined4 local_1c0;
  DWORD local_1bc;
  DWORD local_1b8;
  DWORD local_1b4 [5];
  char *local_1a0;
  char *local_19c;
  char *local_198;
  char *local_194;
  undefined4 *local_164;
  undefined4 local_160;
  undefined4 local_15c;
  CHAR local_158 [80];
  uchar local_108 [260];
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  DAT_004dd96c = 2;
  iVar2 = FUN_00402a40((int *)&local_1c4,(char *)0x0,0);
  if ((iVar2 < 0) || (local_1c4 < 0x90000)) {
    MessageBoxA((HWND)0x0,"Instale o Microsoft(R) Directx(R) 9",
                "Portugal 1111 - A conquista de Soure",0x10);
    return 0xffffffff;
  }
  pDVar7 = local_1b4;
  for (iVar2 = 0x16; pDVar7 = pDVar7 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar7 = 0;
  }
  local_1a0 = "Portugal 1111 - A conquista de Soure";
  local_198 = "SOURE.GPR";
  local_1b4[1] = 0;
  local_1b4[2] = 1;
  local_1b4[4] = 1;
  local_1b4[3] = 1;
  local_194 = "data.rdt";
  local_19c = "SOFTWARE\\CIBERBIT\\PORTUGAL1111";
  local_160 = 0x10;
  local_15c = 1;
  puVar3 = operator_new(0x58);
  if (puVar3 == (undefined4 *)0x0) {
    local_164 = (undefined4 *)0x0;
  }
  else {
    local_164 = FUN_00401d60(puVar3);
  }
  DAT_004e2c2c = 1;
  DAT_004e2c28 = 3;
  DAT_004dd960 = 3;
  puVar3 = operator_new(0x100);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00403240(puVar3);
  }
  iVar2 = FUN_0046aa40(&DAT_004e2aa8,param_1,local_1b4 + 1,puVar3);
  if (iVar2 == 0) {
    return 0;
  }
  DAT_004e2c2c = *(undefined4 *)((int)DAT_004e2b14 + 0xfc);
  uVar8 = 3;
  puVar3 = &local_1cc;
  pvVar4 = FUN_00403360(DAT_004e2b14,&local_1c0);
  FUN_00466e10(pvVar4,puVar3,uVar8);
  FUN_00465e40(&local_1c0);
  pvVar4 = DAT_004e2b14;
  puVar5 = (uchar *)FUN_00465e00(&local_1cc);
  iVar2 = FUN_00467eb0(pvVar4,puVar5);
  if (iVar2 == 0) goto LAB_00403703;
  nFileSystemNameSize = 0x50;
  lpFileSystemNameBuffer = local_158;
  pDVar7 = &local_1bc;
  lpMaximumComponentLength = local_1b4;
  lpVolumeSerialNumber = &local_1b8;
  nVolumeNameSize = 0x104;
  puVar5 = local_108;
  lpRootPathName = (LPCSTR)FUN_00465e00(&local_1cc);
  GetVolumeInformationA
            (lpRootPathName,(LPSTR)puVar5,nVolumeNameSize,lpVolumeSerialNumber,
             lpMaximumComponentLength,pDVar7,lpFileSystemNameBuffer,nFileSystemNameSize);
  FUN_00466af0(&local_1c8,local_108,0xffffffff);
  bVar1 = FUN_00466ab0(&local_1c8,(uchar *)"Pt1111");
  if (CONCAT31(extraout_var,bVar1) != 0) {
    MessageBoxA((HWND)0x0,"Insira o CD e tente de novo","Portugal 1111 - A conquista de Soure",0x10)
    ;
    FUN_00465e40(&local_1c8);
    FUN_00465e40(&local_1cc);
    return 0xffffffff;
  }
  iVar2 = FUN_00437760(0x4e25f8);
  if (iVar2 == 0) {
    FUN_0046ab50("Error reading configuration files",0);
  }
  else {
    FUN_00436730(&DAT_004e25f8,(undefined4 *)&DAT_004e2638);
    puVar3 = operator_new(0x34);
    if ((puVar3 == (undefined4 *)0x0) ||
       (puVar3 = FUN_00449c20(puVar3), puVar3 == (undefined4 *)0x0)) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = puVar3 + 4;
    }
    iVar2 = FUN_0046a7b0(&DAT_004e2aa8,piVar6,0);
    if (iVar2 != 0) {
      iVar2 = FUN_00403380();
      if (iVar2 == 0) goto LAB_004036fa;
      FUN_0046a6e0(0x4e2aa8);
      FUN_004032f0();
    }
    FUN_0046a5f0(0x4e2aa8);
  }
LAB_004036fa:
  FUN_00465e40(&local_1c8);
LAB_00403703:
  FUN_00465e40(&local_1cc);
  return 0;
}

