// FUNCTION: PORT1111 0x00479890
// name: NormalizeRect
// sig: void NormalizeRect(CRect * this)


/* Library Function - Single Match
    public: void __thiscall CRect::NormalizeRect(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall CRect::NormalizeRect(CRect *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (*(int *)(this + 8) < iVar1) {
    *(int *)this = *(int *)(this + 8);
    *(int *)(this + 8) = iVar1;
  }
  iVar1 = *(int *)(this + 4);
  if (*(int *)(this + 0xc) < iVar1) {
    *(int *)(this + 4) = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar1;
  }
  return;
}

