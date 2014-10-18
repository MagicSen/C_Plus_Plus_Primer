#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <string>
#include <utility>

using namespace std;

int main()
{
	vector<pair<string, int>> string_sequence;	
	string temp_str;
	int temp_int;
	while(cin >> temp_str >> temp_int)
	{
	//	string_sequence.push_back(make_pair(temp_str, temp_int));
	//	string_sequence.push_back(pair<string, int>(temp_str, temp_int));
		pair<string, int> temp_pair(temp_str, temp_int);
		string_sequence.push_back(temp_pair);
	}
	for(const auto &i : string_sequence)
		cout << i.first << " " << i.second << endl;
	return 0;
}
