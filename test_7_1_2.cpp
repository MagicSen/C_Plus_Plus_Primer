#include "Person.h"
#include <iostream>

using namespace std;

int main()
{
	Person temp1;
	temp1.person_name = "Zhang 3";
	temp1.person_address = "XXII";
	const Person temp2 = temp1;
	cout << temp1.get_name() << endl;
	cout << temp2.get_name() << endl;

	return 0;
}
