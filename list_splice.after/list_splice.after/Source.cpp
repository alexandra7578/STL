#include <forward_list>
#include <iostream>
using namespace std;
int main()
{
	forward_list<int> flist = { 10,20,30 };
	forward_list<int> flist2 = { 40,50,60 };
	flist2.splice_after(flist2.begin(), flist);
	cout << "The forward list after splice_afteroperation: ";
	for (int& c : flist2)
		cout << c << " ";
	cout << endl;
	return 0;
}