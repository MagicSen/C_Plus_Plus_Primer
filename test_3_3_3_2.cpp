#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<string> sm;
	string temp = "";
	while(cin >> temp){
		for (auto &c : temp)
		{
			c = toupper(c);
		}
		sm.push_back(temp);		
	}
	for (auto j : sm)
	{
		cout << j << endl;	
	}
	cout << "Vector's Size: " << sm.size() << endl;
	return 0;
}
