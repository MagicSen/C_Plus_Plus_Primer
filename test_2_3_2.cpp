#include <iostream>

int main()
{
	int i = 10;
	int *p1 = &i;
	std::cout << *p1 << std::endl;
	*p1 = 11;
	std::cout << *p1 << std::endl;
	int j = 20;
	p1 = &j;
	std::cout << *p1 << std::endl;
	return 0;
}
