#include <iostream>
#include <sstream>
using namespace std;

istream &show_input(istream &in);
int main()
{
	istringstream temp("You are the best one!");
	istream &in = show_input(temp);
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
