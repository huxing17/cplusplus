#include<iostream>
using namespace std;
int main()
{
	long long int factorial(int n);
	long long int s;
	int i, n;
	for (n;cin >> n;)
	{
		s = factorial(n);
		for (i = 0;s != 0;i++)
			s = s / 10;
		cout << i << endl;
	}
	return 0;
}

long long int factorial(int n)
{
	long long int i, s;
	for (i = 1, s = 1;i <= n;i++)
		s = s * i;
	return(s);
}
