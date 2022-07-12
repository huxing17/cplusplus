#include<iostream>
using namespace std;
int main()
{
	int gcd(int, int);
	int i, j, k;
	for (i, j;cin >> i, cin >> j;)
	{
		k = gcd(i, j);
		cout << k << endl;
	}
	return 0;
}

int gcd(int i, int j)
{
	int k;
	while (i % j != 0)
	{
		k = i % j;
		i = j;
		j = k;
	}
	return k;
}
