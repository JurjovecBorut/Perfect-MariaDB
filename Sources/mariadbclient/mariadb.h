#ifndef __PERFECT_MARIADB__
#define __PERFECT_MARIADB__
#ifdef __APPLE__
//#include "/usr/local/include/mariadb/mysql.h"
#include "/usr/local/Cellar/mariadb/11.5.2/include/mysql/mysql.h"
#else
#include "/usr/include/mariadb/mysql.h"
#endif
#endif
