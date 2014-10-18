#include <iostream>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	auto p_begin = begin(a);
	auto p_end = end(a);
	while(p_begin != p_end)
	{
		cout << *p_begin << endl;
		*p_begin = 0;
		cout << *p_begin << endl;	
		p_begin++;
	}
	return 0;
}
