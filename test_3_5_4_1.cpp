#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str1 = {"Hello ,wow"};
	string str2{"hello ,wow"};
	char cs1[]={'H','e','l','l','o','.','\0'};
	char cs2[]={'h','e','l','l','o','.','\0'};
	if (str1 == str2)
		cout << "The str2 is equal to str1." << endl;	
	else if(str1 > str2)
		cout << "The str1 is bigger than str2." << endl;	
	else{
		cout << "The str2 is bigger than str1." << endl;	
	}
	int fig = strcmp(cs1,cs2);
	if(fig == 0)
		cout << "The cs2 is equal to cs1." << endl;	
	else if(fig < 0)
		cout << "The cs2 is bigger than cs1." << endl;	
	else{
		cout << "The cs1 is bigger than cs2." << endl;	
	}
	return 0;
}
