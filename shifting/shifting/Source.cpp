#include <iostream>
#include <valarray>
using namespace std;

int main()
{
	valarray<int> varr = { 10,2,20,1,30 };
	valarray<int> varr1;
	varr1 = varr.shift(2);
	cout << "The new valarray after shifting is: ";
	for (int& x : varr1)
		cout << x << " ";
	cout << endl;
	varr1 = varr.cshift(-3);
	cout << "The new valarray after circular shifting is: ";
	for (int& x : varr1)
		cout << x << " ";
	cout << endl;
	return 0;
}