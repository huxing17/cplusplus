#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int MAX = 8;
int dp[MAX][10];
int d[MAX];
void init()
{
	dp[0][0] = 1;
	for (int i = 1;i < 7;i++)
		for (int j = 0;j <= 9;j++)
			for (int k = 0;k <= 9;k++)
				if (j != 4 && !(j == 6 && k == 2))
					dp[i][j] += dp[i - 1][k];
}
int solve(int n)
{
	int ans = 0;
	int len = 0;
	while (n)
	{
		++len;
		d[len] = n % 10;
		n /= 10;
	}
	d[len + 1] = 0;
	for (int i = len;i >= 1;i--)
	{
		for (int j = 0;j < d[i];j++)
			if (d[i + 1] != 6 || j != 2) ans += dp[i][j];
		if (d[i] == 4 || (d[i + 1] == 6 && d[i] == 2)) break;
	}
	return ans;
}
int main()
{
	int m, n;
	init();
	while (scanf_s("%d%d", &m, &n) == 2)
	{
		if (n == 0 && m == 0) break;
		printf("%d\n", solve(n + 1) - solve(m));
	}
	return 0;
}
