#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	vector<int> temp_num{1,2,3,4,5,6,7,2,3,4,8,9};	
	list<int> temp_list;
	sort(temp_num.begin(), temp_num.end());
	// Sort first, then copy
	unique_copy(temp_num.begin(), temp_num.end(), inserter(temp_list, temp_list.begin()));
	cout << "Source sequence: ";
	for(auto i:temp_num)
	{
		cout << i << " ";	
	}
		cout << endl;
	cout << "Unique sequence: ";	
	for(auto i:temp_list)
	{
		cout << i << " ";	
	}
		cout << endl;
	return 0;
}
