#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
struct PersonInfo{
	string name;
	vector<string> phones;
};
int main(int argc, char **argv)
{
	string line,word;
	vector<PersonInfo> people;
	ifstream in(argv[1]);
	if(in.is_open()){
		cerr << "Can't opened" << endl;
		return -1;
	}
	while(getline(in,line))
	{
		PersonInfo info;
		istringstream record(line);
		while(recore >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	return 0;
}
