#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> str;
	string temp="";
	while( cin >> temp ){
		if(!temp.empty())	
			str.push_back(temp);
	}
	cout << "Vector's size: " << str.size() << endl;
	for(auto i = str.begin(); i != str.end(); ++i)
	{
		cout << *i << endl;
	}
	return 0;
}
