#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << 12/3*4+5*15+24%4/2 << endl;
	cout << -30*3 + 21 / 5 << endl;
	cout << -30 + 3 * 21 / 5 << endl;
	cout << 30 / 3 * 21 % 5 << endl;
	cout << -30 / 3 * 21 % 4 << endl;
	cout << "Please give me a number: ";
	int temp = 0;
	cin >> temp;
	if (temp % 2)
		cout << "This is an odd number." << endl;
	else
		cout << "This is a even number." << endl;
	return 0;
}
