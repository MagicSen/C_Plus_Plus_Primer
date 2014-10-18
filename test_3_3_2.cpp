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
//	vector<int> sm;
//	int temp=0;
	vector<string> sm;
	string temp = "";
	while(cin >> temp){
		sm.push_back(temp);		
	}
	for (auto j : sm)
	{
		cout << j << " ";	
	}
	cout << endl;
	return 0;
}
