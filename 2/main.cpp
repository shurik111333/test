#include <iostream>

using namespace std;

long long positivePower(int a, int n)
{
	long long *power = new long long[n + 1];
	for (int i = 0; i <= n; i++)
		power[i] = 0;
	power[0] = 1;
	for (int i = 1; i <= n; i++)
		if (i % 2 == 0)
			power[i] = power[i / 2] * power[i / 2];
		else
			power[i] = power[i / 2] * power[i / 2] * a;
	return power[n];
	delete[] power;
}

double negativePower(int a, int n)
{
	double *power = new double[n + 1];
	for (int i = 0; i <= n; i++)
		power[i] = 0;
	power[0] = 1;
	for (int i = 1; i <= n; i++)
	if (i % 2 == 0)
		power[i] = power[i / 2] * power[i / 2];
	else
		power[i] = power[i / 2] * power[i / 2] / a;
	return power[n];
	delete[] power;
}

int x;

void p(int x, int z)
{
	if (x > 0)
	{
		x = x - z;
		p(x, z + z / 2);
	}
	cout << x << " " << z << endl;
	x = x - z;
}

int main()
{
	x = 5;
	p(x, x + 1);
	cout << x << endl;
	return 0;
}