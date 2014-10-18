#include "Sales_date.h"

Sales_date& Sales_date::combine(const Sales_date &tmp)
{
	sales_num += tmp.sales_num;
	total_money += tmp.total_money;
	return *this;
}

/*Sales_date::Sales_date(std::istream &in) : Sales_date::Sales_date()
{
	read(in,*this);
	cout << "Test4"<< endl;
}*/
std::istream &read(std::istream &is, Sales_date &item)
{
	is >> item.book_num >> item.sales_num >> item.book_price;
	item.total_money = item.sales_num*item.book_price;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_date &item)
{
	os << item.book_num << " " << item.sales_num << " " << item.book_price
	   << " " << item.total_money ;
	return os;
}

Sales_date add(const Sales_date &a , const Sales_date &b)
{
	Sales_date sum = a;
	sum.combine(b);
	return sum;
}
