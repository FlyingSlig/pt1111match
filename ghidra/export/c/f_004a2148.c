// FUNCTION: PORT1111 0x004a2148
// name: __ld12tod
// sig: INTRNCVT_STATUS __ld12tod(_LDBL12 * _Ifp, _CRT_DOUBLE * _D)


/* Library Function - Single Match
    __ld12tod
   
   Library: Visual Studio 2003 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_D,(int *)&DAT_004de58c);
  return IVar1;
}

