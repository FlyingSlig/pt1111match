// FUNCTION: PORT1111 0x00456c30
// name: FUN_00456c30
// sig: undefined FUN_00456c30(void * this, undefined4 * param_1, int * param_2)


void __thiscall FUN_00456c30(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool local_4;
  
  piVar2 = param_2;
  piVar5 = *(int **)((int)this + 4);
  local_4 = true;
  if (*(char *)(piVar5[1] + 0x15) == '\0') {
    piVar3 = (int *)piVar5[1];
    do {
      piVar5 = piVar3;
      local_4 = *param_2 < piVar5[3];
      if (local_4) {
        piVar3 = (int *)*piVar5;
      }
      else {
        piVar3 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar3 + 0x15) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_004567c0(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00413050((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_004567c0(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}

