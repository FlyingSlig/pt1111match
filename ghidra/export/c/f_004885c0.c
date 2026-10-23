// FUNCTION: PORT1111 0x004885c0
// name: FUN_004885c0
// sig: BOOL FUN_004885c0(int * param_1)


BOOL __fastcall FUN_004885c0(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  LPCSTR lpFileName;
  BOOL BVar2;
  
  (**(code **)(*param_1 + 4))();
  bVar1 = FUN_00466ab0(param_1 + 2,"");
  if (CONCAT31(extraout_var,bVar1) != 0) {
    lpFileName = (LPCSTR)FUN_00465e00(param_1 + 2);
    BVar2 = DeleteFileA(lpFileName);
    return BVar2;
  }
  return 1;
}

