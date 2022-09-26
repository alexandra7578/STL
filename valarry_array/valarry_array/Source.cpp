#include <iostream>
#include <valarray>
using namespace std;

int main()
{
	valarray<int> varr = { 10, 2, 20, 1, 30 };
	valarray<int> varr1;
	varr1 = varr.apply([](int x) {return x = x + 5; });
	cout << "The new valarray with manipulated values is: ";
	for (int& x : varr1)
		cout << x << " ";
	cout << endl;
	cout << "The sum of old valarray is: ";
	cout << varr.sum() << endl;
	cout << "The sum of new valarray is: ";
	cout << varr1.sum() << endl;
	return 0;
}