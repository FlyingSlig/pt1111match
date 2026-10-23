// FUNCTION: PORT1111 0x00496fc8
// name: FUN_00496fc8
// sig: undefined FUN_00496fc8(void)


void FUN_00496fc8(void)

{
  int unaff_EBP;
  
  FUN_0049aaa0();
  FUN_004017a0((void *)(unaff_EBP + -0x28),"invalid string position");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004017e0((void *)(unaff_EBP + -0x50),unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_004c6e2c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_004cc2d8);
}

