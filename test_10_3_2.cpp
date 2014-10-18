#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include "Sales_date.h"

using namespace std;

void show(const vector<Sales_date> &temp_sales_date)
{
	for(auto i : temp_sales_date)
	{
		print(cout,i);	
		cout << endl;
	}
	cout << "##############################" << endl;
}

bool compareIsbn(const Sales_date &s1, const Sales_date &s2)
{
	return s1.isbn() < s2.isbn();
}
int main()
{
	vector<Sales_date> temp_sales_date(5);
	int i=0;
	while(i < 5)
	{
		read(cin, temp_sales_date[i]);	
		++i;
	}
	show(temp_sales_date);
//	sort(temp_sales_date.begin(), temp_sales_date.end(), compareIsbn);
	sort(temp_sales_date.begin(), temp_sales_date.end(), [] (const Sales_date &s1, const Sales_date &s2) {return s1.isbn() < s2.isbn();});
	show(temp_sales_date);
	return 0;
}
