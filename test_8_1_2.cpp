#include <iostream>
using namespace std;

istream &show_input(istream &in);
int main()
{
	istream &in = show_input(cin);
	if(in.good())
		cout << "Good" << endl;
	else 
		cout << "Bad" << endl;
	return 0;
}

istream &show_input(istream &in)
{
	string line;
	while(getline(in,line))
		cout << line << endl;
	in.clear();
	return in;
}
