#include<iostream>
using namespace std;
int main()
{
	int n, p;
	cout << "ÊäÈëÕý·½ÐÎµÄ±ß³¤£º";
	cin >> n;
	for (p = 0;p < n;p++)
		cout << string(n, '#')<<endl;
	return 0;
}
