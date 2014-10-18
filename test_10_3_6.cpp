#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;
bool isLonger(const string &s, size_t sz)
{
	return s.size() > sz;
}
int main()
{
	vector<string> temp_str{"aaaaaaaaa","bbbb","ccccccccccccc","eeeeeeeeeee","d","qer","test"};
	int sz = 6;
//	int counts = count_if(temp_str.begin(), temp_str.end(), [sz] (const string &s) { return s.size() > sz;});

	int counts = count_if(temp_str.begin(), temp_str.end(), bind(isLonger, _1, sz));
	cout << "There are " << counts << " words longer than 6." << endl;
	return 0;
}
