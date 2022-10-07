#include <iostream>
#include <unordered_set>
using namespace std;
typedef unordered_multiset<int>::iterator umit;
void printUset(unordered_multiset<int>ums)
{
	umit it = ums.begin();
	for (; it != ums.end(); it++)
		cout << *it << " ";
	cout << endl;
}
void erase_one_entry(unordered_multiset<int>& ums, int val)
{
	umit it = ums.find(val);
	if (it != ums.end())
		ums.erase(it);
}
int main()
{
	unordered_multiset<int>ums({ 1,3,1,7,2,3,4,1,6 });
	int val = 1;
	printUset(ums);
	erase_one_entry(ums, val);
	printUset(ums);
	return 0;
}