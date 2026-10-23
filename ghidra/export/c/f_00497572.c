// FUNCTION: PORT1111 0x00497572
// name: __abnormal_termination
// sig: int __abnormal_termination(void)


/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio 2003 Release */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_004974e8) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}

