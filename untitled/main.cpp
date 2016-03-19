#include <cstdio>
#include <cmath>
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() 
{
	map<int, int> m1;
	unordered_map<int, int> m2;
	for (int i = 100; i > 0; i--)
	{
		m1.insert(pair<int, int>(i, i));
		m2.insert(pair<int, int>(i, i));
	}
	cout << (*m1.begin()).first << endl;
	cout << (*m2.begin()).first << endl;
	return 0;
}