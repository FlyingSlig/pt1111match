// FUNCTION: PORT1111 0x0040b530
// name: FUN_0040b530
// sig: undefined FUN_0040b530(int param_1)


void __fastcall FUN_0040b530(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *local_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  local_c = (int *)**(int **)(param_1 + 8);
  if (local_c != *(int **)(param_1 + 8)) {
    do {
      piVar1 = local_c;
      puVar3 = (undefined4 *)local_c[4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar4 = auStack_4;
LAB_0040b586:
        puVar3 = (undefined4 *)FUN_0040b000((void *)(param_1 + 4),puVar4,piVar1);
        local_c = (int *)*puVar3;
      }
      else {
        if (puVar3[2] != 0) {
          (**(code **)*puVar3)(1);
          puVar4 = auStack_8;
          goto LAB_0040b586;
        }
        iVar2 = FUN_0040a6a0((int)puVar3);
        if (iVar2 == 0) {
          FUN_0040abe0(piVar1[4]);
        }
        FUN_00413730((int *)&local_c);
      }
    } while (local_c != *(int **)(param_1 + 8));
  }
  return;
}

