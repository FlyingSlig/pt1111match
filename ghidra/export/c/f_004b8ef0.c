// FUNCTION: PORT1111 0x004b8ef0
// name: Unwind@004b8ef0
// sig: undefined Unwind@004b8ef0(void)


void Unwind_004b8ef0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00465e40(*(undefined4 **)(unaff_EBP + 4));
    return;
  }
  return;
}

