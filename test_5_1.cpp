#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int sum = 0;
	int i = 49;
	while( i++,i <= 100 && (sum += i))
	;
	cout << sum << endl;
	return 0;
}
