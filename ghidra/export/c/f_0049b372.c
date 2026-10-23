// FUNCTION: PORT1111 0x0049b372
// name: __mtterm
// sig: void __mtterm(void)


/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2003 Release */

void __cdecl __mtterm(void)

{
  if (DAT_004dddc4 != -1) {
    (*DAT_004e2d4c)(DAT_004dddc4);
    DAT_004dddc4 = -1;
  }
  FUN_0049b8e1();
  return;
}

