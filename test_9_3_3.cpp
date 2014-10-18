#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	list<int> ilist(begin(ia),end(ia));
	vector<int> ivector(begin(ia),end(ia));
	
	auto itera_list = ilist.begin();	
	while(itera_list != ilist.end())
		if(*itera_list % 2 == 1)
			itera_list = ilist.erase(itera_list);
		else
			++itera_list;

	auto itera_vector = ivector.begin();
	while(itera_vector != ivector.end())
		if(*itera_vector % 2 == 0)
			itera_vector = ivector.erase(itera_vector);
		else
			++itera_vector;
	for(auto i : ilist)
	{
		cout << i << " ";	
	}
	cout << endl;
	for(auto i : ivector)
	{
		cout << i << " ";	
	}
	cout << endl;
	return 0;
}
