// 9.32
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> vi{1,2,3,4};
	auto iter = vi.begin();	
	iter = vi.insert(iter, *iter++);
	cout << *iter << endl;
	for(auto i : vi)
	{
		cout << i << " " ;	
	}
	cout << endl;
	return 0;
}
