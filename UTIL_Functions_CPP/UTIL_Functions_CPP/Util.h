#ifndef __UTIL_HEADER__
#define __UTIL_HEADER__

#include <iostream>
#include <sstream>
#include <string>
#include <stdarg.h>
#include <locale>

#include "Defines.h"

using namespace std;
class Util
{
public:
	Util();
	~Util();

	static string Concatstr(const char* args, ...);
	static string Capitalize(const char* arg_str);
	static string Simplize(const char* arg_str);
};

#endif
