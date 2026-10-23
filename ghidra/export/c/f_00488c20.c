// FUNCTION: PORT1111 0x00488c20
// name: FUN_00488c20
// sig: undefined FUN_00488c20(void)


/* WARNING: Removing unreachable block (ram,0x00488c2b) */

void FUN_00488c20(void)

{
  int iVar1;
  
  iVar1 = cpuid_Version_info(1);
  DAT_004e2c98 = (uint)((*(uint *)(iVar1 + 8) & 0x800000) != 0);
  return;
}

