// FUNCTION: PORT1111 0x00452360
// name: FUN_00452360
// sig: undefined4 FUN_00452360(undefined4 * param_1)


undefined4 __fastcall FUN_00452360(undefined4 *param_1)

{
  void *this;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  this = (void *)FUN_00468ef0(DAT_004e2b14,4);
  if (this != (void *)0x0) {
    *param_1 = this;
    piVar1 = (int *)FUN_0047cf90(this,2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x30))();
      FUN_004534f0(param_1 + 5,param_1[3] - param_1[1],param_1[4] - param_1[2],0,0);
      uVar2 = FUN_0047d060(this,3);
      param_1[0x21] = uVar2;
      if (uVar2 != 0) {
        uVar2 = FUN_0047d020(this,1);
        param_1[0x22] = uVar2;
        if (uVar2 != 0) {
          piVar1 = (int *)FUN_0047cf90(this,9);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x30))();
            FUN_004534f0(param_1 + 0x15,param_1[0x13] - param_1[0x11],param_1[0x14] - param_1[0x12],
                         0,0);
            iVar4 = 0;
            piVar1 = param_1 + 0x23;
            while( true ) {
              piVar3 = (int *)FUN_0047d0a0(this,iVar4 + 10);
              *piVar1 = (int)piVar3;
              if (piVar3 == (int *)0x0) break;
              (**(code **)(*piVar3 + 0x44))();
              FUN_00472ef0((int *)*piVar1);
              FUN_00466af0(&stack0xffffffe4,&DAT_004c462c,0xffffffff);
              FUN_00452100(*piVar1);
              iVar4 = iVar4 + 1;
              piVar1 = piVar1 + 1;
              if (8 < iVar4) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

