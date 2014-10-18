#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ve{1,2,3,4};
	for(auto i : ve)
		cout << i << " " ;
	cout << endl;

	auto temp2 = *ve.begin();
	temp2 = -1;
	auto &temp3 = ve.front();
	temp3 = -2;
	// Use auto just the copy of the origin value.
	auto temp4 = ve.at(0);
	temp4 = -3;
	auto temp5 = ve[0];
	temp5 = -4;
	cout << temp2 << " " << temp3 << " " << temp4 << " " << temp5 << endl;
	return 0;
}
