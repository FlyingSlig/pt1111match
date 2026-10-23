// FUNCTION: PORT1111 0x004997a5
// name: _strtok
// sig: char * _strtok(char * _Str, char * _Delim)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _strtok
   
   Library: Visual Studio 2003 Release */

char * __cdecl _strtok(char *_Str,char *_Delim)

{
  byte bVar1;
  _ptiddata p_Var2;
  int iVar3;
  byte *pbVar4;
  byte local_28 [32];
  undefined4 local_8;
  
  local_8 = DAT_004ddb0c;
  p_Var2 = __getptd();
  pbVar4 = local_28;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *_Delim;
    local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    _Delim = _Delim + 1;
  } while (bVar1 != 0);
  if (_Str == (char *)0x0) {
    _Str = p_Var2->_token;
  }
  for (; (bVar1 = *_Str, pbVar4 = (byte *)_Str,
         (local_28[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0 && (bVar1 != 0)); _Str = _Str + 1) {
  }
  do {
    if (*pbVar4 == 0) {
LAB_0049983d:
      p_Var2->_token = (char *)pbVar4;
      return (char *)(-(uint)((byte *)_Str != pbVar4) & (uint)_Str);
    }
    if ((local_28[*pbVar4 >> 3] & (byte)(1 << (*pbVar4 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_0049983d;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

