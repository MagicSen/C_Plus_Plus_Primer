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
	string str1(str.size(),' ');
	string::size_type i = 0;
	for(auto c : str)
	{
		if(ispunct(c))	
			continue;
		str1[i++] = c;
	}
	cout << str << endl;
	cout << str1 << endl;
	return 0;
}
