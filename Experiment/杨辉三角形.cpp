#include<iostream>
#include<iomanip>
using namespace std;
class PascalTriangle
{
private:
	int i, j, n;
public:
	void format(int* a, int n);
	int* data(int n);
};

void PascalTriangle::format(int* a, int n)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
			cout << setw(3) << " ";
		for (j = 0; j <= i; j++)
			cout << setw(6) << a[i * n + j];
		cout << endl;
	}
}

int* PascalTriangle::data(int n)
{
	int* a = new int[n * n];
	for (i = 0; i < n * n; i++)
		a[i] = 0;
	a[0] = a[n] = a[n + 1] = 1;
	for (i = 2; i < n; i++)
	{
		a[i * n] = 1;
		a[i * n + i] = 1;
		for (j = 1; j < i; j++)
		{
			a[i * n + j] = a[(i - 1) * n + j - 1] + a[(i - 1) * n + j];
		}
	}
	return a;
}

int main()
{
	int n;
	PascalTriangle p;
	while (cin >> n)
	{
		int* pDate = p.data(n);
		p.format(pDate, n);
	}
	return 0;
}
