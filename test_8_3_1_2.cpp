#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argv,char **argc)
{
	vector<string> file_str;
	ifstream in(argc[1]);
	if(!in.is_open()){
		cerr << "Can't open the given file." << endl;
		return -1;
	}
	string temp;
	while(getline(in,temp))
		file_str.push_back(temp);
	for(auto i : file_str)
	{
		istringstream in_str(i);	
		string words;
		while(in_str >> words)
			cout << words << " ";
		cout << endl;
	}
	return 0;
}
