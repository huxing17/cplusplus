/*#include<iostream>
using namespace std;
int main()
{
	int i, j, k;
	char c;
	cout << "输入一个字符：";
	cin >> c;
	for (i = 0;i < 7;i++)
	{
		for (j = 1;j < 7 - i;j++)
			cout << ' ';
		for (k = 0;k < 2 * i + 1;k++)
		    cout << c;
		cout << endl;
	}
	return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
	int i;
	char c;
	cout << "输入一个字符：";
	cin >> c;
	for (i = 0;i < 7;i++)
	{
		cout<<string(7 - i, ' ');
		cout << string(2 * i + 1, c);
		cout << endl;
	}
	return 0;
}
