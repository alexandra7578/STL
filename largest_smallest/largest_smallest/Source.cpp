#include<iostream>
#include <valarray>
using namespace std;
int main()
{
	valarray<int> varr = { 10,2,20,1,30 };
	cout << "The largest elem of valarray is: ";
	cout << varr.max() << endl;
	cout << "The smallest elem of valarray is: ";
	cout << varr.min() << endl;
	return 0;
}