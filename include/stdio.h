#ifndef _INC_STDIO
#undef __USE_MINGW_ANSI_STDIO //Required to relink printf & co
#pragma clang  diagnostic push
#pragma clang  diagnostic ignored "-Weverything"
#include "../i686-w64-mingw32/include/stdio.h"
#pragma clang  diagnostic pop
#endif
