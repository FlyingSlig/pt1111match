// FUNCTION: PORT1111 0x0044ee70
// name: FUN_0044ee70
// sig: int FUN_0044ee70(int * param_1)


int __cdecl FUN_0044ee70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
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
  uVar4 = uStack_4;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(unaff_ESI + 4))(*(undefined4 *)(unaff_ESI + 0x1c));
    if (iVar1 == 1) {
      iVar1 = 0;
      uVar4 = (uint)local_5;
    }
    else {
      iVar1 = (**(code **)(unaff_ESI + 0x18))(*(undefined4 *)(unaff_ESI + 0x1c));
      iVar1 = -(uint)(iVar1 != 0);
    }
  }
  iVar2 = uVar4 * 0x100;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(unaff_ESI + 4))(*(undefined4 *)(unaff_ESI + 0x1c));
    if (iVar1 == 1) {
      uVar4 = (uint)local_5;
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(unaff_ESI + 0x18))(*(undefined4 *)(unaff_ESI + 0x1c));
      iVar1 = -(uint)(iVar1 != 0);
    }
  }
  iVar3 = uVar4 * 0x10000;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(unaff_ESI + 4))(*(undefined4 *)(unaff_ESI + 0x1c));
    if (iVar1 == 1) {
      uVar4 = (uint)local_5;
    }
    else {
      iVar1 = (**(code **)(unaff_ESI + 0x18))(*(undefined4 *)(unaff_ESI + 0x1c));
      if (iVar1 != 0) {
        iVar1 = -1;
        goto LAB_0044ef63;
      }
    }
    *param_1 = uVar4 * 0x1000000 + uStack_4 + iVar2 + iVar3;
    return 0;
  }
LAB_0044ef63:
  *param_1 = 0;
  return iVar1;
}

