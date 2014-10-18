#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string temp1;
	string temp2;
	bool flag = false;
	while(cin >> temp1)
	{
		if(temp2.empty())	
			temp2 = temp1;
		else{
			if(temp1 == temp2){
				flag = true;
				break;
			}else{
				temp2 = temp1;	
			}
		}
	}
	if(flag)
		cout << "The word " << temp2 << " have repeated again."
		     << endl;
	else
		cout << "Those words are different."
		     << endl;
	return 0;
}
