#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char cs1[10] = "123456789";
	char cs2[20] = "abcdefghigklmno";
	char sum[30];
	strcpy(sum,cs1);
	strcat(sum," ");
	strcat(sum,cs2);
	cout << sum << endl;
	return 0;
}
