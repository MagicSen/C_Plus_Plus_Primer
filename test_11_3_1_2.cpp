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
	vector<string> temp_str{"a","vs","b"};
	vector<string> temp_str2;
	multiset<string> set_str{"abc","cde","aas"};
	multiset<string> set_str2;

	copy(temp_str.begin(), temp_str.end(), inserter(set_str2, set_str2.end()));
	copy(temp_str.begin(), temp_str.end(), back_inserter(set_str2));
	copy(set_str.begin(), set_str.end(), inserter(temp_str2, temp_str2.end()));
	copy(set_str.begin(), set_str.end(), back_inserter(temp_str2));
	return 0;
}
