#include<iostream>
using namespace std;
int main()
{
	int i,j,s,a[50];
	cout << "ÊäÈë·¶Î§£º";
	cin >> j;
	for (i = 0;i < j;i++)
		cin >> a[i];
	for (i = 0;i < j;i++)
	{
		s = a[i] * a[i];
		cout << s << endl;
	}
	return 0;
}
