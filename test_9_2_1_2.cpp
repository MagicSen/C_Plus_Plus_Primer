#include <iostream>
#include <vector>

using namespace std;

bool get_number(const vector<int>::iterator &begin, const vector<int>::iterator &end, int num)
{
	for(auto i=begin; i != end; ++i)
	{
		if(*i == num){
			return true;
		}
	}
	return false;
}
vector<int>::iterator get_number_2(const vector<int>::iterator &begin, const vector<int>::iterator &end, int num)
{

	for(auto i=begin; i != end; ++i)
	{
		if(*i == num){
			return i;
		}
	}
	return end;
}
int main()
{
	vector<int> temp{1,11,2,22,3,44,99};
	cout << get_number(temp.begin(),temp.end(),10) << endl;
	cout <<  get_number_2(temp.begin(),temp.end(),33)-temp.begin() << endl;
	return 0;
}
