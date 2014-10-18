#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> temp1(10,-10);
	vector<int> temp2(10);
	vector<int> temp3{0,1,2,3,4};
	vector<int> temp4(temp1);
	vector<double> temp5(temp1.begin(),temp1.end());
	vector<int> temp6 = {1,2,3,4,5};
	return 0;
}
