// FUNCTION: PORT1111 0x004189c0
// name: FUN_004189c0
// sig: undefined4 FUN_004189c0(void * this, int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004189c0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00465cf0(&local_10);
  local_4 = 0;
  uVar1 = FUN_00439390(param_1,&local_10);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_004662f0(&local_10,"tree");
    if (iVar2 == 0) {
      iVar2 = FUN_004662f0(&local_10,(uchar *)"structure");
      if (iVar2 == 0) {
        iVar2 = FUN_004662f0(&local_10,(uchar *)"connected");
        if (iVar2 == 0) {
          iVar2 = FUN_004662f0(&local_10,"unit");
          if (iVar2 == 0) {
            iVar2 = FUN_004662f0(&local_10,(uchar *)"milho_struct");
            if (iVar2 == 0) {
              iVar2 = FUN_004662f0(&local_10,(uchar *)"Quinta");
              if (iVar2 == 0) {
                iVar2 = FUN_004662f0(&local_10,"Gate");
                if (iVar2 == 0) {
                  iVar2 = FUN_004662f0(&local_10,(uchar *)"PROJECTILE");
                  if (iVar2 == 0) {
                    iVar2 = FUN_004662f0(&local_10,"PROP");
                    if (iVar2 == 0) {
                      iVar2 = FUN_004662f0(&local_10,(uchar *)"SAIDA_STRUCT");
                      if (iVar2 == 0) {
                        iVar2 = FUN_004662f0(&local_10,"ENTRADA_STRUCT");
                        if (iVar2 == 0) goto LAB_00418b76;
                        _DAT_004e26a4 = *(undefined4 *)((int)this + 0x14);
                        *(undefined4 *)((int)this + 0x48) = 0xb;
                      }
                      else {
                        _DAT_004e26a8 = *(undefined4 *)((int)this + 0x14);
                        *(undefined4 *)((int)this + 0x48) = 10;
                      }
                    }
                    else {
                      *(undefined4 *)((int)this + 0x48) = 9;
                    }
                  }
                  else {
                    *(undefined4 *)((int)this + 0x48) = 8;
                  }
                }
                else {
                  *(undefined4 *)((int)this + 0x48) = 5;
                }
              }
              else {
                *(undefined4 *)((int)this + 0x48) = 7;
              }
            }
            else {
              *(undefined4 *)((int)this + 0x48) = 6;
            }
          }
          else {
            *(undefined4 *)((int)this + 0x48) = 4;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x48) = 3;
        }
      }
      else {
        *(undefined4 *)((int)this + 0x48) = 2;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x48) = 1;
    }
    local_4 = 0xffffffff;
    uVar1 = FUN_00465e40(&local_10);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
LAB_00418b76:
  local_4 = 0xffffffff;
  uVar3 = FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}

