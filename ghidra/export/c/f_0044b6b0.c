// FUNCTION: PORT1111 0x0044b6b0
// name: FUN_0044b6b0
// sig: undefined4 FUN_0044b6b0(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_0044b6b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 uVar4;
  void *local_4;
  
  puVar1 = param_1;
  if (*(int *)((int)this + 0x114) == 0) {
    return 0;
  }
  uVar4 = 0;
  ppvVar3 = &local_4;
  local_4 = this;
  iVar2 = (**(code **)(**(int **)((int)this + 0x114) + 0x20))
                    (*(int **)((int)this + 0x114),param_1,ppvVar3,&param_1,0);
  if (-1 < iVar2) {
    (**(code **)(**(int **)((int)this + 0x114) + 0x30))
              (*(int **)((int)this + 0x114),*puVar1,ppvVar3,uVar4);
    return 1;
  }
  return 0;
}

