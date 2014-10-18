#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

void show(const vector<int> &temp_vec)
{
	for(auto i : temp_vec)
		cout << i << endl;
}
int main()
{
//	vector<int> temp_num{1,2,3,4,5,0,1,0,2,0,3};
	vector<int> temp_num;
	temp_num.reserve(10);
	show(temp_num);
	fill_n(back_inserter(temp_num), 10, 0);
	cout << "#####################" << endl;
	show(temp_num);
	return 0;
}
