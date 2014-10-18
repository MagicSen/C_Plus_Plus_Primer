#include <iostream>

int main()
{
//	int &refVal14 = 10;
//	double dval = 10.22;
//	int &refVal5 = dval;

//	int &reval;

//	int i = 0,&r1 = i;
//	double d = 0, &r2 = d;
//	r2 = 3.1415;
//	r2 = r1;
//	i = r2;
//	r1 = d;
	int i,&r = i;
	i = 5;
	r = 10;
	std::cout << i << " " << r << std::endl;
	return 0;
}
