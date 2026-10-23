// FUNCTION: PORT1111 0x0043dcb0
// name: FUN_0043dcb0
// sig: undefined4 FUN_0043dcb0(void * this, byte * param_1)


undefined4 __thiscall FUN_0043dcb0(void *this,byte *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  puVar3 = (undefined4 *)**(undefined4 **)((int)this + 4);
  do {
    if (puVar3 == *(undefined4 **)((int)this + 4)) {
      return 0;
    }
    pbVar8 = *(byte **)(puVar3[4] + 8);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_0043dcf4:
        iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0043dcf9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_0043dcf4;
      pbVar6 = pbVar6 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_0043dcf9:
    if (iVar7 == 0) {
      return puVar3[4];
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar2 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar2 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar2 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  } while( true );
}

