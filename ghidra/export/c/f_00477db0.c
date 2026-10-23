// FUNCTION: PORT1111 0x00477db0
// name: FUN_00477db0
// sig: undefined4 FUN_00477db0(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_00477db0(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba1b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_0048a150(param_1,(int)this + 8);
  FUN_0048a110(this_00,(int)this + 4);
  FUN_0048a110(this_00,&param_1);
  puVar1 = operator_new(0xc);
  iVar4 = 0;
  local_4 = 0;
  local_10 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_004748f0();
    puVar1[1] = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(undefined4 *)(puVar1[1] + 4) = puVar1[1];
    *(undefined4 *)puVar1[1] = puVar1[1];
    *(undefined4 *)(puVar1[1] + 8) = puVar1[1];
    puVar1[2] = 0;
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0xc) = puVar1;
  if (0 < (int)param_1) {
    do {
      local_10 = operator_new(100);
      local_4 = 1;
      if (local_10 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_0040d150(local_10);
      }
      local_4 = 0xffffffff;
      iVar2 = FUN_004797d0(puVar1,this_00);
      if (iVar2 == 0) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        ExceptionList = local_c;
        return 0;
      }
      FUN_00478450(puVar1,this);
      local_10 = (undefined4 *)(int)*(short *)(puVar1 + 0xd);
      piVar3 = FUN_00417480(*(void **)((int)this + 0xc),(int *)&local_10);
      *piVar3 = (int)puVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1);
  }
  FUN_004778b0((int)this);
  ExceptionList = local_c;
  return 1;
}

