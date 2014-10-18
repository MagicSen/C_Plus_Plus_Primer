#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

bool is_empty(const string &s)
{
	return s.empty();
}
bool is_bigger(const string &s)
{
	if(is_empty(s))
		return false;
	else{
		bool fig = false;
		for(string::size_type i=0; i<s.size(); i++)	
		{
			if(s[i]>= 'A' && s[i] <= 'Z'){
				fig = true;
				break;
			}
		}
		return fig;
	}
}
void change_lower(string &s)
{
	if(!is_empty(s)){
		for(string::size_type i=0; i<s.size(); i++)
		{
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] = s[i] - 'A' + 'a';	
			}
		}
	}
}
void put_double(int temp)
{
	cout << temp << endl;
}
int main()
{
	
	string temp;
	cin >> temp;
	cout << is_bigger(temp) << endl;	
	change_lower(temp);
	cout << temp << endl;; 
	put_double(10.12);
	return 0;
}
