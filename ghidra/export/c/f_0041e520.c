// FUNCTION: PORT1111 0x0041e520
// name: FUN_0041e520
// sig: undefined4 FUN_0041e520(void * this, int param_1, uint param_2)


undefined4 __thiscall FUN_0041e520(void *this,int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  char *local_1a4;
  uint local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  uchar local_194;
  undefined3 uStack_193;
  void *local_190;
  uchar local_18c;
  undefined3 uStack_18b;
  int local_188;
  char *local_184;
  char *local_180;
  char *local_17c [6];
  undefined4 local_164;
  char *local_160;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c [78];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b6b4c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_190 = this;
  FUN_00466a40((void *)((int)this + 0x4c),"");
  FUN_0041dc00((int)this + 0x5c);
  FUN_0041dc00((int)this + 0x50);
  *(undefined4 *)((int)this + 0x68) = 0xffffffff;
  local_180 = "DESCRICCAO_CAMPANHA";
  local_17c[0] = (char *)0x1;
  local_17c[1] = "UNIDADES_DISPONIVEIS";
  local_17c[2] = (char *)0x2;
  local_17c[3] = "TODOS_OS_MAPAS";
  local_17c[4] = (char *)0x3;
  local_17c[5] = "PILHA_DE_MAPAS";
  local_164 = 4;
  local_160 = "MAPAS_VALIDOS";
  local_15c = 5;
  local_158 = &DAT_004bd2c8;
  local_154 = 0;
  local_188 = 0;
  FUN_00465cf0(&local_1a4);
  local_c = 0;
  local_1a0 = 0;
  if (param_2 != 0) {
    do {
      if ((*(char *)(local_1a0 + param_1) == '\n') ||
         (uVar7 = local_1a0, *(char *)(local_1a0 + param_1) == '\r')) {
        cVar1 = *(char *)(local_1a0 + 1 + param_1);
        *(undefined1 *)(local_1a0 + param_1) = 0;
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          local_1a0 = local_1a0 + 1;
          *(undefined1 *)(local_1a0 + param_1) = 0;
        }
        uVar7 = local_1a0;
        FUN_00466a40(&local_1a4,(uchar *)(local_188 + param_1));
        local_188 = uVar7 + 1;
        iVar4 = FUN_00465e10(&local_1a4,0);
        if ((char)iVar4 != '#') {
          iVar4 = 0;
          pcVar5 = "DESCRICCAO_CAMPANHA";
          do {
            iVar6 = FUN_004662f0(&local_1a4,(uchar *)pcVar5);
            if (iVar6 != 0) {
              local_184 = local_17c[iVar4 * 2];
              goto switchD_0041e677_default;
            }
            pcVar5 = local_17c[iVar4 * 2 + 1];
            iVar4 = iVar4 + 1;
          } while (*pcVar5 != '\0');
          switch(local_184) {
          case (char *)0x1:
            FUN_00466a50((void *)((int)this + 0x4c),&local_1a4);
            break;
          case (char *)0x2:
            bVar2 = false;
            FUN_00466af0(&local_19c,"",0xffffffff);
            local_c = CONCAT31(local_c._1_3_,1);
            local_1a0 = 0;
            iVar4 = FUN_00465d00(&local_1a4);
            if (iVar4 != 0) {
              uVar7 = 0;
              do {
                iVar4 = FUN_00465e10(&local_1a4,uVar7);
                uVar3 = (uchar)iVar4;
                _local_194 = CONCAT31(uStack_193,uVar3);
                if (((char)uVar3 < '0') || ('9' < (char)uVar3)) {
                  if (bVar2) {
                    pcVar5 = (char *)FUN_00465e00(&local_19c);
                    lVar10 = _atol(pcVar5);
                    if ((-1 < lVar10) && (lVar10 < 0x4d)) {
                      *(undefined4 *)((int)this + lVar10 * 4 + 0x94) = 1;
                    }
                    bVar2 = false;
                  }
                }
                else if (bVar2) {
                  FUN_00467000(&local_19c,uVar3);
                }
                else {
                  FUN_00466a70(&local_19c,uVar3);
                  bVar2 = true;
                }
                uVar7 = uVar7 + 1;
                uVar8 = FUN_00465d00(&local_1a4);
              } while (uVar7 < uVar8);
              local_1a0 = uVar7;
              if (bVar2) {
                pcVar5 = (char *)FUN_00465e00(&local_19c);
                lVar10 = _atol(pcVar5);
                if ((-1 < lVar10) && (lVar10 < 0x4d)) {
                  *(undefined4 *)((int)this + lVar10 * 4 + 0x94) = 1;
                }
              }
            }
            local_c = local_c & 0xffffff00;
            FUN_00465e40(&local_19c);
            uVar7 = local_1a0;
            break;
          case (char *)0x3:
            FUN_00465cf0(&local_150);
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_00466a40(&local_150,"");
            puVar9 = local_14c;
            for (iVar4 = 0x4d; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            uVar7 = FUN_00466510(&local_1a4,' ',0);
            FUN_00466a50(&local_150,&local_1a4);
            if (0 < (int)uVar7) {
              iVar4 = FUN_00465d00(&local_150);
              FUN_00466bc0(&local_150,uVar7,iVar4 - 1);
              bVar2 = false;
              FUN_00466af0(&local_198,"",0xffffffff);
              local_c = CONCAT31(local_c._1_3_,3);
              uVar8 = FUN_00465d00(&local_1a4);
              if (uVar7 < uVar8) {
                do {
                  iVar4 = FUN_00465e10(&local_1a4,uVar7);
                  uVar3 = (uchar)iVar4;
                  _local_18c = CONCAT31(uStack_18b,uVar3);
                  if (((char)uVar3 < '0') || ('9' < (char)uVar3)) {
                    if (bVar2) {
                      pcVar5 = (char *)FUN_00465e00(&local_198);
                      lVar10 = _atol(pcVar5);
                      if ((-1 < lVar10) && (lVar10 < 0x4d)) {
                        local_14c[lVar10] = 1;
                      }
                      bVar2 = false;
                    }
                  }
                  else if (bVar2) {
                    FUN_00467000(&local_198,uVar3);
                  }
                  else {
                    FUN_00466a70(&local_198,uVar3);
                    bVar2 = true;
                  }
                  uVar7 = uVar7 + 1;
                  uVar8 = FUN_00465d00(&local_1a4);
                } while (uVar7 < uVar8);
                if (bVar2) {
                  pcVar5 = (char *)FUN_00465e00(&local_198);
                  lVar10 = _atol(pcVar5);
                  if ((-1 < lVar10) && (lVar10 < 0x4d)) {
                    local_14c[lVar10] = 1;
                  }
                }
              }
              local_c = CONCAT31(local_c._1_3_,2);
              FUN_00465e40(&local_198);
              this = local_190;
            }
            iVar4 = *(int *)((int)this + 0x54);
            puVar9 = FUN_0041d320(iVar4,*(undefined4 *)(iVar4 + 4),&local_150);
            FUN_0041e1e0((void *)((int)this + 0x50),1);
            *(undefined4 **)(iVar4 + 4) = puVar9;
            *(undefined4 **)puVar9[1] = puVar9;
            local_c = local_c & 0xffffff00;
            FUN_00465e40(&local_150);
            this = local_190;
            uVar7 = local_1a0;
            break;
          case (char *)0x4:
            iVar4 = *(int *)((int)this + 0x60);
            puVar9 = FUN_0041d3c0(iVar4,*(undefined4 *)(iVar4 + 4),&local_1a4);
            FUN_0041e280((void *)((int)this + 0x5c),1);
            *(undefined4 **)(iVar4 + 4) = puVar9;
            *(undefined4 **)puVar9[1] = puVar9;
            uVar7 = local_1a0;
            break;
          case (char *)0x5:
            lVar10 = _atol(local_1a4);
            *(long *)((int)this + 0x68) = lVar10;
          }
        }
      }
switchD_0041e677_default:
      local_1a0 = uVar7 + 1;
    } while (local_1a0 < param_2);
  }
  FUN_00466a50((void *)((int)this + 4),(undefined4 *)(*(int *)(*(int *)((int)this + 0x60) + 4) + 8))
  ;
  local_c = 0xffffffff;
  FUN_00465e40(&local_1a4);
  ExceptionList = local_14;
  return 1;
}

