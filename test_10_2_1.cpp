#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> temp_int{1,2,3,4,5,6,7,8,1,1,1,1};
	vector<double> temp_double{1.9,2.2,3.22,4.1,5.9,6.8,7.9,8.1,9.9,10.1};
	//cout << "Sum : " << accumulate(temp_int.cbegin(), temp_int.cend(), 0) << endl;
	cout << "Sum : " << accumulate(temp_double.cbegin(), temp_double.cend(), 0.0) << endl;
	return 0;
}
