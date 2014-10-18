#include <iostream>

extern int i = 10;

int main()
{
// Inside function ,if you use extern ,you can't initial the variable
	extern int j = 10;
	return 0;
}
