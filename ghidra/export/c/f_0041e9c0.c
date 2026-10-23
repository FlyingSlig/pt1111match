// FUNCTION: PORT1111 0x0041e9c0
// name: FUN_0041e9c0
// sig: int FUN_0041e9c0(void * param_1)


int __fastcall FUN_0041e9c0(void *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_8;
  int local_4;
  
  uVar1 = FUN_00465e00((undefined4 *)((int)param_1 + 0x18));
  puVar2 = (undefined4 *)FUN_0044fe90(uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = FUN_0041c970(puVar2,&local_4,&local_8);
    if (iVar3 != 0) {
      iVar3 = FUN_0041e520(param_1,local_4,local_8);
      if (iVar3 != 0) {
        FUN_0044fea0(puVar2);
        iVar3 = FUN_0041dbc0(param_1);
        return iVar3;
      }
    }
    FUN_0044fea0(puVar2);
  }
  return 0;
}

