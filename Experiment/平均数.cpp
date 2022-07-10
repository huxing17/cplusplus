#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, n, x;
	float s, aver;
	for (n;cin >> n;)
	{
		for (i = 0, s = 0;i < n;i++)
		{
			cin >> x;
			s = s + x;
		}
		aver = s / n;
		cout << setiosflags(ios::fixed) << setprecision(3) << aver << endl;
	}
	return 0;
}
