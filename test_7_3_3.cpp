#include <iostream>

class X;
class Y;
class X{
	Y *p_y;
};
class Y{
	X x;
};

int main()
{
	return 0;	
}
