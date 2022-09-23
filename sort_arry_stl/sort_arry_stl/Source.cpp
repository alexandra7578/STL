#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[], int arry_size)
{
	for (int i = 0; i < arry_size; i++)
		cout << a[i] << " ";
}

int main()
{
	int a[] = { 1,5,8,9,6,7,3,4,2,0 };
	int asize = sizeof(a) / sizeof(a[0]);
	cout << "The arry beafore sortig is: \n";
	show(a, asize);
	sort(a, a + asize);
	cout << "\n The arry after sorting is: \n";
	show(a, asize);
	return 0;
}