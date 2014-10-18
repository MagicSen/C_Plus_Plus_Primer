#include <iostream>
#include <fstream>
#include "Sales_date.h"

using namespace std;
int main(int argc,char* argv[])
{
	if(argc < 3){
		cerr<< "Don't give enough parameter." << endl;
		return -1;
	}
	ifstream in(argv[1]);
	if(!in.is_open()){
		cerr << "Can't open the giving file."<< endl;
		return -2;
	}
	ofstream out(argv[2],ofstream::app);
	if(!out.is_open()){
		cerr << "Can't open the giving file."<< endl;	
		return -3;
	}
	Sales_date total;
	//if(in >> total.book_num >> total.total_money){
	if(read(in,total)){
		Sales_date trans;
		//while(in >> trans.book_num >> trans.total_money)
		while(read(in,trans))
		{
			if(total.isbn() == trans.isbn()){
				total.combine(trans);
			}else {
			//	cout << total.book_num << " " << total.total_money << endl;
				print(out,total) << endl;
				total = trans;
			}
		}
		print(out,total) << endl;
	//	cout << total.book_num << " " << total.total_money << endl;
	}else {
		cerr << "No data?!" << endl; 
	}
	return 0;
}
