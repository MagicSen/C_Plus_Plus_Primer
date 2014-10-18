#include <iostream>

int main()
{
	int i = 9;
	const int cj = 9;

	int *p = &i;
	const int *cp = &i;
//	*cp = 11;
	cp = &cj;
	std::cout << *cp << std::endl;
	int *const ccp = &i;
	*ccp = 11;
//	ccp = &cj;
	std::cout << *cp << std::endl;


	const int *const cccp = &cj;

	int &r = i;
	// Can't exist.
//	int &r2 = 10;
	const int &cr = 10;
//	int &const cccr = i;
	// Can't exist.
//	const int &const ccr = cj;
	return 0;
}
