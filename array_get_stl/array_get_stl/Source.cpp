#include <iostream>
#include <array>
#include <tuple>
using namespace std;
int main()
{
	array<int, 6>ar = { 1,2,3,4,5,6 };
	cout << "The array elem are (using at()) :";
	for (int i = 0; i < 6; i++)
		cout << ar.at(i) << " ";
	cout << endl;

	cout << "The rray elem are(using get()): ";
	cout << get<0>(ar) << " " << get<1>(ar) << " ";
	cout << get<2>(ar) << " " << get<3>(ar) << " ";
	cout << get<4>(ar) << " " << get<5>(ar) << " ";
	cout << endl;
	cout << "The array elem are (using operator[]): ";
	for (int i = 0; i < 6; i++)
		cout << ar[i] << " ";
	cout << endl;
	return 0;
}