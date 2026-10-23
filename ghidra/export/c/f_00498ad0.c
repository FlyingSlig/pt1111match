// FUNCTION: PORT1111 0x00498ad0
// name: FUN_00498ad0
// sig: int FUN_00498ad0(FILE * param_1)


int __cdecl FUN_00498ad0(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    FUN_0049faba((int)param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(param_1->_tmpfname);
    }
  }
  param_1->_flag = 0;
  return iVar2;
}

