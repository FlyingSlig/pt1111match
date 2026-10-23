// FUNCTION: PORT1111 0x0040a710
// name: FUN_0040a710
// sig: undefined FUN_0040a710(void * this, undefined4 * param_1)


void __thiscall FUN_0040a710(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)((int)this + 0x14);
  if (piVar3 != *(int **)((int)this + 0x14)) {
    do {
      iVar1 = FUN_00414c30(DAT_004e240c);
      if (iVar1 != 0) {
        piVar2 = operator_new(0x34);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          *piVar2 = (int)&PTR_LAB_004bd540;
          piVar2[3] = param_1[3];
          piVar2[4] = param_1[4];
          piVar2[1] = param_1[1];
          piVar2[5] = param_1[5];
          piVar2[6] = param_1[6];
          piVar2[7] = param_1[7];
          piVar2[8] = param_1[8];
          piVar2[9] = param_1[9];
          piVar2[10] = param_1[10];
          piVar2[0xb] = param_1[0xb];
          piVar2[0xc] = param_1[0xc];
          piVar2[2] = param_1[2];
        }
        piVar2[1] = *(int *)(iVar1 + 0x10);
        FUN_00412e90(piVar2);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x14));
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}

