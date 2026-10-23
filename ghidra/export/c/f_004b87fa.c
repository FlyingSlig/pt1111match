// FUNCTION: PORT1111 0x004b87fa
// name: Unwind@004b87fa
// sig: undefined Unwind@004b87fa(void)


void Unwind_004b87fa(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
    FUN_00465e40((undefined4 *)(unaff_EBP + 4));
    return;
  }
  return;
}

