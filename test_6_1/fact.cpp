#include "fact.h"
int fact(int val)
{
	int fac=1;
	while(val > 0)
		fac *= val--;
	return fac;
}
double abs_val(double val)
{
	return val > 0 ? val : -val;
}
