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
//	sort(num_list.begin(), num_list.end());
	num_list.sort();	
//	auto j = unique(num_list.begin(),num_list.end());
//	unique(num_list.begin(),num_list.end());
	num_list.unique();
	for(auto i = num_list.cbegin(); i !=/* j*/ num_list.end(); ++i)
		cout << *i << " ";
	cout << endl;
	return 0;
}
