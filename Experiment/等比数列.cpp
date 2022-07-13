#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, n;
	float q, m, s;
	for (n, q;cin >> n, cin >> q;)
	{
		m = q;
		for (i = 1, s = 1;i <= n;i++)
		{
			s = s + m;
			m = m * q;
		}
		cout << setiosflags(ios::fixed) << setprecision(3) << s << endl;
	}
	return 0;
}
