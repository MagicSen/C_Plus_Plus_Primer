
// 未做完

#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <list>
#include <string>
#include "Sales_date.h"

using namespace std;

int main()
{
	vector<Sales_date> temp_infor;
	istream_iterator<Sales_date> std_cin(cin);
	istream_iterator<Sales_date> eof;
	while(std_cin != eof)
	{
		temp_infor.push_back(*std_cin++);	
	}
	sort(temp_infor.begin(), temp_infor.end(), [] (const Sales_date &s1, const Sales_date &s2) { return s1.isbn() < s2.isbn();});
	for(auto i = temp_infor.begin(); i != temp_infor.end(); ++i)
	{
		print(cout, *i);
//		auto j = find(i+1, temp_infor.cend(), [] (const Sales_date &s1, const Sales_date &s2){ return s1.isbn() == s2.isbn();});	
//		if(j != temp_infor.cend()){
//		}
	}
	return 0;
}
