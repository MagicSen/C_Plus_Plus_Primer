#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> read_string(ifstream &fin);
int main()
{
	return 0;
}

vector<string> read_string(ifstream &fin)
{
	vector<string> strs_line;
	if(fin.is_open()){
		string tmp("");
		// Read a line.
	//	while(getline(fin,tmp))	
		// Read a words.
		while(fin >> tmp)
			strs_line.push_back(tmp);		
	}
	return strs_line;
}
