#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[6] = { 1, 2, 3, 4,5 , -6 };
	all_of(arr, arr + 6, [](int x) {return x <0;  }) ?
		cout << "There exists a negativ elem" :
		cout << "All are  positive elem";
	return 0;
}