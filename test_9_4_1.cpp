#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> origin_vec;
	for(int i=0; i < 10; ++i)
	{
		cout << "The vector's Size: " << origin_vec.size()	
		     << ", The vector's Capacity: " << origin_vec.capacity() << endl;
		origin_vec.push_back(i);
	}
	
	return 0;
}
