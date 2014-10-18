#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <string>

using namespace std;

int main()
{
	vector<string> temp_str;
	string temp;
	while(cin >> temp)
		temp_str.push_back(temp);
	for(const auto &i : temp_str)
		cout << i << " ";
	cout << endl;

	sort(temp_str.begin(), temp_str.end());
	auto pos = unique(temp_str.begin(), temp_str.end());
	temp_str.erase(pos, temp_str.end());
	cout << "Update: " << endl;
	for(const auto &i : temp_str)
		cout << i << " ";
	cout << endl;
	return 0;
}
