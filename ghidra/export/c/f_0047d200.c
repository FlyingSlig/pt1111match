// FUNCTION: PORT1111 0x0047d200
// name: FUN_0047d200
// sig: int * FUN_0047d200(void * this, undefined4 param_1, undefined4 * param_2, int param_3)


int * __thiscall FUN_0047d200(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)((int)this + 0x38) == 0) {
    return (int *)0x0;
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  piVar1 = FUN_0047cfc0(this,param_2);
  (**(code **)(**(int **)((int)this + 0x34) + 0x5c))();
  if ((piVar1 == (int *)0x0) &&
     (piVar3 = (int *)**(int **)((int)this + 0x70), piVar3 != *(int **)((int)this + 0x70))) {
    do {
      piVar1 = FUN_0047cfc0((void *)piVar3[2],param_2);
      if (piVar1 != (int *)0x0) break;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x70));
  }
  (**(code **)(**(int **)((int)this + 0x34) + 0x74))(param_1,param_2,piVar1,param_3);
  if (piVar1 == (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x34) + 0x60))();
    return (int *)0x0;
  }
  FUN_0047c2f0(this,piVar1);
  iVar2 = (**(code **)(*piVar1 + 0x74))();
  if (iVar2 == 1) {
    (**(code **)(**(int **)((int)this + 0x34) + 0x60))();
    FUN_00471ba0((int)piVar1);
    FUN_0047ca30(this,(uint)*(ushort *)(piVar1 + 0xb),(uint)*(ushort *)(piVar1[0x12] + 0x1c),0,
                 param_1,param_3);
    return piVar1;
  }
  if (iVar2 == 2) {
    FUN_0047ca30(this,(uint)*(ushort *)(piVar1 + 0xb),(uint)*(ushort *)(piVar1[0x12] + 0x1c),0,
                 param_1,param_3);
  }
  *(int **)((int)this + 0x3c) = piVar1;
  piVar1[0x24] = param_3;
  return *(int **)((int)this + 0x3c);
}

