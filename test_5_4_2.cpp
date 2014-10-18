#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> vt_1{1,2,3,4,5,8};
	vector<int> vt_2{1,2,3,4,5,6,7};
	if(vt_1.size() >= vt_2.size()){
		size_t i=0;
		for(; i<vt_2.size() && vt_1[i] == vt_2[i]; i++)
		;
		if(i == vt_2.size())
			cout << "vt_2 is the vt_1's subsequence."<< endl;
		else
			cout << "vt_2 is not the vt_1's subsequence."
			     << endl;
	}else{
		size_t i=0;
		for(; i<vt_1.size() && vt_1[i] == vt_2[i]; i++)
		;
		if(i == vt_1.size())
			cout << "vt_1 is the vt_2's subsequence."<< endl;
		else
			cout << "vt_1 is not the vt_2's subsequence."<< endl;
	
	}
	return 0;
}
