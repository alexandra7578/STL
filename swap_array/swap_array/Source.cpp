#include <iostream>
#include <valarray>
using namespace std;
int main()
{
	valarray<int> varr1 = { 1,2,3,4 };
	valarray<int> varr2 = { 2, 4, 6, 8 };
	cout << "The contents of 1st valarray before swapping are: ";
	for (int& x : varr1)
		cout << x << " ";
	cout << endl;
	cout << "The contents of 2st valarray before swapping are: ";
	for (int& x : varr2)
		cout << x << " ";
	cout << endl;
	varr1.swap(varr2);
	cout << "The contents of 1st valarray after swapping are: ";
	for (int& x : varr1)
		cout << x << " ";
	cout << endl;
	cout << "The contents of 2st valarray after swapping are: ";
	for (int& x : varr2)
		cout << x << " ";
	cout << endl;
	return 0;
}