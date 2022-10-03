#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
	forward_list<int> flist1;
	forward_list<int> flist2;
	forward_list<int> flist3;
	flist1.assign({ 1,2,3 });
	flist2.assign( 5,10 );
	flist3.assign(flist1.begin(), flist1.end());
	cout << "The elem of first forward list are: ";
	for (int& a : flist1)
		cout << a << " ";
	cout << endl;
	cout << "The elem of second forward list are: ";
	for (int& b : flist2)
		cout << b << " ";
	cout << endl;
	cout << "The elem of third forward list are: ";
	for (int& c : flist3)
		cout << c << " ";
	cout << endl;
	return 0;
}