// pt1111match — std::basic_string<char>::_Copy replacement.
//
// The original binary's _Copy is split: the main path (0x401410) ends with a
// jump to the copy/free continuation at 0x4014ac, with the _CATCH_ALL retry
// block (Catch@00401483) sitting in between.  Ghidra lists those as separate
// functions, so reccmp compares only the first 115 bytes of _Copy.  The
// compiler's whole-function instantiation is monolithic (0x13C bytes) and can
// never line up, and its internal jump targets are not entities.
//
// We therefore suppress the implicit instantiation (explicit-specialization
// declaration below) and bind all references to the byte-exact raw
// implementation emitted in src/00401410_copy.cpp.
#pragma once

#include <string>

template<> void std::basic_string<char, std::char_traits<char>, std::allocator<char> >::_Copy(
    std::basic_string<char, std::char_traits<char>, std::allocator<char> >::size_type,
    std::basic_string<char, std::char_traits<char>, std::allocator<char> >::size_type);
