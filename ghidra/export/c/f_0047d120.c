// FUNCTION: PORT1111 0x0047d120
// name: FUN_0047d120
// sig: undefined FUN_0047d120(void * this, undefined4 * param_1)


void __thiscall FUN_0047d120(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_0047cfc0(this,param_1);
  if ((piVar1 == (int *)0x0) &&
     (piVar2 = (int *)**(int **)((int)this + 0x70), piVar2 != *(int **)((int)this + 0x70))) {
    do {
      piVar1 = FUN_0047cfc0((void *)piVar2[2],param_1);
      if (piVar1 != (int *)0x0) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x70));
  }
  if ((*(int *)((int)this + 0x38) != 0) && (piVar2 = *(int **)((int)this + 0x40), piVar1 != piVar2))
  {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x84))();
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    if (piVar1 == (int *)0x0) goto LAB_0047d1af;
    (**(code **)(**(int **)((int)this + 0x34) + 0x94))(piVar1);
    (**(code **)(*piVar1 + 0x80))();
    *(int **)((int)this + 0x40) = piVar1;
  }
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0047d1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_004e2b20 + 0xc))();
    return;
  }
LAB_0047d1af:
  (**(code **)(*DAT_004e2b20 + 4))();
                    /* WARNING: Could not recover jumptable at 0x0047d1ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x34) + 0x94))();
  return;
}

