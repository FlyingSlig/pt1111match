// FUNCTION: PORT1111 0x00420440
// name: FUN_00420440
// sig: undefined FUN_00420440(void * this, undefined4 * param_1, undefined4 * param_2)


void __thiscall FUN_00420440(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char local_4;
  
  puVar2 = param_2;
  puVar4 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar3 = *(char *)((int)puVar4 + 0x11);
  local_4 = '\x01';
  puVar1 = *(undefined4 **)((int)this + 4);
  while (cVar3 == '\0') {
    local_4 = (*(code *)PTR_FUN_004dd974)(*puVar2,puVar4[3]);
    if (local_4 == '\0') {
      puVar5 = (undefined4 *)puVar4[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar4;
    }
    puVar1 = puVar4;
    puVar4 = puVar5;
    cVar3 = *(char *)((int)puVar5 + 0x11);
  }
  param_2 = puVar1;
  if (local_4 != '\0') {
    if (puVar1 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = '\x01';
      goto LAB_004204a2;
    }
    FUN_0041f1c0((int *)&param_2);
  }
  puVar4 = param_2;
  cVar3 = (*(code *)PTR_FUN_004dd974)(param_2[3],*puVar2);
  if (cVar3 == '\0') {
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_004204a2:
  puVar4 = (undefined4 *)FUN_0041fa50(this,&param_2,local_4,puVar1,puVar2);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

