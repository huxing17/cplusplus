#include<iostream>
using namespace std;
int main()
{
	int judge(int n);
	int i, j, n, t;
	for (n;cin >> n;)
	{
		t = 0;
		for (i = 2;i < n;i++)
		{
			if (n % i == 0 && judge(i) && judge(n / i))
				t = 1;break;
		}
		if (t == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}

int judge(int n)
{
	int i;
	for (i = 2;i <= sqrt(n);i++)
		if (n % i == 0)
			break;
	if (i > sqrt(n))
		return 1;
	else
		return 0;
}
