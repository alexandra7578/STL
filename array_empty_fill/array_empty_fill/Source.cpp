#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int, 6>ar;
	array<int, 0>ar1;
	ar1.empty() ? cout << "Array empty" :
		cout << "Array not empty";
	cout << endl;
	ar.fill(0);

	cout << "Array after filling operation is: ";
	for (int i = 0; i < 6; i++)
		cout << ar[i]<<" ";
	cout << endl;
	return 0;

}