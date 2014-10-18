#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main()
{
	vector<int> temp_num{0,1,2,3,4,5,6,7,8,9};
	for(auto i = temp_num.crbegin(); i != temp_num.crend(); ++i)
		cout << *i << " " ;
	cout << endl;
	for(auto i = temp_num.cbegin(); i != temp_num.cend(); ++i)
		cout << *(temp_num.cbegin() + (temp_num.cend() - i -1)) << " ";
	cout << endl;
	return 0;
}
