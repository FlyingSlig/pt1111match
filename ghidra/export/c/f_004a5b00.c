// FUNCTION: PORT1111 0x004a5b00
// name: FUN_004a5b00
// sig: undefined FUN_004a5b00(int param_1, int param_2, double param_3, double param_4, double param_5, double param_6, double param_7, double param_8, double param_9, double param_10)


void __cdecl
FUN_004a5b00(int param_1,int param_2,double param_3,double param_4,double param_5,double param_6,
            double param_7,double param_8,double param_9,double param_10)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(float *)(param_2 + 0x80) = (float)param_3;
    *(float *)(param_2 + 0x84) = (float)param_4;
    *(float *)(param_2 + 0x88) = (float)param_5;
    *(float *)(param_2 + 0x8c) = (float)param_6;
    *(float *)(param_2 + 0x90) = (float)param_7;
    *(float *)(param_2 + 0x94) = (float)param_8;
    *(float *)(param_2 + 0x98) = (float)param_9;
    *(float *)(param_2 + 0x9c) = (float)param_10;
    lVar1 = __ftol();
    *(int *)(param_2 + 0x100) = (int)lVar1;
    lVar1 = __ftol();
    *(int *)(param_2 + 0x104) = (int)lVar1;
    lVar1 = __ftol();
    *(int *)(param_2 + 0x108) = (int)lVar1;
    lVar1 = __ftol();
    *(int *)(param_2 + 0x10c) = (int)lVar1;
    lVar1 = __ftol();
    *(int *)(param_2 + 0x110) = (int)lVar1;
    lVar1 = __ftol();
    *(int *)(param_2 + 0x114) = (int)lVar1;
    lVar1 = __ftol();
    *(int *)(param_2 + 0x118) = (int)lVar1;
    lVar1 = __ftol();
    *(int *)(param_2 + 0x11c) = (int)lVar1;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  return;
}

