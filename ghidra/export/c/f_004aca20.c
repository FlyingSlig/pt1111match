// FUNCTION: PORT1111 0x004aca20
// name: FUN_004aca20
// sig: undefined FUN_004aca20(int * param_1)


void __cdecl FUN_004aca20(int *param_1)

{
  undefined1 local_8 [8];
  
  local_8[5] = 10;
  local_8[7] = 10;
  local_8[0] = 0x89;
  local_8[1] = 0x50;
  local_8[2] = 0x4e;
  local_8[3] = 0x47;
  local_8[4] = 0xd;
  local_8[6] = 0x1a;
  FUN_004a6aa0(param_1,local_8 + *(byte *)(param_1 + 0x4b),8 - (uint)*(byte *)(param_1 + 0x4b));
  if (*(byte *)(param_1 + 0x4b) < 3) {
    param_1[0x1a] = param_1[0x1a] | 0x1000;
  }
  return;
}

