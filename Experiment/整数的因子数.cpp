/*#include<iostream>
using namespace std;
int main()
{
	int i, n, s;
	for (n;cin >> n;)
	{
		cout << n << ":";
		for (i = 1, s = 0;i <= n;i++)
		{
			if (n % i == 0)
				s++;
		}
		cout << s << endl;
	}
	return 0;
}*/

#include<iostream>
using namespace std;
class Factors
{
private:
	int i, n, s;
public:
	int count(int n);
};

int Factors::count(int n)
{
	cout << n << ":";
	for (i = 1, s = 0;i <= n;i++)
	{
		if (n % i == 0)
			s++;
	}
	cout << s << endl;
	return 0;
}

int main()
{
	int n;
	Factors f;
	for(n;cin>>n;)
		f.count(n);
	return 0;
}
