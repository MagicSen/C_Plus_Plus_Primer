#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> num{1,2,3,4,5,6,7,8,9,10};
	for(auto i = num.begin(); i != num.end(); ++i)
	{
		cout << *i << " ";
		*i = 2*(*i);
	}
	cout << endl;
	for(auto i = num.begin(); i != num.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}
