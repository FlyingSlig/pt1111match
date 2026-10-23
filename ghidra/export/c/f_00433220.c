// FUNCTION: PORT1111 0x00433220
// name: FUN_00433220
// sig: undefined4 FUN_00433220(int param_1)


undefined4 __fastcall FUN_00433220(int param_1)

{
  void *this;
  int iVar1;
  
  this = (void *)FUN_00414c30(DAT_004e240c);
  if (this == (void *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(param_1 + 0x14);
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    iVar1 = 0x410;
    break;
  case 1:
    iVar1 = 0x411;
    break;
  case 2:
    iVar1 = 0x412;
    break;
  case 3:
    iVar1 = 0x413;
    break;
  default:
    goto switchD_0043324d_default;
  }
  FUN_00445030(*(void **)((int)this + 0xb0),iVar1);
switchD_0043324d_default:
  FUN_00405ad0(this,-1,-1);
  FUN_004137d0((int)this);
  return 1;
}

