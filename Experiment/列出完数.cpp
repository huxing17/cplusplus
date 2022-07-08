#include<iostream>
using namespace std;
int main()
{
	int n;
	for (n;cin >> n;)
	{
		cout << n << ":";
		if (n > 1 && n < 6)
			cout << endl;
		if (n >= 6 && n < 28)
			cout << " 6" << endl;
		if (n >= 28 && n < 496)
			cout << " 6 28" << endl;
		if (n >= 496 && n < 8128)
			cout << " 6 28 496" << endl;
		if (n >= 8128 && n <= 10000)
			cout << " 6 28 496 8128" << endl;
	}
	return 0;
}
