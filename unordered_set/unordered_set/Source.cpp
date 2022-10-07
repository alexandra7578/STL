#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	unordered_set<string> string_set;
	string_set.insert("code");
	string_set.insert("in");
	string_set.insert("c++");
	string_set.insert("is");
	string_set.insert("fast");
	string key = "slow";
	if (string_set.find(key) == string_set.end())
		cout << key << " not found" << endl;
	else
		cout << "Found " << key << " ";
	key = "c++";
	if (string_set.find(key) == string_set.end())
		cout << key << " not found\n";
	else
		cout << "Found " << key << " ";
	cout << "\n All elements: ";
	unordered_set<string>::iterator itr;
	for (itr = string_set.begin(); itr != string_set.end(); ++itr)
		cout << (*itr) << endl;
	return 0;
}