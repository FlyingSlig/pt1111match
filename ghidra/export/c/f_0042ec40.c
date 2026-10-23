// FUNCTION: PORT1111 0x0042ec40
// name: FUN_0042ec40
// sig: undefined FUN_0042ec40(void * this, void * param_1)


void __thiscall FUN_0042ec40(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (param_1 != this) {
    puVar1 = *(undefined4 **)((int)this + 4);
    puVar2 = *(undefined4 **)((int)param_1 + 4);
    puVar3 = (undefined4 *)*puVar1;
    puVar6 = (undefined4 *)*puVar2;
    while (puVar3 != puVar1) {
      if (puVar6 == puVar2) {
        return;
      }
      if ((int)puVar6[2] < (int)puVar3[2]) {
        puVar4 = (undefined4 *)*puVar6;
        FUN_00409f80(this,1);
        *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + -1;
        *(undefined4 **)puVar6[1] = puVar4;
        *(undefined4 **)puVar4[1] = puVar3;
        *(undefined4 **)puVar3[1] = puVar6;
        uVar5 = puVar3[1];
        puVar3[1] = puVar4[1];
        puVar4[1] = puVar6[1];
        puVar6[1] = uVar5;
        puVar6 = puVar4;
      }
      else {
        puVar3 = (undefined4 *)*puVar3;
      }
    }
    if (puVar6 != puVar2) {
      FUN_0042ead0(this,(int)puVar1,param_1,(int)puVar6,(int)puVar2,*(uint *)((int)param_1 + 8));
    }
  }
  return;
}

