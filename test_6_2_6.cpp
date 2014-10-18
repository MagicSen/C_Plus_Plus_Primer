#include <iostream>
#include <initializer_list>

using std::cout;
using std::endl;
using std::cin;
using std::initializer_list;

double get_sum_from_list(initializer_list<int> lt);
int main()
{
	initializer_list<int> lt{1,2,3,4,5,6,7,8,9,10};
	cout << get_sum_from_list(lt) << endl;
	return 0;
}

double get_sum_from_list(initializer_list<int> lt)
{
	double sum = 0;
	for(const auto &i : lt)
	{
		sum += i;
	}
	return sum;
}
