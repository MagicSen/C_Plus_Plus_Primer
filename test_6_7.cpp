#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
// Define PF as the function's point
using PF = int(*)(int,int);
int add_int(int a, int b)
{
	return a+b;	
}
int sub_int(int a, int b)
{
	return a-b;
}
int max_int(int a, int b)
{
	return a*b;
}
int div_int(int a, int b)
{
	return a/b;
}
int main()
{
	// Save the operator in the vector<PF>
	vector<PF> caculate{add_int,sub_int,max_int,div_int};
	for(auto i : caculate)
	{
		cout << (*i)(10,2)<< endl;	
	}
	return 0;
}
