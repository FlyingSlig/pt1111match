// FUNCTION: PORT1111 0x004a2b0e
// name: __except1
// sig: float10 __except1(uint param_1, int param_2, undefined8 param_3, double param_4, uint param_5)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int _Value;
  float10 fVar2;
  uint local_90 [16];
  uint local_50;
  undefined4 local_14;
  
  local_14 = DAT_004ddb0c;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc(local_90,&param_5,param_1,param_2,&param_3,&param_4);
  }
  _Value = __errcode((byte)param_1);
  if ((DAT_004de5bc == 0) && (_Value != 0)) {
    fVar2 = __umatherr(_Value,param_2);
  }
  else {
    __set_errno(_Value);
    __ctrlfp();
    fVar2 = (float10)param_4;
  }
  return fVar2;
}

