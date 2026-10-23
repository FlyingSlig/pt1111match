// FUNCTION: PORT1111 0x0043cb80
// name: FUN_0043cb80
// sig: undefined FUN_0043cb80(void * this, int * param_1, undefined4 param_2, int param_3)


void __thiscall FUN_0043cb80(void *this,int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  void *this_00;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)**(int **)((int)this + 8);
  if (piVar2 != *(int **)((int)this + 8)) {
    do {
      this_00 = (void *)FUN_00414c30(DAT_004e240c);
      if ((this_00 != (void *)0x0) &&
         (bVar1 = FUN_004056c0(this_00,param_1), CONCAT31(extraout_var,bVar1) == 0)) {
        *(int *)((int)this_00 + 0xc4) = param_1[0x30];
        switch(param_2) {
        case 1:
          if (param_3 == 0) {
            iVar4 = param_1[4];
            iVar3 = 0x408;
          }
          else {
            iVar4 = *(int *)(param_1[0x2c] + 8);
            iVar3 = 0x408;
          }
          break;
        case 2:
          if (param_3 == 0) {
            iVar4 = param_1[4];
            iVar3 = 0x409;
          }
          else {
            iVar4 = *(int *)(param_1[0x2c] + 8);
            iVar3 = 0x409;
          }
          break;
        case 3:
          if (param_3 == 0) {
            iVar4 = param_1[4];
            iVar3 = 0x40a;
          }
          else {
            iVar4 = *(int *)(param_1[0x2c] + 8);
            iVar3 = 0x40a;
          }
          break;
        case 4:
          if (param_3 == 0) {
            iVar4 = param_1[4];
            iVar3 = 0x40b;
          }
          else {
            iVar4 = *(int *)(param_1[0x2c] + 8);
            iVar3 = 0x40b;
          }
          break;
        case 5:
          if (param_3 == 0) {
            iVar4 = param_1[4];
            iVar3 = 0x40c;
          }
          else {
            iVar4 = *(int *)(param_1[0x2c] + 8);
            iVar3 = 0x40c;
          }
          break;
        case 6:
          if (param_3 == 0) {
            iVar4 = param_1[4];
          }
          else {
            iVar4 = *(int *)(param_1[0x2c] + 8);
          }
          iVar3 = 0x40d;
          break;
        default:
          goto switchD_0043cbe3_default;
        }
        FUN_00444e70(*(void **)((int)this_00 + 0xb0),iVar3,iVar4);
      }
switchD_0043cbe3_default:
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 8));
  }
  return;
}

