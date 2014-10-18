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
	list<int> num_list{1,2,0,3,9,0,8,1};
//	vector<int> num_list{1,2,0,3,9,0,8,1};
	auto iter_zero = find(num_list.crbegin(),num_list.crend(), 0);

	if(iter_zero != num_list.crend())
		cout << "Zero in the end is at " << *(--iter_zero) << endl;
//		cout << "Zero in the end is at " << num_list.size() - (iter_zero - num_list.crbegin()) << endl;

	return 0;
}
