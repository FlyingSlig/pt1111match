// FUNCTION: PORT1111 0x0040acb5
// name: Catch@0040acb5
// sig: undefined Catch@0040acb5(void)


void Catch_0040acb5(void)

{
  int *piVar1;
  void *this;
  int unaff_EBP;
  int *piVar2;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  piVar1 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != piVar1) {
    this = *(void **)(unaff_EBP + -0x14);
    do {
      FUN_00409c70(this,(int *)(unaff_EBP + 0xc),*(int **)(*(int *)(unaff_EBP + 8) + 4));
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

