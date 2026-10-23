// FUNCTION: PORT1111 0x0049794d
// name: exception
// sig: undefined exception(exception * this, char * * param_1)


/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  *(undefined ***)this = &PTR_FUN_004c6e9c;
  sVar1 = _strlen(*param_1);
  puVar2 = _malloc(sVar1 + 1);
  *(uint **)(this + 4) = puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_0049b7a0(puVar2,(uint *)*param_1);
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}

