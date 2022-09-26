#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> vect = { 2, 1, 5, 6, 8, 7 };
	vector<int> vect1;
	vector<int>vect2;
	int n = count_if(vect.begin(), vect.end(), [](int x)
		{
			return x % 2 == 0;
		});
	vect1.resize(n);
	vect2.resize(vect.size() - n);
	partition_copy(vect.begin(), vect.end(), vect1.begin(), vect2.begin(), [](int x)
		{
			return x % 2 == 0;
		});
	cout << "The elem that return true for condition are: ";
	for (int& x : vect1)
		cout << x << " ";
	cout << endl;
	cout << "The elem that return false for condition are: ";
	for (int& x : vect2)
		cout << x << " ";
	cout << endl;
	return 0;
}