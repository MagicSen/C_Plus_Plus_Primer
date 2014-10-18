#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
	map<string, vector<string>> family;
	string temp;
	do{
	//	cin.clear();
	//	cin.sync();
		string temp_first;
		string temp_second;
		cout << "Please give me your family name: ";
		getline(cin,temp_first);
		cout << "Please give me your name: ";
		getline(cin,temp_second);
		family[temp_first].push_back(temp_second);
		cout << "Is over?(Y or N): "  ;
	}while(getline(cin,temp) && temp.find_first_of("Nn") != string::npos);	

	for(const auto &i : family)
	{
		cout << i.first << " family has " << i.second.size() << " persons. Those are " << endl;
		for(const auto &j : i.second)
			cout << i.first << " " << j << ",";
		cout << endl;
	}
	return 0;
}
