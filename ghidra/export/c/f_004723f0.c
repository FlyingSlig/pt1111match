// FUNCTION: PORT1111 0x004723f0
// name: FUN_004723f0
// sig: undefined4 FUN_004723f0(void * this, int param_1, undefined1 param_2, undefined1 param_3, int param_4)


undefined4 __thiscall
FUN_004723f0(void *this,int param_1,undefined1 param_2,undefined1 param_3,int param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    FUN_00405130();
  }
  if (*(int *)((int)this + 0x40) == 0) {
    return 0;
  }
  if (param_1 == 0) {
    FUN_0046eca0(this);
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    FUN_0046eca0(this);
    puVar2 = FUN_0047a9a0(*(void **)((int)this + 0x40),*(undefined4 *)(param_1 + 0x34));
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    *(undefined1 *)(puVar2[3] + 0x10) = param_2;
    *(undefined1 *)(puVar2[3] + 0x11) = param_3;
    pbVar1 = (byte *)(*(int *)((int)this + 0x40) + 0x2c);
    *pbVar1 = *pbVar1 | 0x80;
    *(int *)((int)this + 0x44) = param_1;
    FUN_00472320(this);
    if (*(int *)((int)this + 0x58) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x18))();
      return uVar3;
    }
  }
  return 1;
}

