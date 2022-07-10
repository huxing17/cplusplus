#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int b, i, j, n;
	for (n;cin >> n;)
	{
		cout << setw(11) << n << "-->";
		j = 1, b = 0;
		while (n != 0)
		{
			i = n % 2;
			b = b + i * j;
			n = n / 2;
			j = j * 10;
		}
		cout << b << endl;
	}
	return 0;
}
