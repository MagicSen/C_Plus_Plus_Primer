#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int num[10]={};
	vector<int> num2;
	for(int i = 0 ; i< 10; i++)
	{
		num[i] = i;	
		num2.push_back(i);
	}
	for(auto i : num)
	{
		cout << i << " ";	
	}
	cout << endl;
	for(auto i : num2)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
