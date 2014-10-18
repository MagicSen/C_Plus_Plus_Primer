#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> num{1,2,3,4,5,6,7,8,9,10};
	for(auto &i:num)
	{
		if((i)%2)	
			i *= 2;
	}
	for(auto i = num.begin(); i != num.end() ;i++)
	{
		cout << *i << " ";	
	}
	cout << endl;
	return 0;
}
