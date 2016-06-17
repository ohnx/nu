#ifndef _CMDS_INC
#define _CMDS_INC
#include "common.h"
#include <errno.h>
#include "unvo.h"
#include "kg.h"
#include "dictionary.h"
#include "post.h"
#include "pageList.h"

int newSrv(char *name);
int cleanNuDir(char *nuDir);
char *getNuDir(int argc, char**argv);
int buildNuDir(char *nuDir);
#endif