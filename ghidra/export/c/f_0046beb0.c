// FUNCTION: PORT1111 0x0046beb0
// name: FUN_0046beb0
// sig: undefined FUN_0046beb0(void * this, int param_1)


void __thiscall FUN_0046beb0(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0x30))();
    uVar2 = (**(code **)(*(int *)this + 0x38))();
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    (**(code **)(*(int *)this + 0x34))();
  }
  return;
}

