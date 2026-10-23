// FUNCTION: PORT1111 0x004585b0
// name: FUN_004585b0
// sig: undefined4 FUN_004585b0(void * this, char * param_1, void * param_2, int param_3)


undefined4 __thiscall FUN_004585b0(void *this,char *param_1,void *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  char *pcVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  void *this_00;
  int iVar10;
  uchar *puVar11;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c;
  undefined4 *local_28;
  void *local_24;
  undefined4 local_20 [2];
  char *local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9099;
  local_c = ExceptionList;
  iVar10 = -1;
  ExceptionList = &local_c;
  local_2c = this;
  FUN_00458120(&local_24);
  local_4 = 0;
  if (param_3 == 0) {
    FUN_00466b20(&param_3,(undefined4 *)&DAT_004e2a80);
    local_4._0_1_ = 1;
    thunk_FUN_00466040(&param_3,"\\");
    thunk_FUN_00466040(&param_3,param_1);
    puVar11 = " ";
    puVar3 = (uchar *)FUN_00465e00(&param_3);
    iVar2 = FUN_00458410(&local_24,puVar3,puVar11);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar2 == 0) {
      FUN_00465e40(&param_3);
      local_4 = 0xffffffff;
      FUN_00458180((int *)&local_24);
      ExceptionList = local_c;
      return 0;
    }
    FUN_00465e40(&param_3);
  }
  else {
    iVar2 = FUN_004584b0(&local_24,param_1,param_3," ");
    if (iVar2 == 0) {
      local_4 = 0xffffffff;
      FUN_00458180((int *)&local_24);
      ExceptionList = local_c;
      return 0;
    }
  }
  FUN_00465cf0(&local_38);
  local_4._0_1_ = 2;
  FUN_00465cf0(&local_30);
  local_4._0_1_ = 3;
  FUN_00465cf0(&local_34);
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar2 = FUN_00458250(&local_24,&local_38);
  if (iVar2 != 0) {
    do {
      bVar1 = FUN_00466ab0(&local_38,"");
      if (CONCAT31(extraout_var,bVar1) != 0) {
        iVar2 = FUN_00465e10(&local_38,0);
        if ((char)iVar2 == '/') {
          bVar1 = FUN_004887d0(local_24,local_20);
          if (CONCAT31(extraout_var_00,bVar1) == 0) {
            if (iVar10 == 1) goto LAB_00458b90;
LAB_00458be5:
            FUN_00465e00(&local_38);
            FUN_00458360((int)this);
            goto LAB_00458cf0;
          }
          if (local_18 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_18);
          }
          pcVar4 = (char *)FUN_00465e00(local_20);
          local_18 = __strdup(pcVar4);
          local_10 = local_10 + 1;
          local_14 = 0;
        }
        else {
          iVar2 = thunk_FUN_00466240(&local_38,(uchar *)"<RULES");
          if (iVar2 != 0) {
            iVar10 = FUN_00458250(&local_24,&local_38);
            if (iVar10 == 0) {
              FUN_00465e00(&local_38);
              FUN_00458360((int)this);
            }
            else {
              iVar10 = FUN_00465e10(&local_38,0);
              if ((char)iVar10 != '#') goto LAB_00458b6d;
              FUN_004670a0(&local_38,"#",1);
              FUN_004670a0(&local_38,">",1);
              pcVar4 = (char *)FUN_00465e00(&local_38);
              lVar5 = _atol(pcVar4);
              iVar10 = FUN_00456670(param_2,lVar5);
              if (iVar10 == 0) goto LAB_00458be5;
              iVar10 = FUN_00458200(&local_24);
              if (iVar10 != 0) goto LAB_00458b4c;
              FUN_00465e00(&local_38);
              FUN_00458360((int)this);
            }
            goto LAB_00458cf0;
          }
          iVar2 = thunk_FUN_00466240(&local_38,(uchar *)"</RULES>");
          if (iVar2 == 0) {
            iVar2 = thunk_FUN_00466240(&local_38,"if");
            if (iVar2 == 0) {
              iVar2 = thunk_FUN_00466240(&local_38,"=");
              if (iVar2 == 0) {
                iVar2 = thunk_FUN_00466240(&local_38,">");
                if (iVar2 == 0) {
                  iVar2 = thunk_FUN_00466240(&local_38,"<");
                  if (iVar2 == 0) {
                    iVar2 = thunk_FUN_00466240(&local_38,">=");
                    if (iVar2 != 0) goto LAB_004588d7;
                    iVar2 = thunk_FUN_00466240(&local_38,"<=");
                    if (iVar2 == 0) {
                      iVar2 = thunk_FUN_00466240(&local_38,"<>");
                      if (iVar2 == 0) {
                        iVar2 = thunk_FUN_00466240(&local_38,"then");
                        if (iVar2 == 0) {
                          iVar2 = thunk_FUN_00466240(&local_38,"and");
                          if (iVar2 == 0) {
                            if (iVar10 == 2) {
                              FUN_00466a50(&local_30,&local_38);
                            }
                            else if (iVar10 == 3) {
                              if (*(int *)((int)param_2 + 0x14) != 0) {
                                local_28 = operator_new(0x10);
                                local_4._0_1_ = 7;
                                if (local_28 == (undefined4 *)0x0) {
                                  puVar7 = (undefined4 *)0x0;
                                }
                                else {
                                  puVar7 = (undefined4 *)FUN_00459560(local_28);
                                }
                                local_4 = CONCAT31(local_4._1_3_,4);
                                puVar8 = operator_new(0xc);
                                if (puVar8 == (undefined4 *)0x0) {
                                  puVar8 = (undefined4 *)0x0;
                                }
                                else {
                                  uVar6 = *(undefined4 *)((int)param_2 + 0x14);
                                  *puVar8 = &PTR_FUN_004c46f4;
                                  puVar8[1] = 1000;
                                  puVar8[2] = uVar6;
                                }
                                FUN_004598b0(puVar7,puVar8);
                                iVar2 = FUN_0045c150((void *)puVar7[1],&local_30);
                                if (iVar2 != 0) {
                                  puVar9 = (undefined *)FUN_004583f0();
                                  iVar2 = FUN_0045c250(&local_38,0,puVar9);
                                  if (iVar2 == 0) {
                                    FUN_00465e00(&local_38);
                                    FUN_00458360((int)local_2c);
                                    (**(code **)*puVar7)(1);
                                    if (param_1 != (char *)0x0) {
                                      (*(code *)**(undefined4 **)param_1)(1);
                                    }
                                    goto LAB_00458cf0;
                                  }
                                  iVar2 = FUN_00459640(puVar7,&local_34);
                                  if (iVar2 != 0) {
                                    this_00 = (void *)FUN_00484bd0((int)param_1);
                                    FUN_00457bf0(this_00,(int)puVar7);
                                    this = local_2c;
                                    goto LAB_00458b4e;
                                  }
                                }
                                FUN_00465e00(&local_38);
                                FUN_00458360((int)local_2c);
                                (**(code **)*puVar7)(1);
LAB_00458ce4:
                                if (param_1 != (char *)0x0) {
                                  (*(code *)**(undefined4 **)param_1)(1);
                                }
                                goto LAB_00458cf0;
                              }
                            }
                            else if (iVar10 == 4) {
                              if (*(int *)((int)param_2 + 0x14) != 0) {
                                puVar7 = operator_new(0xc);
                                if (puVar7 == (undefined4 *)0x0) {
                                  puVar7 = (undefined4 *)0x0;
                                }
                                else {
                                  uVar6 = *(undefined4 *)((int)param_2 + 0x14);
                                  *puVar7 = &PTR_FUN_004c46ec;
                                  puVar7[1] = 0x8d;
                                  puVar7[2] = uVar6;
                                }
                                FUN_00457580(param_1,puVar7);
                                iVar10 = FUN_004594e0(puVar7,&local_38);
                                if (iVar10 == 0) {
                                  FUN_00465e00(&local_38);
                                  FUN_00458360((int)local_2c);
                                  goto LAB_00458ce4;
                                }
                                FUN_004580b0(*(void **)((int)param_2 + 0x10),param_1);
                                this = local_2c;
                              }
LAB_00458b4c:
                              iVar10 = 0;
                            }
                          }
                          else {
                            iVar10 = 2;
                          }
                        }
                        else {
                          iVar10 = 4;
                        }
                      }
                      else {
                        if (iVar10 != 2) goto LAB_00458b6d;
                        FUN_00466a50(&local_34,&local_38);
                        iVar10 = 3;
                      }
                    }
                    else {
                      if (iVar10 != 2) goto LAB_00458c45;
                      FUN_00466a50(&local_34,&local_38);
                      iVar10 = 3;
                    }
                  }
                  else {
                    if (iVar10 != 2) goto LAB_00458b6d;
                    FUN_00466a50(&local_34,&local_38);
                    iVar10 = 3;
                  }
                }
                else {
                  if (iVar10 != 2) {
LAB_00458c45:
                    FUN_00465e00(&local_38);
                    FUN_00458360((int)this);
                    goto LAB_00458cf0;
                  }
                  FUN_00466a50(&local_34,&local_38);
                  iVar10 = 3;
                }
              }
              else {
LAB_004588d7:
                if (iVar10 != 2) {
                  FUN_00465e00(&local_38);
                  FUN_00458360((int)this);
                  goto LAB_00458cf0;
                }
                FUN_00466a50(&local_34,&local_38);
                iVar10 = 3;
              }
            }
            else {
              if (iVar10 != 0) goto LAB_00458b6d;
              iVar10 = 2;
              local_28 = operator_new(0x10);
              local_4._0_1_ = 5;
              if (local_28 == (undefined4 *)0x0) {
                param_1 = (char *)0x0;
              }
              else {
                param_1 = (char *)FUN_00457530(local_28);
              }
              local_4._0_1_ = 4;
              local_28 = operator_new(0x18);
              local_4._0_1_ = 6;
              if (local_28 == (undefined4 *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_00457b80(local_28);
              }
              local_4 = CONCAT31(local_4._1_3_,4);
              FUN_00457550(param_1,uVar6);
              this = local_2c;
            }
          }
          else {
            iVar10 = 1;
          }
        }
      }
LAB_00458b4e:
      iVar2 = FUN_00458250(&local_24,&local_38);
    } while (iVar2 != 0);
    if (iVar10 == 1) {
LAB_00458b90:
      local_4._0_1_ = 3;
      FUN_00465e40(&local_34);
      local_4._0_1_ = 2;
      FUN_00465e40(&local_30);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40(&local_38);
      local_4 = 0xffffffff;
      FUN_00458180((int *)&local_24);
      ExceptionList = local_c;
      return 1;
    }
  }
LAB_00458b6d:
  FUN_00465e00(&local_38);
  FUN_00458360((int)this);
LAB_00458cf0:
  local_4._0_1_ = 3;
  FUN_00465e40(&local_34);
  local_4._0_1_ = 2;
  FUN_00465e40(&local_30);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_38);
  local_4 = 0xffffffff;
  FUN_00458180((int *)&local_24);
  ExceptionList = local_c;
  return 0;
}

