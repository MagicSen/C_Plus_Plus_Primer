#include <iostream>

int main()
{
	int temp = 0;
	int sum = 0;
	while( std::cin >> temp )
	{
		sum += temp;
	}
	std::cout << "The sum is " << sum << std::endl;
	return 0;
}
