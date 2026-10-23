// FUNCTION: PORT1111 0x004148c0
// name: FUN_004148c0
// sig: undefined4 FUN_004148c0(void * this, int * param_1)


undefined4 __thiscall FUN_004148c0(void *this,int *param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_4;
  
  local_4 = **(int **)((int)this + 8);
  if ((int *)local_4 != *(int **)((int)this + 8)) {
    do {
      if (*(undefined4 **)(local_4 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4 + 0x10))(1);
      }
      FUN_00413730(&local_4);
    } while (local_4 != *(int *)((int)this + 8));
  }
  pvVar2 = *(void **)(*(int *)((int)this + 8) + 4);
  if (*(char *)((int)pvVar2 + 0x15) != '\0') {
    *(int *)(*(int *)((int)this + 8) + 4) = *(int *)((int)this + 8);
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 8);
    *(int *)(*(int *)((int)this + 8) + 8) = *(int *)((int)this + 8);
    iVar6 = *(int *)((int)this + 0x18);
    while( true ) {
      if (iVar6 == 0) {
        puVar7 = *(undefined4 **)((int)this + 0x14);
        pvVar2 = (void *)*puVar7;
        *puVar7 = puVar7;
        *(int *)(*(int *)((int)this + 0x14) + 4) = *(int *)((int)this + 0x14);
        *(undefined4 *)((int)this + 0x18) = 0;
        if (pvVar2 == *(void **)((int)this + 0x14)) {
          (**(code **)(*param_1 + 4))(4);
          iVar6 = FUN_00424310((int)param_1);
          if (0 < iVar6) {
            do {
              (**(code **)(*param_1 + 8))();
              puVar7 = (undefined4 *)FUN_00424310((int)param_1);
              if (-1 < (int)puVar7) {
                puVar7 = FUN_00413b80(puVar7);
                if (puVar7 != (undefined4 *)0x0) {
                  FUN_00412920(puVar7,(char *)param_1);
                }
                FUN_004242c0((int)param_1);
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          piVar8 = (int *)**(int **)((int)this + 8);
          if (piVar8 != *(int **)((int)this + 8)) {
            do {
              if ((int *)piVar8[4] != (int *)0x0) {
                (**(code **)(*(int *)piVar8[4] + 0x90))();
              }
              if (*(char *)((int)piVar8 + 0x15) == '\0') {
                piVar3 = (int *)piVar8[2];
                if (*(char *)((int)piVar3 + 0x15) == '\0') {
                  cVar1 = *(char *)(*piVar3 + 0x15);
                  piVar8 = piVar3;
                  piVar3 = (int *)*piVar3;
                  while (cVar1 == '\0') {
                    cVar1 = *(char *)(*piVar3 + 0x15);
                    piVar8 = piVar3;
                    piVar3 = (int *)*piVar3;
                  }
                }
                else {
                  cVar1 = *(char *)(piVar8[1] + 0x15);
                  piVar4 = (int *)piVar8[1];
                  piVar3 = piVar8;
                  while ((piVar8 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar8[2]))) {
                    cVar1 = *(char *)(piVar8[1] + 0x15);
                    piVar4 = (int *)piVar8[1];
                    piVar3 = piVar8;
                  }
                }
              }
            } while (piVar8 != *(int **)((int)this + 8));
          }
          piVar8 = (int *)**(int **)((int)this + 0x14);
          if (piVar8 != *(int **)((int)this + 0x14)) {
            do {
              (**(code **)(*(int *)piVar8[2] + 0x4c))();
              piVar8 = (int *)*piVar8;
            } while (piVar8 != (int *)*(int *)((int)this + 0x14));
          }
          piVar8 = (int *)**(int **)((int)this + 8);
          if (piVar8 != *(int **)((int)this + 8)) {
            do {
              piVar3 = piVar8 + 4;
              if (*(char *)((int)piVar8 + 0x15) == '\0') {
                piVar4 = (int *)piVar8[2];
                if (*(char *)((int)piVar4 + 0x15) == '\0') {
                  cVar1 = *(char *)(*piVar4 + 0x15);
                  piVar8 = piVar4;
                  piVar4 = (int *)*piVar4;
                  while (cVar1 == '\0') {
                    cVar1 = *(char *)(*piVar4 + 0x15);
                    piVar8 = piVar4;
                    piVar4 = (int *)*piVar4;
                  }
                }
                else {
                  cVar1 = *(char *)(piVar8[1] + 0x15);
                  piVar5 = (int *)piVar8[1];
                  piVar4 = piVar8;
                  while ((piVar8 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar8[2]))) {
                    cVar1 = *(char *)(piVar8[1] + 0x15);
                    piVar5 = (int *)piVar8[1];
                    piVar4 = piVar8;
                  }
                }
              }
              if ((int *)*piVar3 != (int *)0x0) {
                (**(code **)(*(int *)*piVar3 + 0x4c))();
              }
            } while (piVar8 != *(int **)((int)this + 8));
          }
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvVar2);
      }
      puVar7 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x14) + 4) + 8);
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)(1);
      }
      piVar8 = (int *)(*(int **)((int)this + 0x14))[1];
      if (piVar8 != *(int **)((int)this + 0x14)) break;
      iVar6 = *(int *)((int)this + 0x18);
    }
    *(int *)piVar8[1] = *piVar8;
    *(int *)(*piVar8 + 4) = piVar8[1];
                    /* WARNING: Subroutine does not return */
    _free(piVar8);
  }
  FUN_004137f0(*(void **)((int)pvVar2 + 8));
                    /* WARNING: Subroutine does not return */
  _free(pvVar2);
}

