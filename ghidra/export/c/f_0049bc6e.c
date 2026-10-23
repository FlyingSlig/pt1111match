// FUNCTION: PORT1111 0x0049bc6e
// name: ___security_error_handler
// sig: undefined ___security_error_handler(int param_1)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___security_error_handler
   
   Library: Visual Studio 2003 Release */

void ___security_error_handler(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  size_t sVar3;
  uint *_Str;
  char *pcVar4;
  uint *local_12c;
  uint local_128 [65];
  undefined1 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c73c8;
  uStack_c = 0x49bc7d;
  local_20 = DAT_004ddb0c;
  if (DAT_004e2ea8 == (code *)0x0) {
    if (param_1 == 1) {
      pcVar4 = "Buffer overrun detected!";
      local_12c = (uint *)0x4c7230;
    }
    else {
      pcVar4 = "Unknown security failure detected!";
      local_12c = (uint *)0x4c72f0;
    }
    local_24 = 0;
    DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_128,0x104);
    if (DVar2 == 0) {
      FUN_0049b7a0(local_128,(uint *)"<program name unknown>");
    }
    _Str = local_128;
    sVar3 = _strlen((char *)_Str);
    if (0x3c < sVar3 + 0xb) {
      sVar3 = _strlen((char *)_Str);
      _Str = (uint *)(&stack0xfffffea7 + sVar3);
      _strncpy((char *)_Str,"...",3);
    }
    _strlen((char *)_Str);
    local_1c = &stack0xfffffec8;
    FUN_0049b7a0((uint *)&stack0xfffffec8,(uint *)pcVar4);
    FUN_0049b7b0((uint *)&stack0xfffffec8,(uint *)&DAT_004c7210);
    FUN_0049b7b0((uint *)&stack0xfffffec8,(uint *)"Program: ");
    FUN_0049b7b0((uint *)&stack0xfffffec8,_Str);
    FUN_0049b7b0((uint *)&stack0xfffffec8,(uint *)&DAT_004c7210);
    FUN_0049b7b0((uint *)&stack0xfffffec8,local_12c);
    ___crtMessageBoxA(&stack0xfffffec8,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = (undefined *)0x0;
    (*DAT_004e2ea8)();
    local_8 = (undefined *)0xffffffff;
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

