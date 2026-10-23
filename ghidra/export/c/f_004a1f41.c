// FUNCTION: PORT1111 0x004a1f41
// name: __CopyMan
// sig: undefined __CopyMan(int param_1, undefined4 * param_2)


/* Library Function - Single Match
    __CopyMan
   
   Library: Visual Studio 2003 Release */

void __cdecl __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  iVar1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

