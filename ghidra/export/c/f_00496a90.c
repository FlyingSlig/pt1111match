// FUNCTION: PORT1111 0x00496a90
// name: FUN_00496a90
// sig: undefined4 FUN_00496a90(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)


undefined4 __thiscall
FUN_00496a90(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int *apiStack_c8 [3];
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 *puStack_b4;
  undefined *puStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 *puStack_a4;
  undefined *puStack_a0;
  undefined4 uStack_9c;
  
  uStack_9c = 0x496aa6;
  (**(code **)(*(int *)this + 4))();
  uStack_9c = 0;
  puStack_a0 = &DAT_004c4bf0;
  puVar1 = (undefined4 *)((int)this + 8);
  uStack_a8 = 0;
  iStack_ac = 0x496ab8;
  puStack_a4 = puVar1;
  iVar3 = DirectDrawCreateEx();
  if (-1 < iVar3) {
    puStack_b4 = (undefined4 *)*puVar1;
    iStack_ac = (int)this + 4;
    puStack_b0 = &DAT_004c4c00;
    uStack_b8 = 0x496ad0;
    iVar3 = (**(code **)*puStack_b4)();
    if (-1 < iVar3) {
      apiStack_c8[2] = (int *)*puVar1;
      uStack_b8 = 0x11;
      iStack_bc = param_1;
      apiStack_c8[1] = (int *)0x496ae6;
      iVar3 = (**(code **)(*apiStack_c8[2] + 0x50))();
      if (-1 < iVar3) {
        apiStack_c8[1] = (int *)0x0;
        apiStack_c8[0] = (int *)0x0;
        iVar3 = (**(code **)(*(int *)*puVar1 + 0x54))((int *)*puVar1,param_2,param_3,param_4);
        if (-1 < iVar3) {
          piVar2 = (int *)*puVar1;
          ppiVar4 = apiStack_c8;
          for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppiVar4 = (int *)0x0;
            ppiVar4 = ppiVar4 + 1;
          }
          apiStack_c8[0] = (int *)0x7c;
          apiStack_c8[1] = (int *)0x1;
          iVar3 = (**(code **)(*piVar2 + 0x18))
                            (piVar2,apiStack_c8,(undefined4 *)((int)this + 0x10),0);
          if (-1 < iVar3) {
            puVar1 = *(undefined4 **)((int)this + 0x10);
            iVar3 = (**(code **)*puVar1)(puVar1,&DAT_004c4be0,(int)this + 0xc);
            if (-1 < iVar3) {
              *(int *)((int)this + 0x1c) = param_1;
              *(undefined4 *)((int)this + 0x30) = 0;
              FUN_004968e0((int)this);
              return 0;
            }
          }
        }
      }
    }
  }
  return 0x80004005;
}

