#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> vect = { 2, 1, 5, 6, 8, 7 };
	stable_partition(vect.begin(), vect.end(), [](int x)
		{
			return x % 2 == 0;
		});
	cout << "The partitioned vector is: ";
	for (int& x : vect)
		cout << x << " ";
	cout << endl;
	vector<int>::iterator it1;
	auto it = partition_point(vect.begin(), vect.end(), [](int x)
		{
			return x % 2 == 0;
		});
	cout << "The vectore elem returning true for condition are: ";
	for (it1 = vect.begin(); it1 != it; it1++)
		cout << *it1 << " ";
	cout << endl;
	return 0;
}