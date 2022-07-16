#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string s;
	double n, m, sum = 0;
	while (cin >> s >> n >> m)
		sum += m * n;
	cout << fixed << setprecision(1) << sum << endl;
	return 0;
}
