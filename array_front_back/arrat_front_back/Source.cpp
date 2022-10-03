#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int, 6> ar = { 1,2,3,4,5,6 };
	cout << "First elem of array is: ";
	cout << ar.front() << endl;

	cout << "Last elem of array is: ";
	cout << ar.back() << endl;
	return 0;
}