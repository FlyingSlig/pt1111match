// FUNCTION: PORT1111 0x004afe30
// name: FUN_004afe30
// sig: undefined4 * FUN_004afe30(int * param_1, int param_2, undefined4 * param_3, int param_4, undefined1 * param_5, uint * param_6)


undefined4 * __cdecl
FUN_004afe30(int *param_1,int param_2,undefined4 *param_3,int param_4,undefined1 *param_5,
            uint *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  char local_34 [52];
  
  piVar3 = param_1;
  if (param_2 != 0) {
    _sprintf(local_34,s_Unknown_zTXt_compression_type__d_004dfa58,param_2);
    FUN_004ac710((int)param_1,local_34);
    *(undefined1 *)((int)param_3 + (int)param_5) = 0;
    *param_6 = (uint)param_5;
    return param_3;
  }
  param_1[0x1d] = (int)((int)param_3 + (int)param_5);
  puVar7 = (undefined1 *)0x0;
  piVar8 = (int *)0x0;
  param_1[0x1e] = param_4 - (int)param_5;
  param_1[0x20] = param_1[0x2b];
  param_1[0x21] = param_1[0x2c];
  param_1 = (int *)0x0;
  piVar5 = piVar8;
  if (param_4 - (int)param_5 == 0) {
LAB_004b00a3:
    pcVar14 = s_Incomplete_compressed_datastream_004dfa7c;
LAB_004b00b4:
    _sprintf(local_34,pcVar14,piVar3 + 0x47);
    FUN_004ac710((int)piVar3,local_34);
    if (piVar8 == (int *)0x0) {
      piVar8 = FUN_004a4710(piVar3,(size_t)(param_5 + 1));
      piVar5 = param_3;
      piVar9 = piVar8;
      for (uVar4 = (uint)param_5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar9 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar9 = piVar9 + 1;
      }
      for (uVar4 = (uint)param_5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)piVar9 = (char)*piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
    }
    *(undefined1 *)((int)piVar8 + (int)param_5) = 0;
    puVar7 = param_5;
LAB_004b0109:
    FUN_0045fcd0((int)(piVar3 + 0x1d));
    piVar3[0x1e] = 0;
    FUN_004a4750((int)piVar3,param_3);
    *param_6 = (uint)puVar7;
    return piVar8;
  }
  while ((uVar4 = FUN_0045fea0(piVar3 + 0x1d,1), uVar4 == 0 || (uVar4 == 1))) {
    iVar1 = piVar3[0x21];
    if ((iVar1 != 0) && (piVar8 = piVar5, uVar4 != 1)) goto LAB_004affb8;
    if (piVar5 == (int *)0x0) {
      puVar7 = param_5 + (piVar3[0x2c] - iVar1);
      piVar8 = FUN_004a4710(piVar3,(size_t)(puVar7 + 1));
      puVar10 = (undefined4 *)piVar3[0x2b];
      puVar12 = (undefined4 *)(param_5 + (int)piVar8);
      for (uVar6 = (uint)((int)puVar7 - (int)param_5) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = (int)puVar7 - (int)param_5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      piVar5 = param_3;
      piVar9 = piVar8;
      for (uVar6 = (uint)param_5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar9 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar9 = piVar9 + 1;
      }
      for (uVar6 = (uint)param_5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)piVar9 = (char)*piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
    }
    else {
      piVar8 = FUN_004a4710(piVar3,(size_t)(puVar7 + piVar3[0x2c] + (1 - iVar1)));
      piVar9 = piVar5;
      piVar11 = piVar8;
      for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar11 = piVar11 + 1;
      }
      for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)piVar11 = (char)*piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
        piVar11 = (int *)((int)piVar11 + 1);
      }
      FUN_004a4750((int)piVar3,piVar5);
      iVar1 = piVar3[0x2c];
      iVar2 = piVar3[0x21];
      puVar10 = (undefined4 *)piVar3[0x2b];
      puVar12 = (undefined4 *)(puVar7 + (int)piVar8);
      for (uVar6 = (uint)(iVar1 - iVar2) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = iVar1 - iVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar7 = puVar7 + (piVar3[0x2c] - piVar3[0x21]);
    }
    puVar7[(int)piVar8] = 0;
    if (uVar4 == 1) goto LAB_004b0109;
    piVar3[0x21] = piVar3[0x2c];
    piVar3[0x20] = piVar3[0x2b];
    param_1 = piVar8;
LAB_004affb8:
    piVar5 = piVar8;
    if (piVar3[0x1e] == 0) goto LAB_004b006a;
  }
  pcVar14 = (char *)piVar3[0x23];
  if (pcVar14 == (char *)0x0) {
    pcVar14 = s_Error_decoding_compressed_text_004dfa2c;
  }
  FUN_004ac710((int)piVar3,pcVar14);
  FUN_0045fcd0((int)(piVar3 + 0x1d));
  piVar3[0x1e] = 0;
  if (piVar5 == (int *)0x0) {
    puVar7 = param_5 + 0x20;
    piVar5 = FUN_004a4710(piVar3,(size_t)puVar7);
    piVar8 = param_3;
    piVar9 = piVar5;
    for (uVar6 = (uint)param_5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar9 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    for (uVar6 = (uint)param_5 & 3; param_1 = piVar5, uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)piVar9 = (char)*piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
      piVar9 = (int *)((int)piVar9 + 1);
    }
  }
  (puVar7 + -1)[(int)piVar5] = 0;
  puVar7 = (undefined1 *)((int)param_3 + param_4 + (-1 - (int)piVar5));
  if ((undefined1 *)0x1e < puVar7) {
    puVar7 = (undefined1 *)0x1f;
  }
  pcVar14 = s_Error_decoding_compressed_text_004dfa2c;
  pcVar13 = param_5 + (int)param_1;
  for (uVar6 = (uint)(puVar7 + 1) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = (uint)(puVar7 + 1) & 3; piVar8 = param_1, uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar13 = pcVar13 + 1;
  }
LAB_004b006a:
  if (uVar4 == 1) goto LAB_004b0109;
  if (uVar4 != 0xfffffffb) {
    if (uVar4 == 0xfffffffd) {
      pcVar14 = s_Data_error_in_compressed_datastr_004dfaac;
      goto LAB_004b00b4;
    }
    goto LAB_004b00a3;
  }
  pcVar14 = s_Buffer_error_in_compressed_datas_004dfadc;
  goto LAB_004b00b4;
}

