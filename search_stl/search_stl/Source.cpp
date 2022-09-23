#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[], int arrysize)
{
	for (int i = 0; i < arrysize; i++)
		cout << a[i] << ",";
}

int main()
{
	int a[] = { 1,5,8,9,6,7,3,4,2,0 };
	int asize = sizeof(a) / sizeof(a[0]);
	cout << "The array is: \n";
	show(a, asize);

	cout << "\n Let's say we want to search for in the arry so, we first sort the arry: \n";
	sort(a, a + asize);
	cout << "\n The array after sorting is: \n";
	show(a, asize);
	cout << "\nNow, we do the binary search: \n";
	if (binary_search(a, a + 10, 2))
		cout << "Element 2 found in the array"<<endl;
	else
		cout << "Element 2 not found in the array"<<endl;
	if (binary_search(a, a + 10, 10))
		cout << "Element 10 found in the array"<<endl;
	else
		cout << "Element 10 not found in the array"<<endl;
	return 0;
}