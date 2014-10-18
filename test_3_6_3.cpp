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
	for(const auto &i:ia)
	{
		for(auto j:i)	
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
	for(auto i = begin(ia); i != end(ia) ; i++)
	{
		for(auto j = begin(*i); j != end(*i); j++)
		{
			cout << *j << " ";	
		}
		cout << endl;
	}
	cout << "----------------" << endl;
	return 0;
}
