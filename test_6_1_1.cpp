#include <iostream>

using std::cout;
using std::endl;
using std::cin;

size_t call_myself()
{
	static int call_times = 0;
	return call_times++;
}
int main()
{
	int val = 10;
	while(val-- > 0)
		cout << call_myself() << endl;
	return 0;
}
