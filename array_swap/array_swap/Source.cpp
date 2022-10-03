#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int, 6>ar = { 1,2,3,4,5,6 };
	array<int, 6>ar1 = { 7,8,9,10,11,12 };
	cout << "The first array elem before swapping are: ";
	for (int i = 0; i < 6; i++)
		cout << ar[i] << " ";
	cout << endl;
	cout << "The second array elem before swapping are: ";
	for (int i = 0; i < 6; i++)
		cout << ar1[i] << " ";
	cout << endl;
	ar.swap(ar1);
	cout << "The first array elem before swapping are: ";
	for (int i = 0; i < 6; i++)
		cout << ar[i] << " ";
	cout << endl;
	cout << "The second array elem before swapping are: ";
	for (int i = 0; i < 6; i++)
		cout << ar1[i] << " ";
	cout << endl;
	return 0;
}