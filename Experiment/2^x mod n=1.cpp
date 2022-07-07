#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i, j, n;
	for (n;scanf_s("%d", &n) != EOF;)
	{
		if (n % 2 == 0 || n == 1)
		{
			cout << "2^? mod " << n << " = 1" << endl;
			continue;
		}
		i = 2, j = 1;
		while (i != 1)
		{
			j++;
			i += i;
			i %= n;
		}
		cout << "2^" << j << " mod " << n << " = 1" << endl;
	}
	return 0;
}
