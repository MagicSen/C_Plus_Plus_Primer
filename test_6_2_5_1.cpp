#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(int argc,char **argv)
{
	if(argc == 3){
		string temp(argv[1]);
		string temp2(argv[2]);
		temp += temp2;
		cout << temp << endl;
	}else if(argc > 3){
		for(size_t i= argc; i > 0; i--)	
			cout << argv[argc-i+1]<< " " ;
		cout << endl;
	}
	return 0;
}
