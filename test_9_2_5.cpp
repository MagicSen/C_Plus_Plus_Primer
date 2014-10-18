#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<const char *> temp{"1adf","afqe"};
	vector<string> temp1;
	temp1.assign(temp.cbegin(),temp.cend());
	for(auto i : temp1)
	{
		cout << i << " ";	
	}
	cout << endl;
	return 0;
}
