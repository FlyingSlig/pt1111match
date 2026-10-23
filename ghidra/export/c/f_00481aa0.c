// FUNCTION: PORT1111 0x00481aa0
// name: FUN_00481aa0
// sig: undefined4 FUN_00481aa0(void * this, void * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, uint param_6, undefined4 param_7)


undefined4 __thiscall
FUN_00481aa0(void *this,void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)((int)this + 0x30) = param_3;
  *(undefined4 *)((int)this + 0x38) = param_5;
  *(undefined4 *)((int)this + 0x44) = param_7;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x74) = 1;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x40) = 1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(void **)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x68) = param_2;
  if (0 < (int)param_6) {
    piVar3 = (int *)FUN_0047cf90(param_1,param_6);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    (**(code **)(*piVar3 + 0x30))((int)this + 0x48);
  }
  if (0 < (int)*(uint *)((int)this + 0x30)) {
    piVar3 = (int *)FUN_0047d0a0(*(void **)((int)this + 0x10),*(uint *)((int)this + 0x30));
    *(int **)((int)this + 4) = piVar3;
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    FUN_00472ef0(piVar3);
  }
  if (0 < (int)*(uint *)((int)this + 0x34)) {
    piVar3 = (int *)FUN_0047d0a0(*(void **)((int)this + 0x10),*(uint *)((int)this + 0x34));
    *(int **)((int)this + 8) = piVar3;
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    FUN_00472ef0(piVar3);
  }
  piVar3 = (int *)FUN_0047d0a0(*(void **)((int)this + 0x10),*(uint *)((int)this + 0x38));
  *(int **)((int)this + 0xc) = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar1 = (int *)((int)this + 0x58);
    (**(code **)(*piVar3 + 0x30))(piVar1);
    if (*(int *)((int)this + 0x44) == 0) {
      iVar2 = *piVar1;
      *piVar1 = *(int *)((int)this + 0x48);
      *(int *)((int)this + 0x60) = *(int *)((int)this + 0x48) + (*(int *)((int)this + 0x60) - iVar2)
      ;
    }
    else {
      iVar2 = *(int *)((int)this + 0x5c);
      *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x4c);
      *(int *)((int)this + 100) = *(int *)((int)this + 0x4c) + (*(int *)((int)this + 100) - iVar2);
    }
    (**(code **)(**(int **)((int)this + 0xc) + 0x3c))
              (*piVar1,*(undefined4 *)((int)this + 0x5c),*(undefined4 *)((int)this + 0x60),
               *(undefined4 *)((int)this + 100));
    *(int *)((int)this + 0x1c) = *piVar1;
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x5c);
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x60);
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 100);
    FUN_00472ef0(*(int **)((int)this + 0xc));
  }
  if (*(int *)((int)this + 0x68) == 0) {
    *(undefined4 *)((int)this + 0x18) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)((int)this + 0x68) + 0x20);
  }
  FUN_00481930(this,0,0);
  if ((*(int **)((int)this + 4) != (int *)0x0) && (*(int *)((int)this + 8) != 0)) {
    (**(code **)(**(int **)((int)this + 4) + 0x44))(0x100);
    (**(code **)(**(int **)((int)this + 8) + 0x44))(0x100);
  }
  return 1;
}

