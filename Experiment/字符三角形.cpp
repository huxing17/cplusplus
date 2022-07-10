#include<iostream>
using namespace std;
int main()
{
	int n, i;
	char c;
	for (c, n;cin >> c, cin >> n;)
	{
		for (i = 0;i < n;i++)
		{
			cout << string(n - i - 1, ' ');
			cout << string(2 * i + 1, c) << endl;
		}
	}
	return 0;
}
