#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> vect{12,12,42,213,12344,12};
	vector<int>::size_type cnt = vect.size();
	for( vector<int>::size_type ix = 0; ix != vect.size(); ix++,cnt--)
	{
		vect[ix] = cnt;	
	}
	for(auto a:vect)
	{
		cout << a << " ";	
	}
	cout << endl;
	return 0;
}
