#include <iostream>
#include <numeric>
using namespace std;
int main()
{
	int arr[6] = { 0 };
	iota(arr, arr + 6, 20);
	cout << "The new array after asigning values is: ";
	for (int i = 0; i < 6; i++)
		cout << arr[i]<<" ";
}