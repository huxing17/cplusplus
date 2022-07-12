#include<iostream>
using namespace std;
int main()
{
	int judge_3(int n);
	int judge_5(int n);
	int judge_7(int n);
	int n, a, b, c;
	for (n;cin >> n;)
	{
		a = judge_3(n);
		b = judge_5(n);
		c = judge_7(n);
		cout << n << "-->";
		switch (a + b + c)
		{
		case 0:cout << "None";break;
		case 3:cout << "3";break;
		case 5:cout << "5";break;
		case 7:cout << "7";break;
		case 8:cout << "3,5";break;
		case 10:cout << "3,7";break;
		case 12:cout << "5,7";break;
		case 15:cout << "3,5,7";break;
		}
		cout << endl;
	}
	return 0;
}

int judge_3(int n)
{
	if (n % 3 == 0)
		return(3);
	else
		return(0);
}

int judge_5(int n)
{
	if (n % 5 == 0)
		return(5);
	else
		return(0);
}

int judge_7(int n)
{
	if (n % 7 == 0)
		return(7);
	else
		return(0);
}
