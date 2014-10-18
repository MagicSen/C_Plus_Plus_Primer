#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> temp_num{1,2,3,4,5,6,4,23,3,5,5,6,5,2,4};
	list<string> temp_str{"asd","dsa","asd"};
	string temp_line = "asd";
	//cout << "The number 5 is repeated " << count(temp_num.cbegin(), temp_num.cend(), 5) << " times." << endl;
	cout << "The string " + temp_line +" is repeated " << count(temp_str.cbegin(), temp_str.cend(), temp_line) << " times." << endl;
	return 0;
}
