#include "Util.h"

Util::Util()
{
}


Util::~Util()
{
}

string Util::Concatstr(const char* args, ...)
{
	va_list arguments;

	stringstream ss;
	const char* current;

	va_start(arguments, args);
	
	current = args;
	while(current != NULL) 
	{
		ss << current;
		current = va_arg(arguments, const char*);
	}

	va_end(arguments);

	return ss.str();
}

string Util::Capitalize(const char* arg_str)
{
	locale loc;
	string str = arg_str;
	stringstream ss;
	for (string::size_type i = 0; i<str.length(); ++i)
		ss << toupper(str[i], loc);
	
	return ss.str();
}

string Util::Simplize(const char* arg_str)
{
	locale loc;
	string str = arg_str;
	stringstream ss;
	for (string::size_type i = 0; i<str.length(); ++i)
		ss << tolower(str[i], loc);

	return ss.str();
}
