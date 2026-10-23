// FUNCTION: PORT1111 0x00479190
// name: FUN_00479190
// sig: undefined FUN_00479190(void * this, undefined4 * param_1, uint * param_2)


void __thiscall FUN_00479190(void *this,undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  bool local_8;
  undefined4 *local_4;
  
  puVar4 = *(undefined4 **)((int)this + 4);
  local_8 = true;
  if (*(char *)((int)puVar4[1] + 0x11) == '\0') {
    uVar1 = *param_2;
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      uVar2 = puVar4[3];
      bVar5 = *(uint *)(uVar2 + 0x10) < *(uint *)(uVar1 + 0x10);
      bVar6 = *(uint *)(uVar2 + 0x10) != *(uint *)(uVar1 + 0x10);
      if (!bVar6) {
        bVar5 = uVar2 < uVar1;
      }
      local_8 = !bVar5 && (bVar6 || uVar2 != uVar1);
      if (!bVar5 && (bVar6 || uVar2 != uVar1)) {
        puVar3 = (undefined4 *)*puVar4;
      }
      else {
        puVar3 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  local_4 = puVar4;
  if (local_8) {
    if (puVar4 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00478d30(this,&param_2,'\x01',puVar4,param_2);
      *param_1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_0041f1c0((int *)&local_4);
  }
  uVar1 = *(uint *)(local_4[3] + 0x10);
  uVar2 = *(uint *)(*param_2 + 0x10);
  bVar5 = uVar1 < uVar2;
  if (uVar1 == uVar2) {
    bVar5 = (uint)local_4[3] < *param_2;
  }
  if (bVar5) {
    puVar4 = (undefined4 *)FUN_00478d30(this,&param_2,local_8,puVar4,param_2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = local_4;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

