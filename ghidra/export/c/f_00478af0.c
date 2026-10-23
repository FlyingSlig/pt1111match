// FUNCTION: PORT1111 0x00478af0
// name: FUN_00478af0
// sig: undefined FUN_00478af0(void * this, uint param_1)


void __thiscall FUN_00478af0(void *this,uint param_1)

{
  short sVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  
  if ((*(byte *)((int)this + 0x2c) & 0x20) != 0) {
    sVar1 = *(short *)((int)this + 0x52);
    if ((*(byte *)((int)this + 0x2c) & 4) != 0) {
      if (sVar1 != -1) {
        *(short *)((int)this + 0x2e) = sVar1;
        FUN_0041f5e0(this);
        *(undefined4 *)((int)this + 0x4c) = 0;
        *(undefined2 *)((int)this + 0x52) = 0xffff;
      }
      DVar3 = GetTickCount();
      *(DWORD *)((int)this + 0x48) = DVar3;
      *(undefined2 *)((int)this + 0x50) = *(undefined2 *)((int)this + 0x2e);
      if ((*(uint *)((int)this + 0x28) & 0x400) == 0) {
        return;
      }
      if ((*(uint *)((int)this + 0x28) & 0x100) == 0) {
        return;
      }
      FUN_00478ab0((int)this);
      return;
    }
    if (sVar1 == -1) {
      if (*(uint *)((int)this + 0x48) < param_1) {
        iVar5 = MulDiv(param_1 - *(uint *)((int)this + 0x48),(uint)*(ushort *)((int)this + 0x58),
                       DAT_004dd978);
        iVar5 = iVar5 + *(short *)((int)this + 0x50);
      }
      else {
        iVar5 = (int)*(short *)((int)this + 0x50);
        DVar3 = GetTickCount();
        *(DWORD *)((int)this + 0x48) = DVar3;
      }
    }
    else {
      iVar5 = (int)sVar1;
      *(undefined4 *)((int)this + 0x4c) = 0;
      *(undefined2 *)((int)this + 0x52) = 0xffff;
      DVar3 = GetTickCount();
      *(DWORD *)((int)this + 0x48) = DVar3;
      *(short *)((int)this + 0x50) = sVar1;
    }
    iVar2 = *(int *)((int)this + 0x4c);
    if (iVar5 == *(short *)((int)this + 0x2e)) {
      return;
    }
    iVar4 = (int)*(short *)((int)this + 0x54);
    if (iVar4 < iVar5) {
      if ((*(byte *)((int)this + 0x28) & 0x10) == 0) {
        iVar4 = FUN_00478ab0((int)this);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = (int)*(short *)((int)this + 0x54);
        if (iVar5 <= iVar4) {
          if (*(short *)((int)this + 0x2e) == iVar5) {
            return;
          }
          goto LAB_00478be4;
        }
      }
      *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xf7;
      iVar5 = iVar5 % (iVar4 + 1);
      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
      DVar3 = GetTickCount();
      *(DWORD *)((int)this + 0x48) = DVar3;
      *(short *)((int)this + 0x50) = (short)iVar5;
    }
    if (*(short *)((int)this + 0x2e) != iVar5) {
LAB_00478be4:
      *(short *)((int)this + 0x2e) = (short)iVar5;
      FUN_0041f5e0(this);
      return;
    }
    if (*(int *)((int)this + 0x4c) != iVar2) {
      FUN_0041f5e0(this);
    }
  }
  return;
}

