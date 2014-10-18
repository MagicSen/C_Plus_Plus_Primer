#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> num;
	int temp=0;
	int compare = 5;
	while(cin >> temp)
	{
		num.push_back(temp);
	}
	auto begin = num.begin(),end = num.end();
	auto media = begin + (end - begin)/2;
//	auto media = (begin + end)/2;
	while(media != end && *media != compare)
	{
		if( *media > compare)	
			end = media;
		else
			begin = media + 1;
		media = begin + (end - begin)/2;
	}
	if(*media == compare)
		cout << *media << endl;
	else
		cout << "Don't have that number." << endl;
	return 0;
}
