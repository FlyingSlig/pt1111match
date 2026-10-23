// Name the security-cookie data entity the way the original does.
//
// Every raw /GS prologue/epilogue reads the original cookie address
// (0x4ddb0c).  Our build repoints that reference at libcmt's
// __security_cookie (src/pt_string_map.txt) so the checks pass, but reccmp
// then shows `__security_cookie (DATA)` on our side while the original entity
// is named `DAT_004ddb0c (DATA)`, costing ~31 raw functions one line each.
// This marker maps the original address to the same name our symbol has, so
// both operands compare equal again.  The 0999 definition keeps the byte slot
// (only the marker name moves).
//
// GLOBAL: PORT1111 0x004ddb0c
extern "C" unsigned int __security_cookie;
