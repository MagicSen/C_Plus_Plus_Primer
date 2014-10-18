#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc < 4){
		cout << "Don't give the enough parameters." << endl;
	}
	ifstream fin(argv[1]);
	ofstream fout1(argv[2]);
	ofstream fout2(argv[3]);

	istream_iterator<int> file_in(fin);
	istream_iterator<int> eof;
	ostream_iterator<int> file_odd(fout1," ");
	ostream_iterator<int> file_even(fout2," ");
	while(file_in != eof)
	{
		int temp = *file_in++;	
		if(temp % 2 == 1){
			*file_odd++ = temp;
		}else{
			*file_even++ = temp;
		}

	}
	return 0;
}
