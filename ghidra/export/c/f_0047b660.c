// FUNCTION: PORT1111 0x0047b660
// name: FUN_0047b660
// sig: undefined FUN_0047b660(void * this, int * param_1, int param_2, int param_3, int param_4, int param_5, undefined4 param_6)


void __thiscall
FUN_0047b660(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0xc))();
  if (cVar1 == '\x10') {
    uVar2 = (**(code **)(*param_1 + 0x30))();
    CRect::NormalizeRect((CRect *)&param_2);
    iVar3 = (**(code **)(*param_1 + 0x24))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x14))();
      iVar3 = -iVar3;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x14))();
    }
    FUN_0047b510(this,param_1,uVar2,iVar3,param_2,param_3,param_4 - param_2);
    iVar3 = (**(code **)(*param_1 + 0x24))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x14))();
      iVar3 = -iVar3;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x14))();
    }
    FUN_0047b510(this,param_1,uVar2,iVar3,param_2,param_5 + -1,param_4 - param_2);
    iVar3 = (**(code **)(*param_1 + 0x24))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x14))();
      iVar3 = -iVar3;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x14))();
    }
    FUN_0047b5b0(this,param_1,uVar2,iVar3,param_2,param_3,param_5 - param_3);
    iVar3 = (**(code **)(*param_1 + 0x24))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x14))();
      iVar3 = -iVar3;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x14))();
    }
    FUN_0047b5b0(this,param_1,uVar2,iVar3,param_4 + -1,param_3,param_5 - param_3);
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}

