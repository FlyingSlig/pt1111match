// FUNCTION: PORT1111 0x0042f440
// name: FUN_0042f440
// sig: undefined FUN_0042f440(void * this, undefined4 * param_1, char * param_2)


void __thiscall FUN_0042f440(void *this,undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  
  pcVar1 = param_2;
  puVar4 = (uint *)(param_2 + *(int *)((int)this + 0xc));
  if (*(int *)((int)this + 8) < (int)puVar4) {
    puVar5 = (uint *)(*(int *)((int)this + 8) * 2);
    if ((int)puVar5 < (int)puVar4) {
      puVar5 = puVar4;
    }
    piVar2 = FUN_00498201(*(int **)((int)this + 0x10),puVar5);
    if (piVar2 == (int *)0x0) {
      param_2 = "Memory allocation failure!";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&param_2,&DAT_004cd26c);
    }
    *(uint **)((int)this + 8) = puVar5;
    *(int **)((int)this + 0x10) = piVar2;
  }
  puVar6 = (undefined4 *)(*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc));
  for (uVar3 = (uint)pcVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = (uint)pcVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint **)((int)this + 0xc) = puVar4;
  return;
}

