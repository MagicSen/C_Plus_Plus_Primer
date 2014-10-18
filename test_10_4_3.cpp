#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main(int argc,char *argv[])
{
	if(argc < 2)	
		return -1;
	ifstream in(argv[1]);
	istream_iterator<string> fin(in);	
	istream_iterator<string> fin_eof;
	vector<string> temp_string;
	while(fin != fin_eof){
		temp_string.push_back(*fin++);
	}
	for(auto i:temp_string)
	{
		cout << i << endl;	
	}
	return 0;
}
