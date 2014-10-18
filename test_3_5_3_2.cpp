#include <iostream>
#include <iterator>
#include <vector>

using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main()
{
	vector<int> temp1(13,1);
	vector<int> temp2{1,1,1,1,1,1,1,1,1,1};
	int a1[]={0,0,0,0,0,0,0,0,0};
	int a2[10]={0,0,0,0,0,0,0,0,0,0};
	bool fig=true;
	if(temp1.size() == temp2.size())
	{
		for(int i = 0; i < temp1.size(); i++)
		{
			if(temp1[i] != temp2[i])	
			{
				fig = false;
				break;
			}
		}
	}
	else{
		fig = false;	
	}
	cout << "Those two vector is " << fig << endl;
	auto p1_begin = begin(a1);
	auto p1_end = end(a1);
	auto p2_begin = begin(a2);
	auto p2_end = end(a2);
	bool fig2 = true;
	if(p1_end - p1_begin == p2_end - p2_begin)
	{
		while(p1_begin != p1_end)	
		{
			if(*p1_begin != *p2_begin)
			{
				fig2 = false;
				break;
			}
			p1_begin++;
			p2_begin++;
		}
	}
	else{
		fig2 = false;	
	}
	cout << "Those two array is " << fig2 << endl;
	return 0;
}
