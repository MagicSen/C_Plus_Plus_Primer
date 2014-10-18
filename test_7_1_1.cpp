#include <iostream>
#include "Sales_date.h"

using std::cout;
using std::endl;
using std::cerr;
using std::cin;
int main()
{
	Sales_date total;
	if(cin >> total.book_num >> total.total_money){
		Sales_date trans;
		while(cin >> trans.book_num >> trans.total_money)
		{
			if(total.isbn() == trans.isbn()){
				total.combine(trans);
			}else {
				cout << total.book_num << " " << total.total_money << endl;
				total = trans;
			}
		}
		cout << total.book_num << " " << total.total_money << endl;
	}else {
		cerr << "No data?!" << endl; 
	}
	return 0;
}
