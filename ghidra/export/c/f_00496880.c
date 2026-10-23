// FUNCTION: PORT1111 0x00496880
// name: FUN_00496880
// sig: undefined4 FUN_00496880(void * this, undefined4 param_1, undefined4 param_2)


undefined4 __thiscall FUN_00496880(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  if (*(int *)((int)this + 0x14) == 0) {
    return 0x80004003;
  }
  puVar1 = local_64;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_14 = param_1;
  local_64[0] = 100;
  uVar2 = (**(code **)(**(int **)((int)this + 0x14) + 0x14))
                    (*(int **)((int)this + 0x14),param_2,0,0,0x400,local_64);
  return uVar2;
}

