#include <iostream>
#include "./1/Sales_item.h"

int main()
{
	Sales_item item1,item2;
	std::cin >> item1 >> item2 ;
	if(item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
	}
	else{
		std::cout << "The two different type book.Can't add."
			  << std::endl;
	}
	return 0;
}
