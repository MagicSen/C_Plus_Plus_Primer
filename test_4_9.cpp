#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> num{10,11,12,123};
	cout << sizeof(num) <<  " "
	     <<	sizeof(char)<< " " 
	     <<	sizeof(short)<< " " 
	     <<	sizeof(int) << " " 
	     <<	sizeof(long) << " " 
	     <<	sizeof(float) << " " 
	     <<	sizeof(double) << endl; 
	int x[10];
	int *p = x;
	cout << sizeof(x)/sizeof(*x) << endl;
	cout << sizeof(p)/sizeof(*p) << endl;
	return 0;
}
