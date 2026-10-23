// FUNCTION: PORT1111 0x0049d155
// name: __setdefaultprecision
// sig: undefined __setdefaultprecision(void)


/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2003 Release */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}

