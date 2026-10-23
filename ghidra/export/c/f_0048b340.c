// FUNCTION: PORT1111 0x0048b340
// name: FUN_0048b340
// sig: undefined FUN_0048b340(int param_1, byte * param_2, int param_3, ushort * param_4, int param_5, int param_6, int param_7, int param_8, uint param_9, int param_10)


void __cdecl
FUN_0048b340(int param_1,byte *param_2,int param_3,ushort *param_4,int param_5,int param_6,
            int param_7,int param_8,uint param_9,int param_10)

{
  if (param_3 == 8) {
    switch(param_1) {
    case 8:
      FUN_0048b1e0(param_2,(int)param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    case 0xf:
    case 0x10:
      FUN_0048b110((int)param_2,(int)param_4,param_5,param_6,param_7,param_8,param_9,param_10);
      return;
    case 0x20:
      FUN_0048b180((int)param_2,(int)param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    }
  }
  else if (param_3 == 0xf) {
    if (param_1 == 0xf) {
      FUN_0048b2d0((int)param_2,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  else if ((param_3 == 0x10) && (0xe < param_1)) {
    if (param_1 < 0x11) {
      FUN_0048b2d0((int)param_2,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
    if (param_1 == 0x20) {
      FUN_0048b250((int)param_2,(int)param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}

