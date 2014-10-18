#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

int bigger(const int &a, const int *b)
{
	return a > *b ? a : *b;
}
int exchange_int(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void print(const int *begin_p,const int *end_p)
{
	while(begin_p != end_p)
		cout << *begin_p++ << endl;
}
int main()
{
	int a=0;
	int b=0;
	cin >> a >> b;
	cout << bigger(a,&b) << endl;
	exchange_int(a,b);
	cout << a << " " << b << endl;
	int j[2] = {a,b};
	print(begin(j),end(j));
	return 0;
}
