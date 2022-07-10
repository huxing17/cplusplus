#include<iostream>
using namespace std;
int main()
{
	int n, i;
	char c;
	for (c, n;cin >> c, cin >> n;)
	{
		for (i = 0;i < n;i++)
		    cout << string(n - i - 1, ' ') << string(2 * i + 1, c) << endl;
		for (i = n - 1;i < n && i>0;i--)
			cout << string(n - i, ' ') << string(2 * i - 1, c) << endl;
	}
	return 0;
}
