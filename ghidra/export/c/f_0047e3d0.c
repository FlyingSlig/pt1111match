// FUNCTION: PORT1111 0x0047e3d0
// name: FUN_0047e3d0
// sig: bool FUN_0047e3d0(void * this, undefined1 param_1, undefined4 param_2, undefined4 param_3, int param_4)


bool __thiscall
FUN_0047e3d0(void *this,undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0xc) != 0) && (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  if ((*(int *)((int)this + 0x10) != 0) && (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 8))(1);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  piVar1 = FUN_0046abb0(param_4,*(undefined4 *)((int)this + 0x14));
  *(int **)((int)this + 4) = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x54))(param_1,param_2,param_3);
  return iVar2 != 0;
}

