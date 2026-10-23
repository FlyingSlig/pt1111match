// FUNCTION: PORT1111 0x0041c890
// name: FUN_0041c890
// sig: uint FUN_0041c890(void * this, undefined4 * param_1)


uint __thiscall FUN_0041c890(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int aiStack_8 [2];
  
  (**(code **)(*(int *)this + 0x14))();
  FUN_00466a50((void *)((int)this + 0x48),param_1);
  uVar1 = FUN_00465e00(param_1);
  puVar2 = (undefined4 *)FUN_0044fe90(uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = FUN_0041c230(param_1);
    return (uint)(iVar3 != 0);
  }
  iVar3 = FUN_0044f160((int)puVar2,aiStack_8);
  if (iVar3 != 0) {
    return 0;
  }
  if (aiStack_8[0] == 1) {
    uVar4 = FUN_0041c520(this,puVar2);
  }
  else {
    if (*(int *)((int)this + 0x10) != 0) {
      (**(code **)(*(int *)this + 0x10))(param_1);
    }
    uVar4 = (**(code **)(*(int *)this + 0xc))(puVar2);
  }
  FUN_0044fea0(puVar2);
  return uVar4;
}

