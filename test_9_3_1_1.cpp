#include <iostream>
#include <deque>
#include <list>
#include <string>

using namespace std;

int main()
{
	deque<string> de;
	list<string> li;
	string temp;
	while(cin >> temp)
	{
		de.push_back(temp);	
		li.push_back(temp);
	}
	for(auto i = de.begin(); i != de.end(); ++i)
	{
		cout << *i << " ";	
	}
	cout << endl;
	for(auto i = li.begin(); i != li.end(); ++i)
	{
		cout << *i << " " ;	
	}
	cout << endl;
	return 0;
}
