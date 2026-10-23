// FUNCTION: PORT1111 0x0049e24a
// name: __stbuf
// sig: int __stbuf(FILE * _File)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = __isatty(_File->_file);
  if (iVar3 == 0) {
    return 0;
  }
  if (_File == (FILE *)&DAT_004ddb50) {
    iVar3 = 0;
  }
  else {
    if (_File != (FILE *)&DAT_004ddb70) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_004e2d2c = _DAT_004e2d2c + 1;
  if ((_File->_flag & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_004e2ec0 + iVar3;
  if (*piVar1 == 0) {
    pvVar4 = _malloc(0x1000);
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_0049e2c1;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_0049e2c1:
  *(ushort *)&_File->_flag = (ushort)_File->_flag | 0x1102;
  return 1;
}

