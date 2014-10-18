#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<const char*> temp1{"123","233","333"};
	vector<const char*> temp2{"12","233","333"};
	cout << equal(temp1.cbegin(), temp1.cend(), temp2.cbegin()) << endl;
	return 0;
}
