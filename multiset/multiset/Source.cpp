#include <iostream>
#include <set>
using namespace std;
int main()
{
	multiset<int>a;
	a.insert(10);
	a.insert(10);
	a.insert(10);
	cout << a.count(10) << endl;
	a.erase(a.find(10));
	cout << a.count(10) << endl;
	a.erase(10);
	cout << a.count(10) << endl;
	return 0;
}