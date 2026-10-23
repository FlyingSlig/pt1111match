// Stubs for CRT entry points whose library members pull extra Windows imports
// and locale/time data that the original binary does not have.
extern "C" int __cdecl __get_qualified_locale(void *, void *, void *) { return 0; }
extern "C" int __cdecl __crtCompareStringA(...) { return 0; }
extern "C" int __cdecl __crtCompareStringW(...) { return 0; }
extern "C" int __cdecl __crtGetLocaleInfoA(...) { return 0; }
extern "C" int __cdecl __crtGetLocaleInfoW(...) { return 0; }
extern "C" int __cdecl __crtsetenv(...) { return 0; }
