#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ve{1,2,3,4};
	int temp;
	vector<int>::iterator iter = ve.begin();
	while(cin >> temp)	
		iter = ve.insert(iter, temp);
	for(auto i : ve)
		cout << i << " " ;
	cout << endl;
	return 0;
}
