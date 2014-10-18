#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<char> temp_char{'H','e','l','l','o','!'};
	string temp_str;
	// Replace the value which iterator represent.
	temp_str.assign(temp_char.begin(),temp_char.end());
	cout << temp_str << endl;
	return 0;
}
