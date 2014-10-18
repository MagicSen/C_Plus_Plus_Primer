#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string str;
	cin >> str;
	if( str != "")
	{
		for(auto &c : str)
		{
			c = 'X';	
		}
		cout << str << endl;
	}
}
