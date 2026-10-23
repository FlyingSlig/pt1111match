// FUNCTION: PORT1111 0x004891f0
// name: FUN_004891f0
// sig: undefined FUN_004891f0(int * param_1)


void __fastcall FUN_004891f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = (undefined4 *)param_1[0x1fc];
  if (0 < param_1[7]) {
    do {
      (**(code **)(*param_1 + 8))(puVar2 + 1);
      puVar2 = (undefined4 *)*puVar2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[7]);
  }
  return;
}

