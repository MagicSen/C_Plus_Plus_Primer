#include <iostream>
#include "Chapter6.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Please give me a number to calcute its fact." << endl;
	int temp = 0;
	while(cin >> temp)
	{
		cout << fact(temp) << " " << abs_val(temp) << endl;
	}
	return 0;
}
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
