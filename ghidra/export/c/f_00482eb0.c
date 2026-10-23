// FUNCTION: PORT1111 0x00482eb0
// name: FUN_00482eb0
// sig: undefined FUN_00482eb0(void * this, uint param_1)


void __thiscall FUN_00482eb0(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((*(byte *)((int)this + 0x2a0) & 2) == 0) && (iVar3 = 0, 0 < *(int *)((int)this + 0x20))) {
    piVar1 = (int *)((int)this + 0x30);
    while (*(ushort *)(*piVar1 + 0x2c) != param_1) {
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
      if (*(int *)((int)this + 0x20) <= iVar3) {
        return;
      }
    }
    iVar2 = FUN_004810c0(*(int *)((int)this + 0x2a8));
    iVar2 = iVar2 + iVar3;
    if (iVar2 < *(int *)((int)this + 0x24)) {
      if (DAT_004dd980 != 0) {
        iVar3 = FUN_004810c0(*(int *)((int)this + 0x2a8));
        iVar3 = iVar2 - iVar3;
        if ((iVar3 < 0) || (*(int *)((int)this + 0x20) <= iVar3)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + iVar3 * 4 + 0x30);
        }
        FUN_00471570(iVar3);
      }
      if (*(int *)((int)this + 0x288) == -2) {
        (**(code **)(*(int *)this + 8))();
      }
      iVar3 = FUN_004829c0(this,iVar2);
      if (*(int *)(iVar3 + 0x10) == 0) {
        if (((-1 < iVar2) && (iVar2 < *(int *)(*(int *)((int)this + 0x2ac) + 8))) &&
           (iVar3 = FUN_004829c0(this,iVar2), *(int *)(iVar3 + 0x10) == 0)) {
          (**(code **)(*(int *)this + 0x34))(iVar2);
          *(undefined4 *)(iVar3 + 0x10) = 1;
        }
        if (-1 < *(int *)((int)this + 0x288)) {
          iVar3 = FUN_00482140(this,*(int *)((int)this + 0x288));
          if (iVar3 != 0) {
            FUN_00482bb0(this,*(int *)((int)this + 0x288));
            *(int *)((int)this + 0x288) = iVar2;
            return;
          }
          iVar3 = FUN_004829c0(this,*(int *)((int)this + 0x288));
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
        *(int *)((int)this + 0x288) = iVar2;
      }
      else if ((*(byte *)((int)this + 0x2a0) & 1) == 0) {
        if ((-1 < iVar2) && (iVar3 = FUN_004829c0(this,iVar2), *(int *)(iVar3 + 0x10) != 0)) {
          (**(code **)(*(int *)this + 0x30))(iVar2);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
        *(undefined4 *)((int)this + 0x288) = 0xffffffff;
        return;
      }
    }
  }
  return;
}

