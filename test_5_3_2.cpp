#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int ff_num = 0;
	int fl_num = 0;
	int fi_num = 0;
	char temp;
	while( cin >> temp)
	{
		if ( temp == 'f' && cin >> temp){
			if( temp == 'f' )
				ff_num += 1;
			else if(temp == 'l')
				fl_num += 1;
			else if(temp == 'i')
				fi_num += 1;
			else
				;
		}
	}
	cout << ff_num << " " << fl_num << " " << fi_num << endl;
	return 0;
}
