// FUNCTION: PORT1111 0x004adb60
// name: FUN_004adb60
// sig: undefined FUN_004adb60(int * param_1, ushort * param_2, int param_3)


void __cdecl FUN_004adb60(int *param_1,ushort *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = param_3;
  piVar1 = param_1;
  if (param_3 <= (int)(uint)*(ushort *)(param_1 + 0x46)) {
    FUN_004ac970(param_1,(byte *)&DAT_004c8484,param_3 * 2);
    puVar3 = param_2;
    if (0 < iVar2) {
      do {
        FUN_004ac920((undefined1 *)&param_1,(uint)*puVar3);
        FUN_004ac9c0(piVar1,(byte *)&param_1,2);
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar2 != 0);
    }
    FUN_004ac9f0(piVar1);
    return;
  }
  FUN_004ac710((int)param_1,s_Invalid_number_of_histogram_entr_004df828);
  return;
}

