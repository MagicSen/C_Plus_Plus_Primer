// 9.31
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	list<int> int_list{1,2,3,4,5,6,7,8,9};
	auto itera = int_list.begin(); 
	// End iterator is vaild.
	auto itera_end = int_list.end();
	while(itera != itera_end)
	{
		if( *itera % 2){
			itera = int_list.insert(itera, *itera);
			itera++;
			itera++;
		}else{
			itera = int_list.erase(itera);
		}
	}
	for(auto i:int_list)
	{
		cout << i << " ";	
	}
	cout << endl;
	return 0;
}
