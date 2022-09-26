#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int arr1[6];
	copy_n(arr, 6, arr1);
	cout << "The new arry after copying is: ";
	for (int i = 0; i < 6; i++)
		cout << arr1[i] << " ";
	return 0;
}