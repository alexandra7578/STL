#include <iostream>
#include <queue>
using namespace std;
void showpq(priority_queue<int, vector<int>, greater<int>>gq)
{
	priority_queue<int, vector<int>, greater<int>>g = gq;
	while (!g.empty())
	{
		cout << "\n" << g.top();
		g.pop();
	}
	cout << endl;
}
int main()
{
	priority_queue<int, vector<int>, greater<int>>gquiz;
	gquiz.push(10);
	gquiz.push(30);
	gquiz.push(20);
	gquiz.push(5);
	gquiz.push(1);
	cout << "The priority queue gquiz is: ";
	showpq(gquiz);
	cout << "\n gquiz.size()" << gquiz.size();
	cout << "\n gquiz.top()" << gquiz.top();
	cout << "\n gquiz.pop(): ";
	gquiz.pop();
	showpq(gquiz);
	return 0;
}