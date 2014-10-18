#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>

using namespace std;

void show(const vector<string> &s)
{
	for(auto i : s)
		cout << i << endl;
	cout << "###################" << endl;
	return ;
}
bool isLength_5(const string &s)
{
	if(s.size() >= 5)
		return true;
	else
		return false;
}
int main()
{
	vector<string> temp_str{"aaa","a","aaaa","aaaaa","bbbbbb","ccccccc","dddddd","eeeeeeeeee"};
	show(temp_str);
	auto temp_itera = partition(temp_str.begin(), temp_str.end(), isLength_5);
	show(temp_str);
	temp_str.erase(temp_itera, temp_str.end());
	show(temp_str);
	return 0;
}
