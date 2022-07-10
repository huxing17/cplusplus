#include<iostream>
using namespace std;
class PrimeNumber
{
private:
	int n, i;
public:
	int judge_threefigures(int n);
	int judge_symmetry(int n);
	int judge_prime(int n);
};

int PrimeNumber::judge_threefigures(int n)
{
	if (n >=100 && n < 1000)
		return true;
	else
		return false;
}

int PrimeNumber::judge_symmetry(int n)
{
	int a, c;
	a = n / 100;
	c = n % 10;
	if (a == c)
		return true;
	else
		return false;
}

int PrimeNumber::judge_prime(int n)
{
	for (i = 2;i <= n / 2;i++)
	{
		if (n % i == 0)
			return false;
		else
			return true;
	}
}

int main()
{
	int n;
	PrimeNumber p;
	for (n;cin >> n;)
	{
		if (p.judge_threefigures(n) && p.judge_symmetry(n) && p.judge_prime(n))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}

/*#include<iostream>
using namespace std;
int main()
{
	for (n;cin >> n;)
	{
		cout << (n >= 100 &.& n < 1000 && n / 100 == n % 10 && prime(n) ? "Yes" : "No");
	}
	return 0;
}
int prime(int n)
{
	int i;
	for (i = 2;i <= n / 2;i++)
	{
		if (n % i == 0)
			return false;
		else
			return true;
	}
}*/
