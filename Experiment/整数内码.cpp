#include<iostream>
using namespace std;
int main()
{
	int i, n;
	for (n;cin >> n;)
	{
		for (i = 31;i > -1;i--)
		{
			if (1 == ((n >> i) & 1))
				cout << 1;
			else
				cout << 0;
		}
		cout << " " << n << endl;
	}
	return 0;
}
