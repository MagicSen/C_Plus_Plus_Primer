#include <iostream>
#include "Sales_date.h"

using std::cout;
using std::endl;
using std::cerr;
using std::cin;
int main()
{
	Sales_date total;
	if(read(cin,total)){
		Sales_date trans;
		while(read(cin,trans))
		{
			if(total.isbn() == trans.isbn()){
				total.combine(trans);
			}else {
				print(cout,total);
				total = trans;
			}
		}
		print(cout,total);
	}else {
		cerr << "No data?!" << endl; 
	}
	return 0;
}
