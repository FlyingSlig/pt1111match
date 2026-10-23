// FUNCTION: PORT1111 0x004952a0
// name: FUN_004952a0
// sig: undefined FUN_004952a0(void * this, int param_1)


void __thiscall FUN_004952a0(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xc) = iVar1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    pvVar2 = operator_new(iVar1 << 4);
    *(void **)(param_1 + 8) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      piVar3 = (int *)**(int **)((int)this + 0x1c);
      uVar4 = 0;
      if (piVar3 != *(int **)((int)this + 0x1c)) {
        do {
          if (uVar4 < *(uint *)(param_1 + 0xc)) {
            *(int *)(*(int *)(param_1 + 8) + uVar4 * 4) = piVar3[2];
          }
          piVar3 = (int *)*piVar3;
          uVar4 = uVar4 + 1;
        } while (piVar3 != (int *)*(int *)((int)this + 0x1c));
      }
    }
  }
  return;
}

