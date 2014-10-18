#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int temp[]={10,22,33,44};
	int temp2[4];
	vector<int> v_a(begin(temp),end(temp));
	for(auto i:v_a)
	{
		cout << i << endl;	
	}
	auto p_end = end(temp2);
	for(int i = 1;i < v_a.size() && &(temp2[i]) != p_end; i++)
	{
		temp2[i] = v_a[i];
		cout << temp2[i] << endl;
	}
	return 0;
}
