// FUNCTION: PORT1111 0x0047ba20
// name: FUN_0047ba20
// sig: undefined FUN_0047ba20(void * this, int * param_1, int param_2, int param_3, int param_4, int param_5)


void __thiscall
FUN_0047ba20(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  
  cVar1 = (**(code **)(*param_1 + 0xc))();
  if (cVar1 == '\x10') {
    uVar2 = (**(code **)(*param_1 + 0x30))();
    iVar3 = (**(code **)(*param_1 + 0x24))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x14))();
      puVar4 = (undefined2 *)-iVar3;
    }
    else {
      puVar4 = (undefined2 *)(**(code **)(*param_1 + 0x14))();
    }
    FUN_0047b780(this,param_1,uVar2,puVar4,param_2,param_3,param_4,param_5);
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}

