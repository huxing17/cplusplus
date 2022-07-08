#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double poly(int n, double x);
	int i, j, n;
	double x;
	for (x;cin >> x;)
	{
		cout << "  x";
		for (j = 2;j <= 6;j++)
			cout << setw(7) << "p" << j << "(x)";
		cout << endl;
		cout << fixed << setprecision(3) << x;
		for (i = 2;i <= 6;i++)
			cout << setw(11) << fixed << setprecision(6) << poly(i, x);
		cout << endl;
	}
	return 0;
}

double poly(int n, double x)
{
	double r;
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		r = ((2 * n - 1) * x * poly(n - 1, x) - (n - 1) * poly(n - 2, x)) / n;
	return r;
}
