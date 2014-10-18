#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <cassert>
#define NDEBUG
using std::string;
using std::cout;
using std::endl;
using std::vector;

void show(vector<string>::iterator begin_i,vector<string>::iterator end_i)
{
	assert( begin_i - end_i == 0);
	if( begin_i != end_i){
		cout << *begin_i << endl;	
		show(begin_i+1,end_i);
	}else{
		return;	
	}
}
int main()
{
	vector<string> temp_num{"adf","Magic Yang","Testing"};	
	show(temp_num.begin(),temp_num.end());
	return 0;
}
