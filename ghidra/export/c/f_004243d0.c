// FUNCTION: PORT1111 0x004243d0
// name: FUN_004243d0
// sig: undefined FUN_004243d0(void * this, undefined4 * param_1, char * param_2)


void __thiscall FUN_004243d0(void *this,undefined4 *param_1,char *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x10) < (int)(param_2 + *(int *)((int)this + 0x14))) {
    param_2 = "Unexpected number of byte.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_2,&DAT_004cd26c);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x14));
  for (uVar1 = (uint)param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar1 = (uint)param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  *(char **)((int)this + 0x14) = param_2 + *(int *)((int)this + 0x14);
  return;
}

