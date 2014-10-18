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
//	vector<int> tm(10,42);
//	vector<int> tm{42 ... 42};
//	vector<int> tm = {42 ... 42};
	vector<int> sm;
	int temp=0;
	while(cin >> temp){
		sm.push_back(temp);		
	}
	for (vector<int>::size_type j = 0;j < sm.size()/2 ; j++)
	{
		cout << sm[j]+ sm[sm.size()-1-j] << " ";	
	}
	if(sm.size()%2 != 0 )
		cout << sm[sm.size()/2] << " ";
	cout << endl << "Vector's Size: " << sm.size() << endl;
	return 0;
}
