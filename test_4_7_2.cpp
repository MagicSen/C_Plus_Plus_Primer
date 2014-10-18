#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int grade = 0;
	cin >> grade;
	cout << ((grade > 90) ? "high pass" :
		(grade >75 ) ? "low pass" :
		(grade > 60) ? "pass" : "fail") << endl;
	if(grade > 90)
		cout << "high pass" << endl;
	else if (grade > 75)
		cout << "low pass" << endl;
	else if (grade > 60)
		cout << "pass" << endl;
	else
		cout << "fail" << endl;
	cout << ((10 > 5) ? (9 > 8): 8 )<< endl;
	return 0;
}
