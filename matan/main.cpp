#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	ofstream fout("out1.txt");
	for (long long i = 2; i < 100000; i++)
	{
		double k = sqrt(i * i - i);
		fout << setprecision(15) << k - (int)k << endl;
	}
	return 0;
}