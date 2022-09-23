#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int array[] = { 10,20,5,23,42,20,25 };
	int n = sizeof(array) / sizeof(array[0]);
	vector<int>vect(array, array + n);
	cout << "Occurrences of 20 in vector : ";
	cout << count(vect.begin(), vect.end(), 20);
	find(vect.begin(), vect.end(), 5) != vect.end()?
							cout << "\nElemet found":
							cout << "\n Elemet not found";
}