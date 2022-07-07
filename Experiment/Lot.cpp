/*#include <iostream>
using namespace std;
int main()
{
	int groups(int n);
	int n;
	for (n;cin >> n;)
		cout << groups(n) << endl;
    return 0;
}
int groups(int n)
{
	int t;
	if (n == 1 || n == 2)
		t = 0;
	else if (n == 3)
		t = 1;
	else if (n % 2 == 0)
		t = groups(n / 2) + groups(n / 2);
	else
		t = groups(n / 2) + groups(n / 2 + 1);
	return t;
}*/

#include <iostream>
using namespace std;
class Lot
{
private:
	int n, t;
public:
	int groups(int n);
};

int Lot::groups(int n)
{
	if (n == 1 || n == 2)
		t = 0;
	else if (n == 3)
		t = 1;
	else if (n % 2 == 0)
		t = groups(n / 2) + groups(n / 2);
	else
		t = groups(n / 2) + groups(n / 2 + 1);
	return t;
}

int main()
{
	int n;
	Lot g;
	for (n;cin >> n;)
		cout << g.groups(n) << endl;
	return 0;
}
