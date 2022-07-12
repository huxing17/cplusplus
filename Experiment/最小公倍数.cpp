#include<iostream>
using namespace std;
int main()
{
	int scm(int i, int j);
	int i, j, k, l;
	for (i, j;cin >> i, cin >> j;)
	{
		k = scm(i, j);
		l = i * j / k;
		cout << l << endl;
	}
	return 0;
}

int scm(int i, int j)
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
