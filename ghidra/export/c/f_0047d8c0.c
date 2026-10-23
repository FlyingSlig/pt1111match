// FUNCTION: PORT1111 0x0047d8c0
// name: FUN_0047d8c0
// sig: undefined FUN_0047d8c0(void * this, undefined4 param_1)


void __thiscall FUN_0047d8c0(void *this,undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  if (*(int *)((int)this + 0x18) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x24) + 0x814) = param_1;
    bVar2 = false;
    if (*(int *)((int)this + 0x38) == 0) {
      FUN_0047c4a0((int)this);
      piVar3 = (int *)**(int **)((int)this + 0x70);
      if (piVar3 != *(int **)((int)this + 0x70)) {
        do {
          FUN_0047c4a0(piVar3[2]);
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)*(int *)((int)this + 0x70));
      }
      bVar2 = false;
      if (*(int *)((int)this + 0x38) == 0) {
        bVar2 = true;
        *(undefined4 *)((int)this + 0x38) = 1;
        if (*(int *)((int)this + 0x78) == 0) {
          (**(code **)(**(int **)((int)this + 0x34) + 0x98))();
        }
        piVar3 = (int *)**(int **)((int)this + 0x70);
        if (piVar3 != *(int **)((int)this + 0x70)) {
          do {
            iVar1 = piVar3[2];
            *(undefined4 *)(iVar1 + 0x38) = 1;
            if (*(int *)(iVar1 + 0x78) == 0) {
              (**(code **)(**(int **)(iVar1 + 0x34) + 0x98))();
            }
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)*(int *)((int)this + 0x70));
        }
        if (((*(uint *)((int)this + 0x20) & 2) != 0) && (*(int *)((int)this + 0x7c) != 0)) {
          FUN_00488a60(*(int *)((int)this + 0x7c));
        }
        (**(code **)(**(int **)((int)this + 0x28) + 0x14))();
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0x18))(0);
    }
    *(undefined4 *)(*(int *)((int)this + 0x24) + 0x814) = 0;
    FUN_0047d6a0(this);
    if ((bVar2) && (*(int *)((int)this + 0x78) == 0)) {
      (**(code **)(**(int **)((int)this + 0x34) + 0x9c))();
    }
  }
  return;
}

