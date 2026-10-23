// FUNCTION: PORT1111 0x00453660
// name: FUN_00453660
// sig: undefined FUN_00453660(void * this, int param_1, int param_2, int * param_3)


void __thiscall FUN_00453660(void *this,int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iStack_4;
  
  uVar1 = (**(code **)(*param_3 + 0x30))();
  iVar2 = (**(code **)(*param_3 + 0x24))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_3 + 0x14))();
    puVar3 = (undefined2 *)-iVar2;
  }
  else {
    puVar3 = (undefined2 *)(**(code **)(*param_3 + 0x14))();
  }
  iStack_4 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    do {
      if (*(int *)((int)this + 0x24) != 0) {
        FUN_0047b780(&DAT_004e278c,param_3,uVar1,puVar3,param_1,param_2,
                     *(int *)((int)this + 0x24) + -1 + param_1,param_2);
      }
      if ((*(int *)((int)this + 0x18) < *(int *)((int)this + 0x14) + -1) &&
         (*(int *)((int)this + 0x2c) != 0)) {
        iVar4 = *(int *)((int)this + 0x1c) - *(int *)((int)this + 0x24);
        iVar2 = *(int *)((int)this + 0x24) + param_1;
        if (iVar4 != 0) {
          FUN_0047b780(&DAT_004e278c,param_3,uVar1,puVar3,iVar2,param_2,iVar4 + -1 + iVar2,param_2);
        }
      }
      iStack_4 = iStack_4 + 1;
      param_2 = param_2 + 1;
    } while (iStack_4 < *(int *)((int)this + 0x20));
  }
  (**(code **)(*param_3 + 0x34))();
  return;
}

