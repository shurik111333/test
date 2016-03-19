#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class A
{};

//template<T assign A>
int min()
{}

int main()
{
	list<int> l1;
	l1.insert(l1.begin(), 2);
	l1.insert(l1.begin(), 4);
	
	list<int> l2;
	l2.insert(l2.begin(), 8);
	l2.insert(l2.begin(), 10);
	
	list<list<int>> l;
	l.insert(l.begin(), l1);
	l.insert(l.begin(), l2);
	cout << (all_of(l.begin(), l.end(), 
	                [](list<int> &l) {return all_of(l.begin(), l.end(), 
	                                                      [](int x) {return ((x % 2) == 0);});}) 
	        ? "YES" : "NO") << endl;
	return 0;
}

