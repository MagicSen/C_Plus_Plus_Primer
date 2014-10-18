#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<unsigned> scores(11,0);
	auto scores_begin = scores.begin();
	int grade=0;
	while(cin >> grade)
	{
		if(grade <= 100)	
			++(*(scores_begin+grade/10));
	}
	for(auto i = scores.begin(); i != scores.end(); ++i)
	{
		cout << *i << " ";	
	}
	cout << endl;
	return 0;
}
