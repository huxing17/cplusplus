#include<iostream>
using namespace std;
int main()
{
	int i, j, n, r, s;
	for (n;cin >> n;)
	{
		for (j = 1, s = 0;j <= n;j++)
		{

			for (i = 1, r = 1;i <= j;i++)
			{
				r = r * i;

			}
			s = s + r;
		}
		cout << s << endl;
	}
	return 0;
}
