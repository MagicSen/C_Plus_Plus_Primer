#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void exchange_val(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	cout << "Please give me two number."<< endl;
	int a=0;
	int b=0;
	cin >> a >> b;
	cout << a << " " << b << endl;
	exchange_val(&a,&b);
	cout << a << " " << b << endl;
	return 0;
}
