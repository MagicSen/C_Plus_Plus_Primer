#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
#include <vector>
#include <string>

using namespace std;
using namespace placeholders;

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr == 1) ? word : word+ending;
}

void elimDups(vector<string> words)
{
	sort(words.begin(), words.end());

	auto end_unique = unique(words.begin(), words.end());

	words.erase(end_unique, words.end());
}

bool check_size(const string &s, vector<string>::size_type sz)
{
	return s.size() < sz;
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	// Sort and delete the repeated words
	elimDups(words);

	// Sorted by length
	stable_sort(words.begin(), words.end(), [] (const string &a, const string &b) {return a.size() < b.size();});

//	auto wc = find_if(words.begin(), words.end(), [sz] (const string &a) { return a.size() >= sz;});
//	auto wc = partition(words.begin(), words.end(), [sz](const string &a) {return a.size() < sz;});
	auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
//	auto wc = stable_partition(words.begin(), words.end(), [sz](const string &a) {return a.size() < sz;});
	auto count = words.end()-wc;
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;

	for_each(wc, words.end(), [] (const string &s) {cout << s << " ";});
	cout << endl;
}
int main()
{
	vector<string> words{"aaaaa","aa","bbb","ccccccccc","eeee","abcdsed"};
	biggies(words, 3);
	return 0;
}
