// FUNCTION: PORT1111 0x0041d4f0
// name: FUN_0041d4f0
// sig: undefined4 FUN_0041d4f0(int param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall FUN_0041d4f0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LPCSTR pCVar4;
  char *pcVar5;
  BOOL BVar6;
  LPCSTR lpExistingFileName;
  undefined4 *this;
  byte *pbVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  byte *local_604;
  byte *local_600;
  undefined4 local_5fc;
  int local_5f8;
  uint local_5f4;
  undefined4 local_5f0;
  undefined4 *local_5ec;
  uint local_5e8 [2];
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  int local_5bc [6];
  int local_5a4 [20];
  byte local_554 [68];
  uchar local_510 [256];
  byte local_410 [1024];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b69e8;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  ExceptionList = &local_c;
  local_5f8 = param_1;
  FUN_00403340(DAT_004e2b14,&local_608);
  local_4 = 0;
  thunk_FUN_00466040(&local_608,"data\\maps\\");
  FUN_00466b20(&local_610,&local_608);
  local_4._0_1_ = 1;
  thunk_FUN_00466040(&local_610,"current.acp");
  FUN_00466b20(&local_60c,&local_608);
  local_4._0_1_ = 2;
  thunk_FUN_00466040(&local_60c,"temp_current.acp");
  uVar2 = FUN_00465e00(&local_610);
  puVar3 = (undefined4 *)FUN_0044fe90(uVar2);
  local_5ec = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    local_4._0_1_ = 1;
    FUN_00465e40(&local_60c);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00465e40(&local_610);
    local_4 = 0xffffffff;
    FUN_00465e40(&local_608);
  }
  else {
    pCVar4 = (LPCSTR)FUN_00465e00(&local_60c);
    DeleteFileA(pCVar4);
    iVar11 = 0;
    uVar2 = FUN_00465e00(&local_60c);
    pcVar5 = (char *)FUN_00450b20(uVar2,iVar11);
    if (pcVar5 == (char *)0x0) {
      FUN_0044fea0(puVar3);
    }
    else {
      iVar11 = FUN_0044f160((int)puVar3,local_5e8);
      if (iVar11 == 0) {
        local_5f4 = 0;
        if (local_5e8[0] != 0) {
          do {
            iVar11 = FUN_0044f510(puVar3,local_5a4,(int)local_510,0x100,0,0,0,0);
            if ((iVar11 != 0) || (iVar11 = FUN_00450180(puVar3), iVar11 != 0)) goto LAB_0041db79;
            local_5cc = 0;
            local_5d4 = 0;
            local_5d8 = 0;
            local_5dc = 0;
            local_5e0 = 0;
            local_5c8 = 0;
            local_5c4 = 0;
            local_5c0 = 0;
            iVar11 = FUN_00451920((uint)pcVar5,(char *)local_510,&local_5e0,0,0,0,0,(char *)0x0,8,-1
                                 );
            if (iVar11 != 0) {
              FUN_0044fbf0((int)puVar3);
              FUN_0044fea0(puVar3);
              FUN_00451010(pcVar5,(char *)0x0);
              goto LAB_0041d617;
            }
            iVar11 = FUN_004662f0((void *)(param_1 + 4),local_510);
            if (iVar11 == 0) {
              this = FUN_00466af0(&local_5f0,local_510,0xffffffff);
              local_4._0_1_ = 4;
              iVar11 = FUN_004662f0(this,(uchar *)"Campanha.txt");
              local_4._0_1_ = 2;
              FUN_00465e40(&local_5f0);
              if (iVar11 == 0) {
LAB_0041db20:
                uVar9 = FUN_0044f970((int)puVar3,(int)local_410,0x400);
                if ((int)uVar9 < 0) goto LAB_0041db56;
                if (0 < (int)uVar9) goto code_r0x0041db40;
                goto LAB_0041d816;
              }
              FUN_00450c30((int)pcVar5,(byte *)"DESCRICCAO_CAMPANHA",0x13);
              FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
              pbVar7 = *(byte **)(param_1 + 0x4c);
              uVar9 = FUN_00465d00((undefined4 *)(param_1 + 0x4c));
              FUN_00450c30((int)pcVar5,pbVar7,uVar9);
              FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
              FUN_00450c30((int)pcVar5,(byte *)"UNIDADES_DISPONIVEIS",0x14);
              FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
              FUN_00466af0(&local_600,"",0xffffffff);
              local_4._0_1_ = 5;
              FUN_00465cf0(&local_5fc);
              local_4 = CONCAT31(local_4._1_3_,6);
              iVar11 = 0;
              piVar10 = (int *)(param_1 + 0x94);
              do {
                if (*piVar10 != 0) {
                  FUN_00466970(&local_5fc,&DAT_004bf680);
                  FUN_00466a30(&local_600,&local_5fc);
                }
                iVar11 = iVar11 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar11 < 0x4d);
              thunk_FUN_00466040(&local_600,"\n");
              pbVar7 = local_600;
              uVar9 = FUN_00465d00(&local_600);
              FUN_00450c30((int)pcVar5,pbVar7,uVar9);
              FUN_00450c30((int)pcVar5,(byte *)"TODOS_OS_MAPAS",0xe);
              FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
              FUN_00466af0(&local_604,"",0xffffffff);
              piVar10 = (int *)**(int **)(param_1 + 0x54);
              local_4 = CONCAT31(local_4._1_3_,7);
              if (piVar10 != *(int **)(param_1 + 0x54)) {
                do {
                  FUN_00466a50(&local_604,piVar10 + 2);
                  iVar11 = 0;
                  piVar8 = piVar10 + 3;
                  do {
                    if (*piVar8 != 0) {
                      FUN_00466970(&local_5fc,&DAT_004bf680);
                      FUN_00466a30(&local_604,&local_5fc);
                    }
                    pbVar7 = local_604;
                    iVar11 = iVar11 + 1;
                    piVar8 = piVar8 + 1;
                  } while (iVar11 < 0x4d);
                  uVar9 = FUN_00465d00(&local_604);
                  FUN_00450c30((int)pcVar5,pbVar7,uVar9);
                  FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
                  piVar10 = (int *)*piVar10;
                  param_1 = local_5f8;
                } while (piVar10 != (int *)*(int *)(local_5f8 + 0x54));
              }
              FUN_00450c30((int)pcVar5,(byte *)"PILHA_DE_MAPAS",0xe);
              FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
              piVar10 = (int *)**(int **)(param_1 + 0x60);
              if (piVar10 != *(int **)(param_1 + 0x60)) {
                do {
                  pbVar7 = (byte *)piVar10[2];
                  uVar9 = FUN_00465d00(piVar10 + 2);
                  FUN_00450c30((int)pcVar5,pbVar7,uVar9);
                  FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
                  piVar10 = (int *)*piVar10;
                } while (piVar10 != (int *)*(int *)(param_1 + 0x60));
              }
              FUN_00450c30((int)pcVar5,(byte *)"MAPAS_VALIDOS",0xd);
              FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
              __ultoa(*(ulong *)(param_1 + 0x68),(char *)local_554,10);
              pbVar7 = local_554;
              do {
                bVar1 = *pbVar7;
                pbVar7 = pbVar7 + 1;
              } while (bVar1 != 0);
              FUN_00450c30((int)pcVar5,local_554,(int)pbVar7 - (int)(local_554 + 1));
              FUN_00450c30((int)pcVar5,&DAT_004bf69c,1);
              local_4._0_1_ = 6;
              FUN_00465e40(&local_604);
              local_4._0_1_ = 5;
              FUN_00465e40(&local_5fc);
              local_4._0_1_ = 2;
              FUN_00465e40(&local_600);
              puVar3 = local_5ec;
            }
            else {
              FUN_0042f680(local_5bc);
              local_4._0_1_ = 3;
              FUN_0042f550(local_5bc,pcVar5,2,0x400);
              FUN_0042af30(DAT_004e2404,local_5bc);
              local_4._0_1_ = 2;
              FUN_0042f6c0(local_5bc);
            }
LAB_0041d816:
            FUN_0044fbf0((int)puVar3);
            FUN_00450ff0((int)pcVar5);
            uVar9 = local_5f4 + 1;
            if ((uVar9 < local_5e8[0]) && (iVar11 = FUN_0044f5a0((int)puVar3), iVar11 != 0)) {
              FUN_0044fea0(puVar3);
              FUN_00451010(pcVar5,(char *)0x0);
              goto LAB_0041d617;
            }
            local_5f4 = uVar9;
          } while (uVar9 < local_5e8[0]);
        }
        FUN_0044fea0(puVar3);
        FUN_00451010(pcVar5,"");
        pCVar4 = (LPCSTR)FUN_00465e00(&local_610);
        BVar6 = DeleteFileA(pCVar4);
        if (BVar6 == 0) {
          GetLastError();
        }
        pCVar4 = (LPCSTR)FUN_00465e00(&local_610);
        lpExistingFileName = (LPCSTR)FUN_00465e00(&local_60c);
        BVar6 = MoveFileA(lpExistingFileName,pCVar4);
        if (BVar6 == 0) {
          GetLastError();
        }
        local_4._0_1_ = 1;
        FUN_00465e40(&local_60c);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00465e40(&local_610);
        local_4 = 0xffffffff;
        FUN_00465e40(&local_608);
        ExceptionList = local_c;
        return 1;
      }
LAB_0041db79:
      FUN_0044fea0(puVar3);
      FUN_00451010(pcVar5,(char *)0x0);
    }
LAB_0041d617:
    local_4._0_1_ = 1;
    FUN_00465e40(&local_60c);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00465e40(&local_610);
    local_4 = 0xffffffff;
    FUN_00465e40(&local_608);
  }
  ExceptionList = local_c;
  return 0;
code_r0x0041db40:
  uVar9 = FUN_00450c30((int)pcVar5,local_410,uVar9);
  if ((int)uVar9 < 0) {
LAB_0041db56:
    FUN_0044fbf0((int)puVar3);
    FUN_0044fea0(puVar3);
    FUN_00450ff0((int)pcVar5);
    FUN_00451010(pcVar5,(char *)0x0);
    goto LAB_0041d617;
  }
  goto LAB_0041db20;
}

