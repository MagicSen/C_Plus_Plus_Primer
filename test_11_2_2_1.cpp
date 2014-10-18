#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <list>
#include <map>
#include <set>

#include <string>
#include "Sales_date.h"

using namespace std;

bool compareIsbn(const Sales_date &s1, const Sales_date &s2)
{
	return s1.isbn() < s2.isbn();
}
int main()
{
//	map<string, list<string>> word_exist_line;
//	map<vector<int>::iterator, int> temp1;
//	map<list<int>::iterator, int> temp2;
	auto f = [](const Sales_date &s1, const Sales_date &s2) {return s1.isbn() < s2.isbn();};
//	multiset<Sales_date, decltype(compareIsbn) *> 
//	multiset<Sales_date, bool(*)(const Sales_date &s1, const Sales_date &s2)> bookstore(compareIsbn);
	multiset<Sales_date, bool(*)(const Sales_date &s1, const Sales_date &s2)> bookstore(f);

	return 0;
}
