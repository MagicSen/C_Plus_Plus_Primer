#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>

using namespace std;
void show(const vector<string> &temp_vec)
{
	for(auto i : temp_vec)
		cout << i << endl;
	cout << "###################" << endl;
}
int main()
{
	vector<string> temp_str{"abc","cba","ccc","cba","adc","ccc"};
	show(temp_str);
	sort(temp_str.begin(), temp_str.end());
	show(temp_str);
	auto temp_itera = unique(temp_str.begin(), temp_str.end());
	show(temp_str);
	temp_str.erase(temp_itera, temp_str.end());
	show(temp_str);
	return 0;
}
