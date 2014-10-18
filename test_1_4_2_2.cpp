#include <iostream>

int main()
{
	int sum=0;
	for( int i = 50 ; i <= 100 ; ++i)
	{
		sum += i;
	}
	std::cout << "Sum of 50 to 100 is " << sum << std::endl;

	for( int j = 10 ; j >= 0 ; --j)
	{
		std::cout << j << std::endl;
	}
	int a=0;
	int b=0;
	std::cout << "Please give me two integer,I will list all integer between them." << std::endl;
	std::cin >> a >> b;
	if( a>= b)
	{
		for( int i = b+1 ; i < a ; ++i)
		{
			std::cout << i << std::endl;
		}
	}
	else{
		for( int i = a+1 ; i < b ; ++i)
		{
			std::cout << i << std::endl;
		}
	}
	return 0;
}
