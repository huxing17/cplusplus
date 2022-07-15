#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
	int n, m, i;
	double a[100], max;
	cin >> n;
	while (n--) {
		cin >> m;
		for (i = 0; i < m; i++)
			cin >> a[i];
		max = a[0];
		for (i = 1; i < m; i++)
			if (a[i] > max)
				max = a[i];
		cout << fixed << setprecision(2) << max << endl;
	}
	return 0;
}
