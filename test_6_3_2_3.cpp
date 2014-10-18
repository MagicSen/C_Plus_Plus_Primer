#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;

void show(vector<int>::iterator begin_i,vector<int>::iterator end_i)
{
	if( begin_i != end_i){
		cout << *begin_i << endl;	
		show(begin_i+1,end_i);
	}else{
		return;	
	}
}
int main()
{
	vector<int> temp_num{1,2,3,22,22,11,1123};	
	show(temp_num.begin(),temp_num.end());
	return 0;
}
