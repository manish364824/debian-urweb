#include "../include/urweb.h"

typedef uw_Basis_string uw_Test_t;

uw_Test_t uw_Test_create(uw_context, uw_Basis_string);
uw_Basis_string uw_Test_out(uw_context, uw_Test_t);
uw_Test_t uw_Test_frob(uw_context, uw_Test_t, uw_Basis_string);
