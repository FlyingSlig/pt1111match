// FUNCTION: PORT1111 0x00499247
// name: _isalpha
// sig: int _isalpha(int _C)


/* Library Function - Single Match
    _isalpha
   
   Library: Visual Studio 2003 Release */

int __cdecl _isalpha(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_004ddf54) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < (int)ptVar2->lc_category[1].refcount) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,0x103);
    return uVar3;
  }
  return *(ushort *)((int)ptVar2->lc_category[3].refcount + _C * 2) & 0x103;
}

