#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, p;
	cout << "ÊäÈë¾ØÐÎµÄ¸ß£º";
	cin >> n;
	for (p = 0;p < n;p++)
		cout << string(20, '@') << endl;
	return 0;
}
