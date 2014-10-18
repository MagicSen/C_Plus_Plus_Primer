#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> temp{1,2,11,12,13};
	vector<int> temp1{1,2,12};
	if(temp == temp1)
		cout << "equal" << endl;
	else
		cout << "Not equal" << endl;
	list<int> temp2{3,4,5};
	vector<int> temp3(temp2.begin(),temp2.end());		
	if(temp == temp3)
		cout << "equal" << endl;
	else
		cout << "Not equal" << endl;
	return 0;
}
