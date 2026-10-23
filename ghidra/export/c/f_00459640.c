// FUNCTION: PORT1111 0x00459640
// name: FUN_00459640
// sig: undefined4 FUN_00459640(void * this, void * param_1)


undefined4 __thiscall FUN_00459640(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_00466240(param_1,"=");
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 8) = 0;
    return 1;
  }
  iVar1 = thunk_FUN_00466240(param_1,"<>");
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 8) = 5;
    return 1;
  }
  iVar1 = thunk_FUN_00466240(param_1,">");
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 8) = 1;
    return 1;
  }
  iVar1 = thunk_FUN_00466240(param_1,"<");
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 8) = 2;
    return 1;
  }
  iVar1 = thunk_FUN_00466240(param_1,">=");
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 8) = 3;
    return 1;
  }
  iVar1 = thunk_FUN_00466240(param_1,"<=");
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 8) = 4;
    return 1;
  }
  return 0;
}

