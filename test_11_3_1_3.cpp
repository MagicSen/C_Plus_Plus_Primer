#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <utility>

using namespace std;

int main()
{
	map<string, int> temp_map{{"ada",2},{"afvv",4},{"qer",5}};
//	map<string, int>::iterator map_it = temp_map.begin();
	map<string, int>::const_iterator map_it = temp_map.cbegin();

	return 0;
}
