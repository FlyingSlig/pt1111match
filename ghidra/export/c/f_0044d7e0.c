// FUNCTION: PORT1111 0x0044d7e0
// name: FUN_0044d7e0
// sig: undefined FUN_0044d7e0(void * this, undefined4 * param_1, void * param_2)


void __thiscall FUN_0044d7e0(void *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  puVar1 = FUN_00474930(this,(int)param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    if ((uint)puVar1[9] < 0x10) {
      pbVar2 = (byte *)(puVar1 + 4);
    }
    else {
      pbVar2 = (byte *)puVar1[4];
    }
    uVar3 = FUN_004366b0(param_2,0,*(uint *)((int)param_2 + 0x14),pbVar2,puVar1[8]);
    if (-1 < (int)uVar3) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}

