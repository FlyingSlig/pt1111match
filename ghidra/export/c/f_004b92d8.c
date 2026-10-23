// FUNCTION: PORT1111 0x004b92d8
// name: Unwind@004b92d8
// sig: undefined Unwind@004b92d8(void)


void Unwind_004b92d8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    FUN_00465e40(*(undefined4 **)(unaff_EBP + 4));
    return;
  }
  return;
}

