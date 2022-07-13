#include<iostream>
using namespace std;
int main()
{
	int i, n, sum, a[40];

	for (n;cin >> n;)
	{
		if (n < 4)
			cout << "1" << endl;
		else
		{
			a[1] = a[2] = a[3] = 1;
			for (i = 4, sum = 0;i <= n;i++)
			{
				a[i] = a[i - 1] + a[i - 3];
				sum = a[i];
			}
			cout << sum << endl;
		}
	}
	return 0;
}
