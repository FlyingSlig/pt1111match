// FUNCTION: PORT1111 0x0047d2f0
// name: FUN_0047d2f0
// sig: undefined FUN_0047d2f0(void * this, undefined4 param_1, undefined4 * param_2)


void __thiscall FUN_0047d2f0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)((int)this + 0x38) != 0) {
    (**(code **)(**(int **)((int)this + 0x34) + 0x60))();
    piVar1 = FUN_0047cfc0(this,param_2);
    if ((piVar1 == (int *)0x0) &&
       (piVar3 = (int *)**(int **)((int)this + 0x70), piVar3 != *(int **)((int)this + 0x70))) {
      do {
        piVar1 = FUN_0047cfc0((void *)piVar3[2],param_2);
        if (piVar1 != (int *)0x0) break;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)((int)this + 0x70));
    }
    (**(code **)(**(int **)((int)this + 0x34) + 0x78))
              (param_1,param_2,*(undefined4 *)((int)this + 0x3c));
    piVar3 = *(int **)((int)this + 0x3c);
    if (piVar3 != (int *)0x0) {
      if ((piVar1 == (int *)0x0) || (piVar1 != piVar3)) {
        (**(code **)(*piVar3 + 0x78))();
      }
      else {
        iVar2 = (**(code **)(*piVar3 + 0x78))();
        if (iVar2 == 2) {
          FUN_0047ca30(this,(uint)*(ushort *)(piVar1 + 0xb),(uint)*(ushort *)(piVar1[0x12] + 0x1c),0
                       ,param_1,*(undefined4 *)(*(int *)((int)this + 0x3c) + 0x90));
          *(undefined4 *)((int)this + 0x3c) = 0;
          return;
        }
      }
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
  }
  return;
}

