#include <iostream>
#include <queue>
using namespace std;
void showq(queue<int>gq)
{
	queue<int> q = gq;
	while (!q.empty())
	{
		cout << " " << q.front();
		q.pop();
	}
	cout << endl;
}
int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);
	cout << "The queue gquiz is: ";
	showq(gquiz);
	cout << "\n gquiz.size(): " << gquiz.size();
	cout << "\n gquiz.front(): " << gquiz.front();
	cout << "\n gquiz.back(): " << gquiz.back();
	cout << "\n gquize.pop(): ";
	gquiz.pop();
	showq(gquiz);
	return 0;
}