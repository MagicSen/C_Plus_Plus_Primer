#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main()
{
	vector<int> temp_num;
	istream_iterator<int> std_in(cin);	
	istream_iterator<int> eof;
	while(std_in != eof)
	{
		temp_num.push_back(*std_in++);	
	}
	sort(temp_num.begin(),temp_num.end());
	ostream_iterator<int> std_out(cout," ");
//	copy(temp_num.cbegin(),temp_num.cend(), std_out);
	unique_copy(temp_num.cbegin(), temp_num.cend(), std_out);
	cout << endl;	
	return 0;
}
