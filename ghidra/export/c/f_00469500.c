// FUNCTION: PORT1111 0x00469500
// name: FUN_00469500
// sig: undefined FUN_00469500(void * this, undefined4 * param_1, ushort * param_2)


void __thiscall FUN_00469500(void *this,undefined4 *param_1,ushort *param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  bool local_4;
  
  puVar2 = param_2;
  puVar5 = *(ushort **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)*(ushort **)(puVar5 + 2) + 0x15) == '\0') {
    puVar3 = *(ushort **)(puVar5 + 2);
    do {
      puVar5 = puVar3;
      local_4 = *param_2 < puVar5[6];
      if (local_4) {
        puVar3 = *(ushort **)puVar5;
      }
      else {
        puVar3 = *(ushort **)(puVar5 + 4);
      }
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (ushort *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)
               FUN_00469350(this,&param_2,'\x01',(undefined4 *)puVar5,(undefined4 *)puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00413050((int *)&param_2);
  }
  if (param_2[6] < *puVar2) {
    puVar4 = (undefined4 *)
             FUN_00469350(this,&param_2,local_4,(undefined4 *)puVar5,(undefined4 *)puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}

