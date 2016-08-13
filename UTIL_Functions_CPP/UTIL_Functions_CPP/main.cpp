#include "Util.h"

int main()
{
	string output;
	output = Util::Concat("I ", "Am ", "Being ", "Tested", "\n");
	cout << output.c_str();

	cout << Util::Capitalize(output.c_str());
	cout << Util::Simplize(output.c_str());
	return 0;
}
