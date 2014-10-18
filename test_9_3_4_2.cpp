// 9.28
#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

void insert_str(forward_list<string> &str_for,const string &str1, const string &str2);
int main()
{
//	forward_list<string> str_for{"123","abc"};	
	forward_list<string> str_for;	
	insert_str(str_for, "123", "456");

	for(auto i : str_for)
		cout << i << " ";
	cout << endl;
	return 0;
}

void insert_str(forward_list<string> &str_for,const string &str1, const string &str2)
{
	auto pre = str_for.before_begin();
	auto iterator = str_for.begin();
	while(iterator != str_for.end())
		if(*iterator == str1){
			str_for.insert_after(iterator, str2);
			return ;
		}else{
			pre = iterator;
			++iterator;
		}
	str_for.insert_after(pre,str2);
	return ;
}
