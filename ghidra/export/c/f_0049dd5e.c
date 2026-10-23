// FUNCTION: PORT1111 0x0049dd5e
// name: ___libm_error_support
// sig: undefined ___libm_error_support(undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, int param_4)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2003 Release */

void __cdecl
___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  char *local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_8 = DAT_004ddb0c;
  if (0xa1 < param_4) {
    if (param_4 < 0x3eb) {
      if (param_4 != 0x3ea) {
        if (param_4 == 0xa2) {
          local_28 = 4;
          goto LAB_0049df10;
        }
        if (param_4 == 0xa6) {
          local_28 = 3;
          local_24 = "exp10";
        }
        else {
          if (param_4 != 0xaa) {
            if (param_4 == 0xab) {
              local_24 = "log2";
              goto LAB_0049dfa9;
            }
            if (param_4 == 1000) {
              local_24 = "log";
            }
            else {
              if (param_4 != 0x3e9) {
                return;
              }
              local_24 = "log10";
            }
            goto LAB_0049df9f;
          }
          local_28 = 2;
          local_24 = "log2";
        }
        goto LAB_0049df17;
      }
      local_24 = "exp";
    }
    else if (param_4 == 0x3eb) {
      local_24 = "atan";
    }
    else if (param_4 == 0x3ec) {
      local_24 = "ceil";
    }
    else if (param_4 == 0x3ed) {
      local_24 = "floor";
    }
    else {
      if (param_4 == 0x3ee) goto LAB_0049df77;
      if (param_4 != 0x3ef) {
        return;
      }
      local_24 = "modf";
    }
LAB_0049df9f:
    *param_3 = *param_1;
    goto LAB_0049dfa9;
  }
  if (param_4 == 0xa1) {
    local_28 = 3;
LAB_0049df10:
    local_24 = "exp2";
    goto LAB_0049df17;
  }
  if (param_4 < 0x19) {
    if (param_4 == 0x18) {
      local_28 = 3;
      goto LAB_0049de08;
    }
    if (param_4 == 2) {
      local_28 = 2;
      local_24 = "log";
    }
    else {
      if (param_4 == 3) {
        local_24 = "log";
LAB_0049dfa9:
        local_20 = *param_1;
        local_28 = 1;
        local_18 = *param_2;
        local_10 = *param_3;
        iVar1 = (*(code *)PTR_FUN_004de0a8)(&local_28);
        if (iVar1 == 0) {
          piVar2 = FUN_0049fc4d();
          *piVar2 = 0x21;
        }
        goto LAB_0049dfdc;
      }
      if (param_4 == 8) {
        local_28 = 2;
        local_24 = "log10";
      }
      else {
        if (param_4 == 9) {
          local_24 = "log10";
          goto LAB_0049dfa9;
        }
        if (param_4 != 0xe) {
          if (param_4 != 0xf) {
            return;
          }
          local_24 = "exp";
          goto LAB_0049de55;
        }
        local_28 = 3;
        local_24 = "exp";
      }
    }
  }
  else {
    if (param_4 == 0x19) {
      local_24 = "pow";
LAB_0049de55:
      local_20 = *param_1;
      local_18 = *param_2;
      local_10 = *param_3;
      local_28 = 4;
      (*(code *)PTR_FUN_004de0a8)(&local_28);
      goto LAB_0049dfdc;
    }
    if (param_4 == 0x1a) {
      *param_3 = 0x3ff0000000000000;
      return;
    }
    if (param_4 != 0x1b) {
      if (param_4 != 0x1c) {
        if (param_4 != 0x1d) {
          return;
        }
        local_24 = "pow";
        goto LAB_0049df9f;
      }
LAB_0049df77:
      local_24 = "pow";
      goto LAB_0049dfa9;
    }
    local_28 = 2;
LAB_0049de08:
    local_24 = "pow";
  }
LAB_0049df17:
  local_20 = *param_1;
  local_18 = *param_2;
  local_10 = *param_3;
  iVar1 = (*(code *)PTR_FUN_004de0a8)(&local_28);
  if (iVar1 == 0) {
    piVar2 = FUN_0049fc4d();
    *piVar2 = 0x22;
  }
LAB_0049dfdc:
  *param_3 = local_10;
  return;
}

