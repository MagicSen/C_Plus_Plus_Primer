#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
//	int a[5] = {1,2,3,4,5};
//	int *p = a;
//	int b = *p++;
//	int b = (*p)++;
//	int b = *++p;
//	int b = ++*p;
//	cout << b << " " << *p << endl;
	vector<string> test={"","adfa","vvvvvvvv"};
	auto iter = test.begin();	
//	cout << *iter++ << endl;
//!	cout << (*iter)++ << endl;
//!	cout << *iter.empty() << endl;
//	cout << iter->empty() << endl;
//!	cout << ++*iter << endl;
	cout << iter++ -> empty() <<  *iter<< endl;
	return 0;
}
