// FUNCTION: PORT1111 0x0048b8c0
// name: FUN_0048b8c0
// sig: undefined FUN_0048b8c0(int param_1, int * param_2, undefined4 param_3, uint * param_4, uint param_5, int param_6, int param_7, int param_8, int param_9)


void __cdecl
FUN_0048b8c0(int param_1,int *param_2,undefined4 param_3,uint *param_4,uint param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  switch(param_3) {
  case 8:
    if (param_1 == 8) {
      FUN_0048b4e0(param_2,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    if (param_1 == 0x10) {
      FUN_0048b650((uint)param_2,(byte *)param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
    if (param_1 == 0x20) {
      FUN_0048b7a0((int)param_2,(int)param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
    break;
  case 0x10:
    if (param_1 == 0x10) {
      FUN_0048b530(param_2,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    if (param_1 == 0x20) {
      FUN_0048b800(param_2,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    break;
  case 0x18:
    if (param_1 == 0x18) {
      FUN_0048b590(param_2,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    break;
  case 0x20:
    if (param_1 == 0x20) {
      FUN_0048b5f0(param_2,param_4,param_5,param_6,param_7,param_8);
    }
  }
  return;
}

