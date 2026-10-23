// FUNCTION: PORT1111 0x0049d5c6
// name: ___sbh_alloc_new_region
// sig: undefined4 * ___sbh_alloc_new_region(void)


/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2003 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_004e354c == DAT_004e355c) {
    pvVar2 = HeapReAlloc(DAT_004e3564,0,DAT_004e3550,(DAT_004e355c * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_004e355c = DAT_004e355c + 0x10;
    DAT_004e3550 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_004e3550 + DAT_004e354c * 0x14);
  pvVar2 = HeapAlloc(DAT_004e3564,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_004e354c = DAT_004e354c + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_004e3564,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

