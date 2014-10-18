#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int choose;
	cout << "Choose the method to get string(0 or 1): " << endl;
	cin >> choose;
	if(choose == 0)
	{
//		string str;
//		while( cin >> str){
//			cout << str <<endl;	
//		}
	}
	else{
		string str1;
		while( getline(cin,str1)){
			cout << str1 << endl;	
		}
	}

	string str1,str2;
	cin >> str1 >> str2;
	if(str1!= str2)
	{
		if(str1 > str2)
			cout << str1 << endl;
		else 
			cout << str2 << endl;
	}
	if(str1.size() != str2.size())
	{
		if(str1.size() > str2.size())	
			cout << str1.size() << endl;
		else 
			cout << str2.size() << endl;
	}

	string temp;
	string sum1,sum2;
	while(cin >> temp)
	{
		if(temp != "")
		{
			sum1 += temp;
			sum2 += temp+" ";
		}

	}
	cout << sum1 << endl;
	cout << sum2 << endl;
	return 0;
}
