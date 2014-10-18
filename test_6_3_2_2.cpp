#include <iostream>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;
int &get(int *array,int index)
{
	return array[index];
}
int factorial(int val)
{
	if(val > 1)
		return factorial(val-1) * val;
	return 1;
}
int factorial_1(int val)
{
	if(val != 0)
		return factorial_1(val-1) * val;
	return 1;
}
int factorial_2(int val)
{
	if(val > 1)
	{
		return val * factorial_2(val--);
	}
	return 1;
}
int main()
{
	int ia[10];
	for (int i=0;i!=10; ++i)
	{
		get(ia,i)= i;	
	}
	for(auto i = begin(ia); i!= end(ia) ; ++i)
	{
		cout << *i << " ";	
	}
	cout << endl;

	cout << factorial(10) << " " << factorial_1(10) << endl;
	cout << " " << factorial_2(10) << endl;
}
