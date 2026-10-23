// FUNCTION: PORT1111 0x0047eb20
// name: FUN_0047eb20
// sig: undefined FUN_0047eb20(void * this, void * param_1)


void __thiscall FUN_0047eb20(void *this,void *param_1)

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this_00 = param_1;
  FUN_0048a210(param_1,(undefined4 *)((int)this + 0x30));
  FUN_0048a1b0(this_00,(int)this + 0x34);
  FUN_0048a1b0(this_00,(int)this + 0x24);
  FUN_0048a1b0(this_00,(int)this + 0x28);
  FUN_0048a1d0(this_00,(int)this + 0x40);
  FUN_0048a1d0(this_00,(int)this + 0x42);
  FUN_0048a1b0(this_00,(int)this + 0x2c);
  param_1 = *(void **)(*(int *)((int)this + 4) + 0xc);
  FUN_0048a1b0(this_00,&param_1);
  if (*(int *)((int)this + 0x48) == 0) {
    param_1 = (void *)0x0;
  }
  else {
    param_1 = (void *)((*(int *)((int)this + 0x4c) - *(int *)((int)this + 0x48)) / 0xc);
  }
  FUN_0048a1b0(this_00,&param_1);
  iVar1 = *(int *)((int)this + 0x48);
  if (iVar1 != *(int *)((int)this + 0x4c)) {
    do {
      FUN_0048a1b0(this_00,iVar1);
      FUN_0048a1b0(this_00,iVar1 + 4);
      iVar1 = iVar1 + 0xc;
    } while (iVar1 != *(int *)((int)this + 0x4c));
  }
  if (*(int *)((int)this + 0x58) == 0) {
    param_1 = (void *)0x0;
  }
  else {
    param_1 = (void *)((*(int *)((int)this + 0x5c) - *(int *)((int)this + 0x58)) / 0x14);
  }
  FUN_0048a1b0(this_00,&param_1);
  puVar2 = *(undefined4 **)((int)this + 0x58);
  if (puVar2 != *(undefined4 **)((int)this + 0x5c)) {
    do {
      local_10 = *puVar2;
      local_c = puVar2[1];
      local_8 = puVar2[2];
      local_4 = puVar2[3];
      FUN_0048a230(this_00,&local_10);
      FUN_0048a1d0(this_00,puVar2 + 4);
      FUN_0048a1d0(this_00,(int)puVar2 + 0x12);
      puVar2 = puVar2 + 5;
    } while (puVar2 != *(undefined4 **)((int)this + 0x5c));
  }
  FUN_0048a230(this_00,(int)this + 0x68);
  local_14 = 0;
  if (*(int *)((int)this + 4) != 0) {
    local_14 = *(undefined4 *)(*(int *)((int)this + 4) + 0x18);
  }
  FUN_0048a1b0(this_00,&local_14);
  return;
}

