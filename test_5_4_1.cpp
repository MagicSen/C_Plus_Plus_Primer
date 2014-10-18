#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> words;
	vector<int> words_frequence;
	string temp;
	int i = 1;
	while(cin >> temp)
	{
		if(words.size() == 0)
			words.push_back(temp);
		else{
			if(temp == words[words.size()-1]){
				++i;
			}else{
				words_frequence.push_back(i);
				words.push_back(temp);
				i = 1;
			}
		}
	}
	if(temp == words[words.size()-1]){
		words_frequence.push_back(i);
		words.push_back(temp);
	}
	size_t max_index = 0;
	for(size_t j=0; j<words_frequence.size(); j++)
	{
		if(words_frequence[j] > words_frequence[max_index])
			max_index = j;
	}
	cout << "The max repeat words is " << words[max_index] << " times " 
	     << words_frequence[max_index] << endl;
	return 0;
}
