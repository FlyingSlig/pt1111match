// FUNCTION: PORT1111 0x00452150
// name: FUN_00452150
// sig: undefined4 FUN_00452150(int * param_1)


undefined4 __fastcall FUN_00452150(int *param_1)

{
  void *this;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  void *this_00;
  
  this = (void *)FUN_00468ef0(DAT_004e2b14,2);
  if ((this != (void *)0x0) && (piVar1 = (int *)FUN_0047cf90(this,2), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(param_1);
    FUN_004534f0(param_1 + 4,param_1[2] - *param_1,param_1[3] - param_1[1],0,0);
    uVar2 = FUN_0047d060(this,3);
    param_1[0x10] = uVar2;
    if (uVar2 != 0) {
      uVar2 = FUN_0047d020(this,1);
      param_1[0x11] = uVar2;
      if (uVar2 != 0) {
        uVar2 = 5;
        piVar1 = param_1 + 0x13;
        while( true ) {
          piVar3 = (int *)FUN_0047d020(this,uVar2 - 1);
          piVar1[-1] = (int)piVar3;
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          FUN_0046ff40(piVar3);
          this_00 = (void *)FUN_0047d060(this,uVar2);
          *piVar1 = (int)this_00;
          if (this_00 == (void *)0x0) break;
          FUN_004737d0(this_00,(uchar *)0x0);
          uVar2 = uVar2 + 2;
          piVar1 = piVar1 + 2;
          if (0x10 < (int)uVar2) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

