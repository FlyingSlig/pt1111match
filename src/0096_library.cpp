// pt1111match — statically-linked library functions called by game code.
// Each needs a LIBRARY marker so reccmp normalises the call target.
// Syntax: marker line followed by a `// <name>` nameref line.

// LIBRARY: PORT1111 0x004978fd
// operator delete(void *)

// LIBRARY: PORT1111 0x00497f1e
// free

// LIBRARY: PORT1111 0x00496fa4
// operator new(unsigned int)

// LIBRARY: PORT1111 0x0049793c
// exception::exception(void)
