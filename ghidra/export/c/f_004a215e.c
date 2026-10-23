// FUNCTION: PORT1111 0x004a215e
// name: __ld12tof
// sig: INTRNCVT_STATUS __ld12tof(_LDBL12 * _Ifp, _CRT_FLOAT * _F)


/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2003 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_F,(int *)&DAT_004de5a4);
  return IVar1;
}

