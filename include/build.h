#ifndef _NU_BUILD_INC
#define _NU_BUILD_INC
#define LUA_USE_APICHECK
#include "common.h"
#include <errno.h>
#include "unvo.h"
#include "kg.h"
#include "hashmap.h"
#include "post.h"
#include "pageList.h"
#include "strlist.h"
#include "libstring.h"

int buildNuDir(const char *nuDir);
#endif
