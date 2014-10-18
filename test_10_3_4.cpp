#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>

using namespace std;

double get_sum(const double &a, const double &b)
{
	auto g = [b] (const double &a) {return a+b;};
	return g(a);
}
int main()
{
	auto f = [] (const double &a, const double &b) {return a+b;};
	cout << f(10,12) << endl;
	cout << get_sum(10,13) << endl;
	return 0;
}
