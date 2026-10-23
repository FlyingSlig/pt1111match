// FUNCTION: PORT1111 0x0045c620
// name: FUN_0045c620
// sig: undefined8 FUN_0045c620(undefined4 * param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)


longlong __fastcall
FUN_0045c620(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_0043a170(param_5 << 0x10,param_2,param_3 << 0x10,param_4 << 0x10,param_5 << 0x10,
                       param_6 << 0x10);
  puVar1 = (undefined4 *)param_1[0xe];
  piVar3 = *(int **)param_1[0xb];
  puVar2 = (undefined4 *)*puVar1;
  if (piVar3 != (int *)param_1[0xb]) {
    do {
      uVar5 = FUN_0043a170(piVar3[2] << 0x10,puVar1,param_3 << 0x10,param_4 << 0x10,
                           piVar3[2] << 0x10,puVar2[2] << 0x10);
      if ((int)uVar5 < (int)uVar4) {
        return CONCAT44((int)((ulonglong)uVar5 >> 0x20),1);
      }
      piVar3 = (int *)*piVar3;
      puVar2 = (undefined4 *)*puVar2;
      puVar1 = param_1;
    } while (piVar3 != (int *)param_1[0xb]);
  }
  return ZEXT48(puVar1) << 0x20;
}

