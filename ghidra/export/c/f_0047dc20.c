// FUNCTION: PORT1111 0x0047dc20
// name: FUN_0047dc20
// sig: undefined FUN_0047dc20(void * this, void * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047dc20(void *this,void *param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_c;
  int local_8;
  int *local_4;
  
  this_00 = param_1;
  if (*(int *)((int)param_1 + 8) == 0) {
    FUN_0048a1d0(param_1,(int)this + 0x1c);
    FUN_0048a210(this_00,(undefined4 *)((int)this + 0x10));
    FUN_0048a1b0(this_00,(int)this + 0x9c);
    FUN_0048a210(this_00,(undefined4 *)((int)this + 0x14));
    FUN_0048a210(this_00,(undefined4 *)((int)this + 0x80));
    FUN_0048a250(this_00,(int)this + 0x94);
    FUN_0048a210(this_00,(undefined4 *)((int)this + 0x30));
    param_1 = *(void **)((int)this + 0x90);
    FUN_0048a1b0(this_00,&param_1);
    piVar2 = (int *)**(int **)((int)this + 0x8c);
    if (piVar2 != *(int **)((int)this + 0x8c)) {
      do {
        local_c = *(undefined4 *)(piVar2[2] + 0x28);
        FUN_0048a1b0(this_00,&local_c);
        (**(code **)(*(int *)piVar2[2] + 0x20))(this_00);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)((int)this + 0x8c));
      return;
    }
  }
  else {
    FUN_0048a130(param_1,(int)this + 0x1c);
    FUN_0048a150(this_00,(int)this + 0x10);
    FUN_0048a110(this_00,(int)this + 0x9c);
    FUN_0048a150(this_00,(int)this + 0x14);
    FUN_0048a150(this_00,(int)this + 0x80);
    FUN_0048a190(this_00,(int)this + 0x94);
    FUN_0048a150(this_00,(int)this + 0x30);
    FUN_0048a110(this_00,&param_1);
    *(undefined4 *)((int)this + 8) = 0;
    local_8 = 0;
    if (0 < (int)param_1) {
      do {
        FUN_0048a110(this_00,&local_c);
        piVar2 = FUN_00473640(local_c);
        local_4 = piVar2;
        (**(code **)(*piVar2 + 0x20))(this_00);
        (**(code **)(*piVar2 + 0xc))(this);
        uVar3 = (uint)*(ushort *)(piVar2 + 0xb);
        if ((uint)*(ushort *)(piVar2 + 0xb) < *(uint *)((int)this + 8)) {
          uVar3 = *(uint *)((int)this + 8);
        }
        _DAT_004e2c60 = piVar2;
        *(uint *)((int)this + 8) = uVar3;
        iVar1 = *(int *)((int)this + 0x8c);
        iVar4 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_4);
        FUN_0047db80((void *)((int)this + 0x88),1);
        *(int *)(iVar1 + 4) = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        local_8 = local_8 + 1;
      } while (local_8 < (int)param_1);
    }
  }
  return;
}

