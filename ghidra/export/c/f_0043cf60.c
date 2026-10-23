// FUNCTION: PORT1111 0x0043cf60
// name: FUN_0043cf60
// sig: undefined FUN_0043cf60(void * this, int param_1)


void __thiscall FUN_0043cf60(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7e41;
  local_c = ExceptionList;
  iVar5 = *(int *)((int)this + 0xc) + param_1;
  ExceptionList = &local_c;
  *(int *)((int)this + 0xc) = iVar5;
  if ((*(int *)((int)this + 0x10) == 0) && (iVar5 == *(int *)((int)this + 8))) {
    iVar5 = FUN_004147d0(*(int *)((int)this + 4));
    piVar4 = (int *)**(int **)((int)this + 0x20);
    if (piVar4 != *(int **)((int)this + 0x20)) {
      do {
        piVar1 = (int *)FUN_00414c30(DAT_004e240c);
        piVar6 = (int *)0x0;
        if (piVar1 != (int *)0x0) {
          if (*(int *)((int)this + 0x14) == 0) {
            iVar3 = *(int *)(DAT_004e26f0 + *(int *)((int)this + 0x18) * 4);
            if (*(int *)(iVar3 + 0x48) <= *(int *)(iVar3 + 0x4c) + *(int *)(iVar3 + 0x44))
            goto LAB_0043d0dc;
            puVar2 = operator_new(0x34);
            local_4 = 1;
            if (puVar2 != (undefined4 *)0x0) {
              piVar6 = FUN_004306b0(puVar2);
            }
            piVar6[0xc] = 1;
            piVar6[5] = 0;
            piVar6[1] = piVar4[2];
            piVar6[6] = *(int *)((int)this + 4);
            piVar6[7] = 0;
            piVar6[10] = 1;
            this_00 = *(void **)(DAT_004e26f0 + *(int *)((int)this + 0x18) * 4);
            local_4 = 0xffffffff;
          }
          else {
            puVar2 = operator_new(0x38);
            local_4 = 0;
            if (puVar2 != (undefined4 *)0x0) {
              piVar6 = FUN_004332b0(puVar2);
            }
            piVar6[0xc] = 1;
            piVar6[5] = *(int *)(iVar5 + 0x14);
            piVar6[1] = piVar4[2];
            local_4 = 0xffffffff;
            iVar3 = (**(code **)(*piVar1 + 0x88))();
            piVar6[6] = *(int *)(iVar3 + 0x34);
            piVar6[7] = 0;
            piVar6[8] = 0;
            piVar6[9] = 0;
            piVar6[10] = 1;
            piVar6[0xb] = 1;
            this_00 = *(void **)(DAT_004e26f0 + *(int *)((int)this + 0x18) * 4);
          }
          FUN_00423080(this_00,iVar5,0,1);
          FUN_00412e90(piVar6);
        }
LAB_0043d0dc:
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)((int)this + 0x20));
    }
    *(undefined4 *)((int)this + 0x10) = 1;
    puVar2 = operator_new(0x34);
    local_4 = 2;
    if (puVar2 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_004305e0(puVar2);
    }
    piVar4[1] = *(int *)((int)this + 0x18);
    local_4 = 0xffffffff;
    FUN_00412e90(piVar4);
  }
  ExceptionList = local_c;
  return;
}

