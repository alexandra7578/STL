#include <iostream>
#include <queue>
using namespace std;
void showq(priority_queue<int>q)
{
	priority_queue<int >g = q;
	while (!g.empty())
	{
		cout << " " << g.top();
		g.pop();
	}
	cout << endl;
}
int main()
{
	priority_queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(30);
	gquiz.push(5);
	gquiz.push(20);
	gquiz.push(1);
	cout << "The priority queue gquiz is: ";
	showq(gquiz);
	cout << "gquiz.size()" << gquiz.size();
	cout << "gquiz.top()" << gquiz.top();
	cout << "gquiz.pop(): ";
	gquiz.pop();
	showq(gquiz);
	return 0;

}