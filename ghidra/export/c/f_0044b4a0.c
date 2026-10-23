// FUNCTION: PORT1111 0x0044b4a0
// name: FUN_0044b4a0
// sig: undefined4 FUN_0044b4a0(int param_1)


undefined4 __fastcall FUN_0044b4a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  (**(code **)*puVar2)(puVar2,&DAT_004c4c90,param_1 + 0x110);
  (**(code **)**(undefined4 **)(param_1 + 4))
            (*(undefined4 **)(param_1 + 4),&DAT_004c4c80,(undefined4 *)(param_1 + 0x114));
  piVar1 = *(int **)(param_1 + 0x114);
  (**(code **)(*piVar1 + 0x34))(piVar1,puVar2,0x464,piVar1);
  *(undefined4 *)(param_1 + 8) = 1;
  return 0;
}

