#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
	map<int, int> qmap;
	qmap.insert(pair<int, int>(1, 40));
	qmap.insert(pair<int, int>(2, 30));
	qmap.insert(pair<int, int>(3, 60));
	qmap.insert(pair<int, int>(4, 20));
	qmap.insert(pair<int, int>(5, 50));
	qmap.insert(pair<int, int>(6, 50));
	qmap[7] = 10;
	map<int, int>::iterator itr;
	cout << "\n The map qmap is: ";
	cout << "\tKEY\tElement\n";
	for (itr = qmap.begin(); itr != qmap.end(); ++itr)
	{
		cout << "\t" << itr->first << '\t' << itr->second<<endl;
	}
	cout << endl;
	map<int, int> qmap2(qmap.begin(), qmap.end());
	cout << "\n The map qmap2 after assign from qmap is: \n";
	cout << "\tKEY\telement\n";
	for (itr = qmap2.begin(); itr != qmap2.end(); ++itr)
	{
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	}
	cout << endl;
	cout << "\nqmap2 after removal of elem less than key=3 :\n";
	cout << "\tKEY\tELEMENT\n";
	qmap2.erase(qmap2.begin(), qmap2.find(3));
	for (itr = qmap2.begin(); itr != qmap2.end(); ++itr)
		cout << "\t" << itr->first << "\t" << itr->second<<endl;
	cout << endl;
	int num;
	num = qmap2.erase(4);
	cout << "\nqmpa2.erase(4)" << num << "removed\n";
	cout << "\t KEY\t Element\n";
	for (itr = qmap2.begin(); itr != qmap2.end(); ++itr)
		cout << "\t" << itr->first << "\t" << itr->second << endl;
	cout << "qmap.lower_bound(5): " << "\tKEY= ";
	cout << qmap.lower_bound(5)->first << '\t';
	cout << "\tELEMENT =	" << qmap.lower_bound(5)->second << endl;
	cout << "qmap.upper_bound(5): " << "\tKEY= ";
	cout << qmap.upper_bound(5)->first << "\t";
	cout << "\tELEMENT = " << qmap.upper_bound(5)->second << endl;
	return 0;
}