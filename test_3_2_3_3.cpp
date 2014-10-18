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
		for(decltype(str.size()) index = 0;
		    index != str.size(); ++index)
		{
			str[index] = 'x';	
		}
		cout << str << endl;
		string::size_type i = 0;
		while( i < str.size())
		{
			str[i++] = 'o';	
		}
		cout << str << endl;
	}
}
