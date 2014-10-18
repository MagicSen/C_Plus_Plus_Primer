#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int main()
{
	int sum=0;
	int i=50;
	while( i<= 100)
	{
		sum+=i;
		i++;
	}
	cout << "Sum of 50 to 100 is " << sum << endl;

	int j=10;
	while( j>=0 )
	{
		cout << j-- << endl;
	}
	int a=0;
	int b=0;
	cout << "Please give me two integer,I will list all integer between them." << endl;
	cin >> a >> b;
	if( a>= b)
	{
		while( b<(a-1))
		{
			cout << ++b << endl;		
		}
	}
	else{
		while( a<(b-1) )
		{
			cout << ++a << endl;		
		}
	}
	return 0;
}
