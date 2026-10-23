// FUNCTION: PORT1111 0x00477930
// name: FUN_00477930
// sig: undefined FUN_00477930(int param_1)


void __fastcall FUN_00477930(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  void *this;
  int *piVar6;
  int *piVar7;
  int local_8;
  int *local_4;
  
  this = *(void **)(param_1 + 0xc);
  piVar7 = *(int **)((int)this + 4);
  piVar6 = (int *)*piVar7;
  if (piVar6 != piVar7) {
    do {
      uVar3 = piVar6[4];
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar4 = (int *)piVar6[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          piVar6 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar6 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar5 = (int *)piVar6[1];
          piVar4 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar5 = (int *)piVar6[1];
            piVar4 = piVar6;
          }
        }
      }
      sVar2 = *(short *)(uVar3 + 0x56);
      if (sVar2 != 0) {
        local_8 = (int)sVar2;
        FUN_00413aa0(this,&local_4,&local_8);
        if ((local_4 != piVar7) && ((void *)local_4[4] != (void *)0x0)) {
          FUN_00479290((void *)local_4[4],uVar3);
        }
      }
      this = *(void **)(param_1 + 0xc);
      piVar7 = *(int **)((int)this + 4);
    } while (piVar6 != piVar7);
  }
  return;
}

