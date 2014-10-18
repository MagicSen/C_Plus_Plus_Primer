#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <vector>
#include <string>

using namespace std;
using namespace placeholders;

bool check_size(const string &s, int a)
{
	return a > s.size();
}

int main()
{
	vector<int> temp_num{1,2,3,4,5,6,7,8,9,10};
	// Placeholder stands for the parameter position in the return function, like g for f P356
	auto wc = find_if(temp_num.begin(), temp_num.end(), bind(check_size, "aaaa", _1));
	cout << "The first satisfy integer at " << wc - temp_num.begin() << endl;
	return 0;
}
