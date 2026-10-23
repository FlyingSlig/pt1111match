// FUNCTION: PORT1111 0x00433980
// name: FUN_00433980
// sig: undefined FUN_00433980(void * this, char * param_1)


void __thiscall FUN_00433980(void *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  _sprintf(param_1,"%d %d %d %d %d %d %d %d %d %d",*(undefined4 *)((int)this + 0xc),
           *(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 4),
           *(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18),
           *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),
           *(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x28),
           *(undefined4 *)((int)this + 0x2c));
  return;
}

