#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int sum_a=0;
	int sum_e=0;
	int sum_i=0;
	int sum_o=0;
	int sum_u=0;
	int sum_other=0;
	char temp;
	while(cin >> temp){
		if(temp == 'a' || temp == 'A')
			++sum_a;
		else if( temp == 'e' || temp == 'E')
			++sum_e;
		else if( temp == 'i' || temp == 'I')
			++sum_i;
		else if( temp == 'o' || temp == 'O')
			++sum_o;
		else if( temp == 'u' || temp == 'U')
			++sum_u;
		else
			++sum_other;
	}
	cout << endl << "***********************" << endl;
	cout << "a: " << sum_a << " e: " << sum_e << " i: " << sum_i
	     << " o: " << sum_o << " u: " << sum_u 
	     << " other: " << sum_other  << endl;
	return 0;
}
