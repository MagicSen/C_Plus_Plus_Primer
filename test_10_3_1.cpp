#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>

using namespace std;
void show(const vector<string> &temp_vec)
{
	for(auto i : temp_vec)
		cout << i << " ";
	cout << endl << "###################" << endl;
}
bool isShorter(const string &str1, const string &str2)
{
	return str1.size() > str2.size();
}
int main()
{
	vector<string> temp_str{"abcc","cbaccc","ccccc","cba","adcc","ccccc"};
	show(temp_str);
	sort(temp_str.begin(), temp_str.end());
	show(temp_str);
	auto temp_itera = unique(temp_str.begin(), temp_str.end());
	show(temp_str);
	temp_str.erase(temp_itera, temp_str.end());
	show(temp_str);
	stable_sort(temp_str.begin(), temp_str.end(), isShorter);
	show(temp_str);
	return 0;
}
