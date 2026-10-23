// FUNCTION: PORT1111 0x004b2b40
// name: FUN_004b2b40
// sig: undefined FUN_004b2b40(void * this, int * param_1)


void __thiscall FUN_004b2b40(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  void *local_4;
  
  piVar1 = param_1;
  iVar3 = param_1[0x39];
  param_1[0x39] = iVar3 + 1U;
  if ((uint)param_1[0x34] <= iVar3 + 1U) {
    local_4 = this;
    if (*(char *)((int)param_1 + 0x123) != '\0') {
      param_1[0x39] = 0;
      FUN_004a47a0(param_1,(undefined4 *)param_1[0x3a],0,param_1[0x36] + 1);
      bVar5 = (char)piVar1[0x49] + 1;
      *(byte *)(piVar1 + 0x49) = bVar5;
      if (bVar5 < 7) {
        param_1 = (int *)(uint)*(byte *)((int)piVar1 + 0x129);
        do {
          uVar2 = (uint)((piVar1[0x32] - (&DAT_004c84f4)[bVar5]) + -1 + (&DAT_004c8510)[bVar5]) /
                  (uint)(&DAT_004c8510)[bVar5];
          piVar1[0x38] = uVar2;
          piVar1[0x37] = ((int)param_1 * uVar2 + 7 >> 3) + 1;
          if (((piVar1[0x1c] & 2U) != 0) ||
             (piVar1[0x34] = (uint)((piVar1[0x33] - (&DAT_004c852c)[bVar5]) + -1 +
                                   (&DAT_004c8548)[bVar5]) / (uint)(&DAT_004c8548)[bVar5],
             piVar1[0x38] != 0)) break;
          bVar5 = bVar5 + 1;
          *(byte *)(piVar1 + 0x49) = bVar5;
        } while (bVar5 < 7);
      }
      if (*(byte *)(piVar1 + 0x49) < 7) {
        return;
      }
    }
    if ((*(byte *)(piVar1 + 0x1b) & 0x20) == 0) {
      piVar1[0x21] = 1;
      piVar1[0x20] = (int)&param_1;
      while( true ) {
        if (piVar1[0x1e] == 0) {
          if (piVar1[0x43] == 0) {
            do {
              FUN_004afd10(piVar1,0);
              FUN_004ac610(piVar1,&local_4,4);
              iVar3 = FUN_004afc90((byte *)&local_4);
              piVar1[0x43] = iVar3;
              FUN_004a6d00((int)piVar1);
              FUN_004afce0(piVar1,(byte *)(piVar1 + 0x47),4);
              if (piVar1[0x47] != DAT_004c8454) {
                FUN_004ac6e0(piVar1,s_Not_enough_image_data_004df2ec);
              }
            } while (piVar1[0x43] == 0);
          }
          piVar1[0x1e] = piVar1[0x2c];
          piVar1[0x1d] = piVar1[0x2b];
          if ((uint)piVar1[0x43] < (uint)piVar1[0x2c]) {
            piVar1[0x1e] = piVar1[0x43];
          }
          FUN_004afce0(piVar1,(byte *)piVar1[0x2b],piVar1[0x1e]);
          piVar1[0x43] = piVar1[0x43] - piVar1[0x1e];
        }
        uVar2 = FUN_0045fea0(piVar1 + 0x1d,1);
        if (uVar2 == 1) break;
        if (uVar2 != 0) {
          pcVar4 = (char *)piVar1[0x23];
          if (pcVar4 == (char *)0x0) {
            pcVar4 = s_Decompression_Error_004e0634;
          }
          FUN_004ac6e0(piVar1,pcVar4);
        }
        if (piVar1[0x21] == 0) {
          FUN_004ac6e0(piVar1,s_Extra_compressed_data_004df2c0);
        }
      }
      if (((piVar1[0x21] == 0) || (piVar1[0x1e] != 0)) || (piVar1[0x43] != 0)) {
        FUN_004ac6e0(piVar1,s_Extra_compressed_data_004df2c0);
      }
      piVar1[0x1a] = piVar1[0x1a] | 8;
      piVar1[0x1b] = piVar1[0x1b] | 0x20;
      piVar1[0x21] = 0;
    }
    if ((piVar1[0x43] != 0) || (piVar1[0x1e] != 0)) {
      FUN_004ac6e0(piVar1,s_Extra_compression_data_004e061c);
    }
    FUN_0045fcd0((int)(piVar1 + 0x1d));
    piVar1[0x1a] = piVar1[0x1a] | 8;
  }
  return;
}

