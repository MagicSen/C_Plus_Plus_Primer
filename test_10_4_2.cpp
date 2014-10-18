#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include <list>
using namespace std;

void show(vector<int> num, const string &s)
{
	cout << s << ": ";
	for(auto i:num)
	{
		cout << i << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> temp_num{1,2,3,4,5,6,7,8,9};
	vector<int> temp_insert,temp_back;
	list<int> temp_front;
	copy(temp_num.cbegin(), temp_num.cend(), inserter(temp_insert, temp_insert.begin()));
	copy(temp_num.cbegin(), temp_num.cend(), back_inserter(temp_back));
	copy(temp_num.cbegin(), temp_num.cend(), front_inserter(temp_front));
	show(temp_num, "Source sequence");
	show(temp_insert, "Insert sequence");
	show(temp_back, "Back sequence");
	show(vector<int>(temp_front.begin(), temp_front.end()), "Front sequence");
	return 0;
}
