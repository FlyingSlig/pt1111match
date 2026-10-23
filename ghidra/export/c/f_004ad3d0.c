// FUNCTION: PORT1111 0x004ad3d0
// name: FUN_004ad3d0
// sig: undefined FUN_004ad3d0(int * param_1, byte * param_2)


void __cdecl FUN_004ad3d0(int *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  byte local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  pbVar2 = param_2;
  uVar3 = (-(uint)(param_2[4] != 8) & 4) + 6;
  iVar1 = *(int *)(param_2 + 0xc);
  if (*(byte **)param_2 != (byte *)0x0) {
    uVar4 = FUN_004adbe0(param_1,*(byte **)param_2,(int *)&param_2);
    if (uVar4 != 0) {
      FUN_004ac970(param_1,(byte *)&DAT_004c84c4,uVar3 * iVar1 + 2 + uVar4);
      FUN_004ac9c0(param_1,param_2,uVar4 + 1);
      FUN_004ac9c0(param_1,pbVar2 + 4,1);
      puVar5 = *(ushort **)(pbVar2 + 8);
      if (puVar5 < puVar5 + *(int *)(pbVar2 + 0xc) * 5) {
        do {
          if (pbVar2[4] == 8) {
            local_c = (byte)*puVar5;
            local_b = (undefined1)puVar5[1];
            local_a = (undefined1)puVar5[2];
            local_9 = (undefined1)puVar5[3];
            FUN_004ac920(local_8,(uint)puVar5[4]);
          }
          else {
            FUN_004ac920(&local_c,(uint)*puVar5);
            FUN_004ac920(&local_a,(uint)puVar5[1]);
            FUN_004ac920(local_8,(uint)puVar5[2]);
            FUN_004ac920(local_6,(uint)puVar5[3]);
            FUN_004ac920(local_4,(uint)puVar5[4]);
          }
          FUN_004ac9c0(param_1,&local_c,uVar3);
          puVar5 = puVar5 + 5;
        } while (puVar5 < (ushort *)(*(int *)(pbVar2 + 8) + *(int *)(pbVar2 + 0xc) * 10));
      }
      FUN_004ac9f0(param_1);
      FUN_004a4750((int)param_1,param_2);
      return;
    }
  }
  FUN_004ac710((int)param_1,s_Empty_keyword_in_sPLT_chunk_004df6c8);
  return;
}

