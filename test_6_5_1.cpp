#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string make_plural(size_t ctr,const string &word,const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}
int main()
{
	string temp1 = "success";
	string temp2 = "failure";
	cout << make_plural(1,temp1) << endl;
	cout << make_plural(2,temp2) << endl;
	return 0;
}
