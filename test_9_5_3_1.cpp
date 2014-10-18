#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string s= "ab2c3d7R4E6";
	string number = "0123456789";
	// Find the number's position
	string::size_type pos = 0;
	while((pos = s.find_first_of(number,pos)) != string::npos)
	{
		cout << "found number at " << pos << " ,element is " << s[pos] << endl;	
		++pos;
	}
	pos = 0;
	while((pos = s.find_first_not_of(number,pos)) != string::npos)
	{
		cout << "charater at " << pos << " ,element is " << s[pos] << endl;	
		++pos;
	}
	return 0;
}
