#include <iostream>
#include <string>
#include <vector>

using namespace std;

string set_prefix_and_suffix(string s,const string &prefix, const string &suffix)
{
	s.insert(s.begin(),prefix.begin(),prefix.end());
	s.insert(s.end(),suffix.begin(),suffix.end());
	return s;
}
int main()
{
	string name = "Magic Yang";
	cout << name << endl;
	name = set_prefix_and_suffix(name,"Mr ", " III");
	cout << name << endl;
	return 0;
}
