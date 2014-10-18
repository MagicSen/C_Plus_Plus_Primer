#include <iostream>
#include "fact.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Please give me a number to calcute its fact." << endl;
	int temp = 0;
	while(cin >> temp)
	{
		cout << fact(temp) << " " << abs_val(temp) << endl;
	}
	return 0;
}
