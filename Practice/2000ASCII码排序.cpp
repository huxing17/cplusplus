#include<iostream>
using namespace std;

int main()
{
	char a, b, c;
	while (cin >> a >> b >> c)
	{
		if (a > b)
		{
			char t = a;
			a = b;
			b = t;
		}
		if (b > c)
		{
			char t = b;
			b = c;
			c = t;
		}
		if (a > b)
		{
			char t = a;
			a = b;
			b = t;
		}
		cout << a << " " << b << " " << c << endl;
	}
}
