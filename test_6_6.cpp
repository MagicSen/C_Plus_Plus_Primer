#include <iostream>

using std::cout;
using std::endl;
void f()
{
	cout << 1 << endl;
}
void f(int a)
{
	cout << 2 << endl;
}
void f(int a, int b)
{
	cout << 3 << endl;
}
void f(double a,double b = 3.14)
{
	cout << 4 << endl;	
}
int main()
{
//	f(2.56,42);
	f(42);
	f(42,0);
	f(2.56,3.14);
	return 0;
}
