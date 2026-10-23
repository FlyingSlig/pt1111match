// FUNCTION: PORT1111 0x004551c0
// name: FUN_004551c0
// sig: undefined FUN_004551c0(void)


void FUN_004551c0(void)

{
  int *piVar1;
  void *this;
  int *piVar2;
  
  piVar1 = *(int **)(*(int *)(DAT_004e240c + 0x21c) + 4);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    do {
      this = (void *)FUN_00414c30(DAT_004e240c);
      if (this != (void *)0x0) {
        FUN_00405f60(this,0);
        FUN_004137d0((int)this);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(*(int *)(DAT_004e240c + 0x21c) + 4));
  }
  return;
}

