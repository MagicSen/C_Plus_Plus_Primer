#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> total_number;
	deque<int> d_order;
	deque<int> d_other;
	int temp = 0;
	while(cin >> temp)
		total_number.push_back(temp);
	
	for(auto i=total_number.begin(); i!= total_number.end(); ++i)
	{
		if(*i%2 == 0)	
			d_order.push_back(*i);
		else
			d_other.push_back(*i);
	}

	for(auto i : d_order)
	{
		cout << i << " ";	
	}
	cout << endl;
	for(auto i : d_other)
	{
		cout << i << " ";	
	}
	cout << endl;
	return 0;
}
