// FUNCTION: PORT1111 0x0040151b
// name: Catch@0040151b
// sig: undefined Catch@0040151b(void)


void Catch_0040151b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

