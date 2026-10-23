// FUNCTION: PORT1111 0x004b94fb
// name: Unwind@004b94fb
// sig: undefined Unwind@004b94fb(void)


void Unwind_004b94fb(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00465e40((undefined4 *)(unaff_EBP + 0x10));
    return;
  }
  return;
}

