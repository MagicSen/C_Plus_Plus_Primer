#include <iostream>
#include <cstdlib>
#include <string>

using std::string;
using std::cout;
using std::cin;

bool str_subrange(const string &str1, const string &str2);
int main()
{
//	if(some_failure)
//		return EXIT_FAILURE;
//	else
//		return EXIT_SUCCESS;
	return 0;
}

bool str_subrange(const string &str1, const string &str2)
{
	if(str1.size() == str2.size())
		return str1 == str2;
	auto size = ( str1.size() < str2.size())
			? str1.size() : str2.size(); 
	for( decltype(size) i=0; i!=size; ++i){
		if(str1[i] != str2[i])	
			return false;
	// Can't find the wronge.
	}
}
