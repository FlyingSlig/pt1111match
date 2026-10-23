// FUNCTION: PORT1111 0x00477b80
// name: FUN_00477b80
// sig: undefined4 FUN_00477b80(void * this, int param_1)


undefined4 __thiscall FUN_00477b80(void *this,int param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *this_00;
  int *piVar5;
  int *piVar6;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba16b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  pvVar3 = operator_new(0xc);
  local_4 = 0;
  local_10 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    iVar4 = FUN_004748f0();
    *(int *)((int)pvVar3 + 4) = iVar4;
    *(undefined1 *)(iVar4 + 0x15) = 1;
    *(int *)(*(int *)((int)pvVar3 + 4) + 4) = *(int *)((int)pvVar3 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)pvVar3 + 4);
    *(int *)(*(int *)((int)pvVar3 + 4) + 8) = *(int *)((int)pvVar3 + 4);
    *(undefined4 *)((int)pvVar3 + 8) = 0;
  }
  *(void **)((int)this + 0xc) = pvVar3;
  local_4 = 0xffffffff;
  FUN_00466a50((void *)((int)this + 8),(undefined4 *)(param_1 + 8));
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  piVar5 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  piVar6 = (int *)*piVar5;
  if (piVar6 != piVar5) {
    do {
      this_00 = FUN_00479800(piVar6[4]);
      if (this_00 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return 0;
      }
      local_10 = (void *)(int)*(short *)(this_00 + 0xd);
      piVar5 = FUN_00417480(*(void **)((int)this + 0xc),(int *)&local_10);
      *piVar5 = (int)this_00;
      FUN_00478450(this_00,this);
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar5 = (int *)piVar6[2];
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x15);
          piVar6 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar6 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar2 = (int *)piVar6[1];
          piVar5 = piVar6;
          while ((piVar6 = piVar2, cVar1 == '\0' && (piVar5 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar2 = (int *)piVar6[1];
            piVar5 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int **)(*(int *)(param_1 + 0xc) + 4));
  }
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  FUN_00477930((int)this);
  ExceptionList = local_c;
  return 1;
}

