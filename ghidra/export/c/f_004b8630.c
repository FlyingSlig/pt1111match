// FUNCTION: PORT1111 0x004b8630
// name: Unwind@004b8630
// sig: undefined Unwind@004b8630(void)


void Unwind_004b8630(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FUN_00465e40((undefined4 *)(unaff_EBP + -0x14));
    return;
  }
  return;
}

