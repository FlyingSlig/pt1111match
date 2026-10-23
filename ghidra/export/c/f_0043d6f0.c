// FUNCTION: PORT1111 0x0043d6f0
// name: FUN_0043d6f0
// sig: char * FUN_0043d6f0(undefined4 param_1, int param_2)


char * FUN_0043d6f0(undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  switch(param_1) {
  default:
    pcVar1 = "UNKNOWN";
    break;
  case 0x7d1:
    pcVar1 = "TRUE";
    if (param_2 == 0) {
      return "verdade";
    }
    break;
  case 0x7d2:
    pcVar1 = "FALSE";
    if (param_2 == 0) {
      return "falso";
    }
    break;
  case 0x7d3:
    pcVar1 = "ZERO";
    if (param_2 == 0) {
      return "zero";
    }
    break;
  case 0x7d4:
    pcVar1 = "LOW";
    if (param_2 == 0) {
      return "baixo";
    }
    break;
  case 0x7d5:
    pcVar1 = "HIGH";
    if (param_2 == 0) {
      return "alto";
    }
    break;
  case 0x7d6:
    pcVar1 = "MEDIUM";
    if (param_2 == 0) {
      return &DAT_004c3694;
    }
    break;
  case 0x7d7:
    pcVar1 = "EMPTY";
    if (param_2 == 0) {
      return "vazio";
    }
    break;
  case 0x7d8:
    pcVar1 = "FULL";
    if (param_2 == 0) {
      return &DAT_004c3684;
    }
  }
  return pcVar1;
}

