#include <iostream>
#include <unordered_map>
using namespace std;
void printFrequencies(const string& str)
{
	unordered_map<string, int>wordFreq;
	stringstream ss(str);
	string word;
	while (ss >> word)
		wordFreq[word]++;
	unordered_map<string, int>::iterator p;
	for (p = wordFreq.begin(); p != wordFreq.end(); p++)
		cout << "(" << p->first << "," << p->second << ")\n";
}
int main()
{
	string str = "geeks for geeks geeks quiz practice qa for";
	printFrequencies(str);
	return 0;
}