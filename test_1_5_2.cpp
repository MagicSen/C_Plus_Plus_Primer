#include <iostream>
#include "./1/Sales_item.h"

int main()
{
	Sales_item item1,item2;
	if( std::cin >> item1)
	{
		int count=1;
		while( std::cin >> item2)
		{
			if( item1.isbn() == item2.isbn())
			{
				item1 += item2;
				++count;
			}
			else{
				std::cout << "Total: " << item1 
					  << "Total record: " << count
					  << std::endl 
					  << "#############"
					  << std::endl;
				item1 = item2;	
				count = 1;
			}
		}
		std::cout << "Total: " << item1 
			  << "Total record: " << count
			  << std::endl 
			  << "#############"
			  << std::endl;
	}
	return 0;
}
