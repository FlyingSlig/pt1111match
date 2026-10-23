// FUNCTION: PORT1111 0x0041b2f0
// name: FUN_0041b2f0
// sig: undefined4 FUN_0041b2f0(int param_1)


undefined4 FUN_0041b2f0(int param_1)

{
  void *this;
  int *piVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  if ((*(int *)(param_1 + 8) == 3) &&
     (in_EAX = *(uint *)(param_1 + 0xc), (*(byte *)(in_EAX + 8) & 1) == 0)) {
    iVar2 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
    in_EAX = 0;
    if ((iVar2 != 0) && (in_EAX = FUN_00475080(iVar2), in_EAX != 0)) {
      piVar1 = *(int **)(*(int *)(in_EAX + 0x14) + 4);
      if (((piVar1 != (int *)0x0) &&
          (in_EAX = *(int *)(*(int *)(in_EAX + 0x14) + 8) - (int)piVar1 >> 2, 0 < (int)in_EAX)) &&
         (in_EAX = 0, *piVar1 != 0)) {
        iVar2 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
        in_EAX = 0;
        if (iVar2 != 0) {
          piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 4);
          piVar3 = (int *)*piVar1;
          if (piVar3 != piVar1) {
            this = (void *)(iVar2 + 0x44);
            do {
              local_c = piVar3[2];
              local_8 = ((undefined4 *)*piVar3)[2];
              piVar3 = *(int **)*piVar3;
              local_4 = 1;
              iVar2 = FUN_0041a730(this,&local_c);
            } while (piVar3 != *(int **)(*(int *)(param_1 + 0xc) + 4));
          }
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

