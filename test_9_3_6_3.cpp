// 9.33
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> vi{1,2,3,4,5,6,7,8,9,10};
	auto iter = vi.begin();
	while(iter != vi.end())
	{
		*iter *= 2;
		++iter;
		// Exist over end problem 
		vi.insert(iter, 42);
	//	iter = vi.insert(iter, 42);
		++iter;
	}
	for(auto i : vi)
		cout << i << " " ;
	cout << endl;
	return 0;
}
