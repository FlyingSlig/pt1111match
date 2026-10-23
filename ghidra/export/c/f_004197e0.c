// FUNCTION: PORT1111 0x004197e0
// name: FUN_004197e0
// sig: undefined FUN_004197e0(void * this, undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)


void __thiscall FUN_004197e0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar2 = param_2;
    while (param_3 != puVar1) {
      puVar3 = param_3 + 7;
      puVar5 = puVar2 + 7;
      puVar6 = param_3;
      puVar7 = puVar2;
      for (iVar4 = 7; puVar2 = puVar5, param_3 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}

