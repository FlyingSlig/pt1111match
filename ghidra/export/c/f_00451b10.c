// FUNCTION: PORT1111 0x00451b10
// name: FUN_00451b10
// sig: bool FUN_00451b10(void * this, undefined4 * param_1)


bool __thiscall FUN_00451b10(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)this != 0) {
    FUN_0044fbf0(*(int *)this);
    FUN_0044fea0(*(void **)this);
    *(undefined4 *)this = 0;
  }
  uVar1 = FUN_00465e00(param_1);
  iVar2 = FUN_0044fe90(uVar1);
  *(int *)this = iVar2;
  return iVar2 != 0;
}

