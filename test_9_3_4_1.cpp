#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> i_for{1,2,3,4,5,6,7,8,9};
	auto prev = i_for.before_begin();
	auto curr = i_for.begin();
	while(curr != i_for.end())
	{
		if(*curr % 2 == 1)	
			curr = i_for.erase_after(prev);
		else{
			prev = curr;
			++curr;
		}
	}

	for(auto i : i_for)
	{
		cout << i << " " ;	
	}
	cout << endl;
	return 0;
}
