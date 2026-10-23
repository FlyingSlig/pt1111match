// FUNCTION: PORT1111 0x004779f0
// name: FUN_004779f0
// sig: undefined4 FUN_004779f0(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_004779f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  FUN_00478a10((int)param_1);
  FUN_004788b0((int)puVar1);
  if ((*(byte *)(puVar1 + 0xb) & 2) == 0) {
    param_1 = (undefined4 *)(int)*(short *)(puVar1 + 0xd);
    FUN_004170f0(*(void **)((int)this + 0xc),(int *)&param_1);
    (**(code **)*puVar1)(1);
    return 1;
  }
  return 0;
}

