#include <iostream>

int main()
{
	int sum=0;
	int i=50;
	while( i<= 100)
	{
		sum+=i;
		i++;
	}
	std::cout << "Sum of 50 to 100 is " << sum << std::endl;

	int j=10;
	while( j>=0 )
	{
		std::cout << j-- << std::endl;
	}
	int a=0;
	int b=0;
	std::cout << "Please give me two integer,I will list all integer between them." << std::endl;
	std::cin >> a >> b;
	if( a>= b)
	{
		while( b<(a-1))
		{
			std::cout << ++b << std::endl;		
		}
	}
	else{
		while( a<(b-1) )
		{
			std::cout << ++a << std::endl;		
		}
	}
	return 0;
}
