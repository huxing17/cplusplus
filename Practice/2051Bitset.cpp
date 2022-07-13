#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, i, j, k;
	while (cin >> n)
	{
		j = 1, k = 0;
		while (n != 0)
		{
			i = n % 2;
			k = k + i * j;
			n = n / 2;
			j = j * 10;
		}
		cout << k << endl;
	}
	return 0;
}
