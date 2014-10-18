#include <iostream>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::endl;
using int_array = int [4];
using int_re = int;
int main()
{
	int ia[3][4] = {0,0,0,0,0,0,0,0,0,0,0,0};
	for(int_array &i:ia)
	{
		for(int_re j:i)	
		{
			cout << j << " ";
		}
		cout << endl;
	}
	cout << "---------------"<< endl;
	for(int_re  i = 0; i < 3; i++ )
	{
		int_re *p = ia[i];	
		for(int_re j = 0; j < 4; j++)
		{
			cout << p[j] << " ";	
		}
		cout << endl;
	}
	cout << "----------------" << endl;
	for(int_array *i = begin(ia); i != end(ia) ; i++)
	{
		for(int_re *j = begin(*i); j != end(*i); j++)
		{
			cout << *j << " ";	
		}
		cout << endl;
	}
	cout << "----------------" << endl;
	return 0;
}
