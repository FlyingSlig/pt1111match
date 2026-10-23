// FUNCTION: PORT1111 0x0041ca0b
// name: FUN_0041ca0b
// sig: undefined4 FUN_0041ca0b(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0041ca0b(void)

{
  uint uVar1;
  uint unaff_EBX;
  void *unaff_ESI;
  int unaff_EDI;
  undefined4 *in_stack_00000168;
  uint *in_stack_0000016c;
  
  uVar1 = FUN_0044f970(unaff_EDI,(int)unaff_ESI,unaff_EBX);
  if (uVar1 != 0) {
    *in_stack_00000168 = unaff_ESI;
    *in_stack_0000016c = unaff_EBX;
    FUN_0044fbf0(unaff_EDI);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_ESI);
}

