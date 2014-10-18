#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	do{
		cout << "Please give me two string." << endl;
		string temp1,temp2;
		cin >> temp1 >> temp2;
		if(temp1.size() >= temp2.size())
			cout << temp2 << endl;
		else 
			cout << temp1 << endl;
	}while(1);
	return 0;
}
