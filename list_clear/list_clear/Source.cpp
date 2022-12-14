#include <forward_list>
#include <iostream>
using namespace std;
int main()
{
	forward_list<int> flist{ 1,2,3,4,5 };
	cout << "Forward list: ";
	for (auto i : flist) {
		cout << i << " ";
	}
	cout << endl;
	flist.clear();
	cout << "Forward list after using clear function: ";
	for (auto it = flist.begin(); it != flist.end(); ++it)
		cout << ' ' << *it;
	cout << endl;
	return 0;
}