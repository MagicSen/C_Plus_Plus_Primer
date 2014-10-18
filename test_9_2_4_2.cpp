#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> temp{10,11,101,111,121,122,112};
	vector<double> temp1(temp.begin(),temp.end());
	for(auto i : temp1)
	{
		cout << i << " ";	
	}
	cout << endl;
	return 0;
}
