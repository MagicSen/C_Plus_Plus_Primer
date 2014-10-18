#include <iostream>
#include <string>
#include "Sales_date.h"

//struct Sales_date{
//	std::string book_num;
//	int sales_num = 0;
//	double book_price = 0.0;
//};

int main()
{
	Sales_date book1,book2;
	std::cin >> book1.book_num >> book1.sales_num 
		 >> book1.book_price;
	std::cin >> book2.book_num >> book2.sales_num 
		 >> book2.book_price;
	if(book1.book_num == book2.book_num)
	{
		std::cout << "Book Number: " << book1.book_num
			  << " Total Sales Number: " 
			  << book1.sales_num + book2.sales_num 
			  << " Total Sales Money: "
			  << (book1.sales_num + book2.sales_num)*book1.book_price << std::endl;
	}
	else{
		std::cout << "The two books' type are different." << std::endl;
	}
	return 0;
}
