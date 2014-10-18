#include <iostream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;
int main()
{
	int a=0;
	int b=0;
	cout << "Please give me two integer to add:"<< endl;
	cin >> a >> b;
	try{
		if (b == 0)
			throw runtime_error("Over flow.");
		else
			cout << a/b << endl;
	}catch(runtime_error err){
		cout << err.what() << endl;
	}
	return 0;
}
