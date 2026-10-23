// FUNCTION: PORT1111 0x00467300
// name: FUN_00467300
// sig: undefined FUN_00467300(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)


void __thiscall
FUN_00467300(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))
                    (*(int **)(param_1 + 0x2c),param_2,param_3,*(undefined4 *)((int)this + 0x2c),
                     param_4,(*(int *)((int)this + 0x1c) != -1) + '\x10');
  *(int *)((int)this + 0x28) = iVar1;
  if (iVar1 == -0x7789fe3e) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x6c))(*(int **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x28) = uVar2;
  }
  return;
}

