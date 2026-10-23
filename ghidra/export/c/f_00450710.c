// FUNCTION: PORT1111 0x00450710
// name: FUN_00450710
// sig: int FUN_00450710(int * param_1)


int __cdecl FUN_00450710(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  uint uVar2;
  undefined1 local_5;
  undefined4 uStack_4;
  
  iVar1 = (**(code **)(unaff_ESI + 4))(*(undefined4 *)(unaff_ESI + 0x1c));
  if (iVar1 == 1) {
    uStack_4 = (uint)local_5;
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(unaff_ESI + 0x18))(*(undefined4 *)(unaff_ESI + 0x1c));
    iVar1 = -(uint)(iVar1 != 0);
  }
  if (iVar1 == 0) {
    iVar1 = (**(code **)(unaff_ESI + 4))(*(undefined4 *)(unaff_ESI + 0x1c));
    if (iVar1 == 1) {
      uVar2 = (uint)local_5;
    }
    else {
      iVar1 = (**(code **)(unaff_ESI + 0x18))(*(undefined4 *)(unaff_ESI + 0x1c));
      uVar2 = uStack_4;
      if (iVar1 != 0) {
        iVar1 = -1;
        goto LAB_0045078f;
      }
    }
    *param_1 = uVar2 * 0x100 + uStack_4;
    return 0;
  }
LAB_0045078f:
  *param_1 = 0;
  return iVar1;
}

