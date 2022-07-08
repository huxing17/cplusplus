/*#include<iostream>
using namespace std;
int main()
{
	int n, i,j;
	for (n;cin >> n;)
	{
		for (i = 0;i < n;i++)
		{
			cout << string(i, ' ');
			for (j = 1;j <= n - i - 1;j++)
				cout << "ST";
			cout << string(1, 'S') << endl;
		}
	}
	return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
	for (n;cin >> n;)
	{
		for (i = 0;i < n;i++)
		{
			cout << string(i, ' ');
			for (j = 0;j < 2 * (n - i) - 1;j++)
				if (j%2 == 0)
					cout << 'S';
				else cout << 'T';
			cout << endl;
		}
	}
	return 0;
}
