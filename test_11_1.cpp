#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc < 2){
		cerr << "Don't give enough parameter." << endl;
		return -1;	
	}
	
	ifstream file_in;
	file_in.open(argv[1]);
	map<string, size_t> words;
	string temp;
	while(file_in >> temp)
	{
		transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
		auto pos = temp.find_first_of(",.?!");
		if( pos == string::npos){
			++words[temp];	
		}else{
			++words[temp.substr(0,pos)];
		//	cout << temp[pos] << " " << endl;
		}
	}

	for(const auto &i : words)
	{
		cout << i.first << " occurs " << i.second << ((i.second > 1) ? " times." : " time.") << endl;	
	}
	return 0;
}
