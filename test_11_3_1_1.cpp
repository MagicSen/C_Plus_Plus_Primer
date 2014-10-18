#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <utility>

using namespace std;

int main()
{
	map<string, int> temp{{"abc",3},{"aaaa",4},{"qewrt",5}};
	auto map_it = temp.begin();
	string temp_str = map_it->first;
	int temp_int = map_it->second;
	cout << temp_str << " " << temp_int << endl;
	return 0;
}
