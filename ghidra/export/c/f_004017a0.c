// FUNCTION: PORT1111 0x004017a0
// name: FUN_004017a0
// sig: int FUN_004017a0(void * this, char * param_1)


int __thiscall FUN_004017a0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004016b0(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (int)this;
}

