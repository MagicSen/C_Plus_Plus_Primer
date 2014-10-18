#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string not_up_down = "bdfghjkltpqy";
	string line_str;	
	string max_not_up_down="";
	while(cin >> line_str)
	{
		if(line_str.find_first_of(not_up_down,0) == string::npos){
			if(max_not_up_down.size() == 0){
				max_not_up_down = line_str;
			}else{
				if(line_str.size() > max_not_up_down.size())
					max_not_up_down = line_str;
			}
		}
	}
	cout << "The max length words which is not have up and down is: " << max_not_up_down << endl;
	return 0;
}
