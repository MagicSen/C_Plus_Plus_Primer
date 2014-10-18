#ifndef SALES_DATE_TYPE
#define SALES_DATE_TYPE
#include <iostream>
#include <string>
/*struct Sales_date{
	std::string book_num;
	int sales_num = 0;
	double book_price = 0.0;
	double total_money = 0.0;
	std::string isbn() const {return this->book_num;}
	Sales_date& combine(const Sales_date&);
	Sales_date() = default;
	Sales_date(const std::string &s, const int num, const double price) : book_num(s), sales_num(num), book_price(price), total_money(price*num) {}
	Sales_date(std::istream &in);
};*/
using namespace std;
class Sales_date{
private:
	std::string book_num;
	int sales_num = 0;
	double book_price = 0.0;
	double total_money = 0.0;
public:
	std::string isbn() const {return this->book_num;}
	Sales_date& combine(const Sales_date&);
	
	Sales_date(const std::string &s, const int num, const double price) : book_num(s), sales_num(num), book_price(price), total_money(price*num) {/* cout << "Origin"<< endl;*/}
//	Sales_date() = default;
	Sales_date() : Sales_date("", 0, 0) { /*cout << "Test1" << endl;*/}
	Sales_date(std::string s) : Sales_date(s, 0, 0) {/*cout << s << endl;*/}
	Sales_date(std::istream &in) : Sales_date() 
					{ read(in,*this); /*cout << "Test4"<< endl;*/}
	inline double avg_price(){ return this->total_money/this->sales_num;}
	friend std::istream &read(std::istream &is, Sales_date &item);
	friend std::ostream &print(std::ostream &os, const Sales_date &item);
	friend Sales_date add(const Sales_date &a , const Sales_date &b);
};
std::istream &read(std::istream &is, Sales_date &item);
std::ostream &print(std::ostream &os, const Sales_date &item);
Sales_date add(const Sales_date &a , const Sales_date &b);
#endif
