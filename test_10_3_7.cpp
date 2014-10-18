#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int i = 10;
	auto f = [&] () ->bool { if(i == 0) return true; else {while(--i); return false;}};
	cout << f() << endl;
	cout << f() << endl;
	return 0;
}
