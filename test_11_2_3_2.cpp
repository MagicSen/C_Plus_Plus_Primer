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
#include <utility>

using namespace std;

int main()
{
	map<string, vector<pair<string, string>>> family;
	string temp;
	do{
		string temp_first;
		string temp_second;
		string temp_birthday;
		cout << "Please give me your family name: ";
		getline(cin,temp_first);
		cout << "Please give me your name: ";
		getline(cin,temp_second);
		cout << "Please give me your birthday(3.22): ";
		getline(cin,temp_birthday);
		family[temp_first].push_back(pair<string,string>(temp_second, temp_birthday));
		cout << "Is over?(Y or N): "  ;
	}while(getline(cin,temp) && temp.find_first_of("Nn") != string::npos);	

	for(const auto &i : family)
	{
		cout << "********************" << endl;
		cout << i.first << "'s family has " << i.second.size() << " persons. Those are " << endl;
		for(const auto &j : i.second)
			cout << i.first << " " << j.first << "'s birthday at: " << j.second<< endl;
	}
	return 0;
}
