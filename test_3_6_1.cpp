#include <iostream>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int ia[3][4] = {0,0,0,0,0,0,0,0,0,0,0,0};
	// 这里需要注意2维数组,需要使用引用方可使用代范围的for循环
	for(int (&i)[4]:(ia))
	{
		for(int j:i)	
		{
			cout << j << " ";
		}
		cout << endl;
	}
	cout << "---------------"<< endl;
	for(int i = 0; i < 3; i++ )
	{
		int *p = ia[i];	
		for(int j = 0; j < 4; j++)
		{
			cout << p[j] << " ";	
		}
		cout << endl;
	}
	cout << "----------------" << endl;
	for(int (*i)[4] = begin(ia); i != end(ia) ; i++)
	{
		for(int *j = begin(*i); j != end(*i); j++)
		{
			cout << *j << " ";	
		}
		cout << endl;
	}
	cout << "----------------" << endl;
	return 0;
}
