// FUNCTION: PORT1111 0x004a78a0
// name: FUN_004a78a0
// sig: undefined FUN_004a78a0(void * this, int * param_1, byte * param_2, byte * param_3)


void __thiscall FUN_004a78a0(void *this,int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  void *this_00;
  void *this_01;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *this_02;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  
  piVar2 = param_1;
  if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
    FUN_004b2e00(param_1);
    this = extraout_ECX;
  }
  if ((*(char *)((int)piVar2 + 0x123) != '\0') && ((*(byte *)(piVar2 + 0x1c) & 2) != 0)) {
    switch((char)piVar2[0x49]) {
    case '\0':
      uVar4 = DAT_004c8580;
      if ((*(byte *)(piVar2 + 0x39) & 7) != 0) {
joined_r0x004a7a01:
        if (param_3 != (byte *)0x0) {
          FUN_004b2210((int)piVar2,param_3,uVar4);
          this = extraout_ECX_00;
        }
LAB_004a790a:
        FUN_004b2b40(this,piVar2);
        return;
      }
      break;
    case '\x01':
      uVar4 = DAT_004c8584;
      if (((*(byte *)(piVar2 + 0x39) & 7) != 0) || ((uint)piVar2[0x32] < 5))
      goto joined_r0x004a7a01;
      break;
    case '\x02':
      if (((byte)piVar2[0x39] & 7) != 4) {
        this = param_3;
        if ((param_3 != (byte *)0x0) && ((piVar2[0x39] & 4U) != 0)) {
          FUN_004b2210((int)piVar2,param_3,DAT_004c8588);
          FUN_004b2b40(this_00,piVar2);
          return;
        }
        goto LAB_004a790a;
      }
      break;
    case '\x03':
      this = (void *)CONCAT31((int3)((uint)this >> 8),*(byte *)(piVar2 + 0x39));
      uVar4 = DAT_004c858c;
      if (((*(byte *)(piVar2 + 0x39) & 3) != 0) || ((uint)piVar2[0x32] < 3))
      goto joined_r0x004a7a01;
      break;
    case '\x04':
      if (((byte)piVar2[0x39] & 3) != 2) {
        this = param_3;
        if ((param_3 != (byte *)0x0) && ((piVar2[0x39] & 2U) != 0)) {
          FUN_004b2210((int)piVar2,param_3,DAT_004c8590);
          FUN_004b2b40(this_01,piVar2);
          return;
        }
        goto LAB_004a790a;
      }
      break;
    case '\x05':
      uVar4 = DAT_004c8594;
      if (((*(byte *)(piVar2 + 0x39) & 1) != 0) || ((uint)piVar2[0x32] < 2))
      goto joined_r0x004a7a01;
      break;
    case '\x06':
      if ((*(byte *)(piVar2 + 0x39) & 1) == 0) goto LAB_004a790a;
    }
  }
  if ((*(byte *)(piVar2 + 0x1a) & 4) == 0) {
    FUN_004ac6e0(piVar2,s_Invalid_attempt_to_read_row_data_004df304);
  }
  piVar2[0x20] = piVar2[0x3b];
  piVar2[0x21] = piVar2[0x37];
  do {
    if (piVar2[0x1e] == 0) {
      if (piVar2[0x43] == 0) {
        do {
          FUN_004afd10(piVar2,0);
          FUN_004ac610(piVar2,&param_1,4);
          iVar3 = FUN_004afc90((byte *)&param_1);
          piVar2[0x43] = iVar3;
          FUN_004a6d00((int)piVar2);
          FUN_004afce0(piVar2,(byte *)(piVar2 + 0x47),4);
          if (piVar2[0x47] != DAT_004c8454) {
            FUN_004ac6e0(piVar2,s_Not_enough_image_data_004df2ec);
          }
        } while (piVar2[0x43] == 0);
      }
      piVar2[0x1e] = piVar2[0x2c];
      piVar2[0x1d] = piVar2[0x2b];
      if ((uint)piVar2[0x43] < (uint)piVar2[0x2c]) {
        piVar2[0x1e] = piVar2[0x43];
      }
      FUN_004afce0(piVar2,(byte *)piVar2[0x2b],piVar2[0x1e]);
      piVar2[0x43] = piVar2[0x43] - piVar2[0x1e];
    }
    uVar4 = FUN_0045fea0(piVar2 + 0x1d,1);
    if (uVar4 == 1) {
      if (((piVar2[0x21] != 0) || (piVar2[0x1e] != 0)) || (piVar2[0x43] != 0)) {
        FUN_004ac6e0(piVar2,s_Extra_compressed_data_004df2c0);
      }
      piVar2[0x1a] = piVar2[0x1a] | 8;
      piVar2[0x1b] = piVar2[0x1b] | 0x20;
      break;
    }
    if (uVar4 != 0) {
      pcVar5 = (char *)piVar2[0x23];
      if (pcVar5 == (char *)0x0) {
        pcVar5 = s_Decompression_error_004df2d8;
      }
      FUN_004ac6e0(piVar2,pcVar5);
    }
  } while (piVar2[0x21] != 0);
  *(undefined1 *)(piVar2 + 0x42) = *(undefined1 *)((int)piVar2 + 0x126);
  *(undefined1 *)((int)piVar2 + 0x10a) = *(undefined1 *)((int)piVar2 + 0x12a);
  *(undefined1 *)((int)piVar2 + 0x109) = *(undefined1 *)((int)piVar2 + 0x127);
  *(byte *)((int)piVar2 + 0x10b) = *(byte *)((int)piVar2 + 0x129);
  piVar2[0x40] = piVar2[0x38];
  piVar2[0x41] = (uint)*(byte *)((int)piVar2 + 0x129) * piVar2[0x38] + 7 >> 3;
  bVar1 = *(byte *)piVar2[0x3b];
  if (bVar1 != 0) {
    FUN_004b2960((int)piVar2,(int)(piVar2 + 0x40),(byte *)piVar2[0x3b] + 1,
                 (byte *)(piVar2[0x3a] + 1),(uint)bVar1);
  }
  FUN_004a4770(piVar2,(undefined4 *)piVar2[0x3a],(undefined4 *)piVar2[0x3b],piVar2[0x36] + 1);
  this_02 = extraout_ECX_01;
  if (piVar2[0x1c] != 0) {
    FUN_004a9060(piVar2);
    this_02 = extraout_ECX_02;
  }
  if ((*(char *)((int)piVar2 + 0x123) == '\0') || ((*(byte *)(piVar2 + 0x1c) & 2) == 0)) {
    if (param_2 != (byte *)0x0) {
      FUN_004b2210((int)piVar2,param_2,0xff);
      this_02 = extraout_ECX_05;
    }
    if (param_3 == (byte *)0x0) goto LAB_004a7cac;
    uVar4 = 0xff;
    pbVar6 = param_3;
  }
  else {
    if (*(byte *)(piVar2 + 0x49) < 6) {
      FUN_004b2530((uint)piVar2);
      this_02 = extraout_ECX_03;
    }
    if (param_3 != (byte *)0x0) {
      FUN_004b2210((int)piVar2,param_3,(&DAT_004c8580)[*(byte *)(piVar2 + 0x49)]);
      this_02 = extraout_ECX_04;
    }
    if (param_2 == (byte *)0x0) goto LAB_004a7cac;
    uVar4 = *(uint *)(&DAT_004c8564 + (uint)*(byte *)(piVar2 + 0x49) * 4);
    pbVar6 = param_2;
  }
  FUN_004b2210((int)piVar2,pbVar6,uVar4);
  this_02 = extraout_ECX_06;
LAB_004a7cac:
  FUN_004b2b40(this_02,piVar2);
  if ((code *)piVar2[0x66] != (code *)0x0) {
    (*(code *)piVar2[0x66])(piVar2,piVar2[0x39],(char)piVar2[0x49]);
  }
  return;
}

