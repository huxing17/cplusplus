#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char month[10], year[10];
	int day, i = 0;
	cin >> month >> day >> year;
	if (day == 25)
		i++;
	if (day == 25 && year[strlen(year) - 1] == '*')
		i++;
	cout << i << endl;
	return 0;
}
