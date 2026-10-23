// FUNCTION: PORT1111 0x00484330
// name: FUN_00484330
// sig: undefined FUN_00484330(void * this, undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)


void __thiscall
FUN_00484330(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)((int)this + 0xc) + 8) == 0) {
    *param_2 = *(undefined4 *)((int)this + 4);
    *param_1 = 0xffffffff;
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + 4) + 8);
  *param_2 = *(undefined4 *)(iVar1 + 8);
  *param_1 = *(undefined4 *)(iVar1 + 4);
  *param_4 = *(undefined4 *)(iVar1 + 0x10);
  *param_3 = *(undefined4 *)(iVar1 + 0xc);
  if (*(int **)(iVar1 + 0x10) == (int *)0x0) {
    *param_4 = 0;
    FUN_004842e0((int)this);
    return;
  }
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))();
  *param_4 = uVar2;
  FUN_004842e0((int)this);
  return;
}

