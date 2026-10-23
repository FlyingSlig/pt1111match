// FUNCTION: PORT1111 0x00467680
// name: FUN_00467680
// sig: undefined FUN_00467680(void * this, undefined4 param_1, undefined4 param_2)


void __thiscall FUN_00467680(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  puVar3 = local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_14 = param_1;
  local_64[0] = 100;
  uVar1 = (**(code **)(**(int **)((int)this + 0x2c) + 0x14))
                    (*(int **)((int)this + 0x2c),param_2,0,0,0x400,local_64);
  *(undefined4 *)((int)this + 0x28) = uVar1;
  return;
}

