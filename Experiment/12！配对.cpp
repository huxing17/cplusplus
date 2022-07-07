#include<iostream>
#include<set>
using namespace std;

int main()
{
	int compute();
	multiset<int> s;
	set<int>::iterator it;
	int n, sum = 0;
	while (cin >> n)
	{
		if (compute() % n == 0)
		{
			it = s.find(compute() / n);
			if (it != s.end())
			{
				sum++;
				s.erase(it);
			}
			else
				s.insert(n);
		}
	}
	cout << sum << endl;
}

int compute()
{
	int sum = 1;
	for (int i = 1;i <= 12;i++)
	{
		sum *= i;
	}
	return sum;
}
