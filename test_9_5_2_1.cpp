#include <iostream>
#include <vector>
#include <string>

using namespace std;

void str_replace(string &s, const string &oldVal, const string &newVal)
{
	while(1){
		string::size_type index_n = s.find(oldVal,0);
		if(index_n == string::npos){
			break;
		}else{
			s.insert(s.begin() + index_n,newVal.begin(),newVal.end());
			s.erase(s.begin()+index_n+newVal.size(),s.begin()+index_n+newVal.size()+oldVal.size());
		}
	}

}

int main()
{
	string s = "Testing test tested est 1 2 3";
	cout << s << endl;
	str_replace(s,"est","ttt");
	cout << s << endl;
	return 0;
}


