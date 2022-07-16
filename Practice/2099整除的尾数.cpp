#include<iostream>
using namespace std;
#define N 100
int main()
{
	int a, b, num[N], i, t;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0) break;
		else
		{
			a *= 100;
			for (t = i = 0; i < 100; i++)
			{
				if ((a + i) % b == 0) num[t++] = i;
			}
			for (i = 0; i < t; i++)
			{
				if (num[i] < 10) printf("0%d", num[i]);
				else cout << num[i];
				if (i < t - 1)cout << " ";
				else cout << endl;
			}
		}
	}
	return 0;
}
