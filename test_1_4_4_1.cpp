#include <iostream>

int main()
{
	int currVal = 0;
	int val = 0;
	if( std::cin >> currVal )
	{
		int cnt = 1;
		while( std::cin >> val )
		{
			if( currVal == val )
				++cnt;
			else{
				std::cout << currVal << " occurs "
					  << cnt << " times " << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times "
			  << std::endl;
	}
	return 0;
}
