#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 6>ar = { 1,2,3,4,5,6 };
	cout << "The number of array elem is: ";
	cout << ar.size() << endl;
	cout << "Maximum elem array can hold is: ";
	cout << ar.max_size() << endl;
	return 0;
}