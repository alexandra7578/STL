#include <iostream>
#include <unordered_map>
using namespace std;
void printUmm(unordered_multimap<string, int>& umm)
{
	auto it1 = umm.begin();
	for (; it1 != umm.end(); it1++)
		cout << "<" << it1->first << ", " << it1->second << "> "<<endl;
}
int main()
{
	unordered_multimap<string, int>umm{
		{"apple", 1},{"ball", 2},{"apple", 10},
		{"cat", 7}, {"dog", 9}, {"cat", 6},
		{"apple", 1}
	};
	auto it = umm.begin();
	while (it != umm.end())
	{
		if (it->second)
			break;
		it++;
	}
	if (it != umm.end())
		umm.erase(it);
	cout << "Afrer deletion of value 1 from umm" << endl;
	printUmm(umm);
	return 0;
}