#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int arr[] = { 5, 10, 15, 20, 20, 23, 42, 45 };
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> vect(arr, arr + n);
	cout << "Distance between first to max elem: ";
	cout << distance(vect.begin(), max_element(vect.begin(), vect.end()));
}