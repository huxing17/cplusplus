#include<iostream>
#include<string>
using namespace std;
int main()
{	
	string data;
	char key[100];
	int i, n, len;
	getline(cin, data);
	cin >> key;
	len = strlen(key);
	for (i = 0;data[i] != 0;++i)
	{
		n = data[i] + key[i % len] - '0';
		if (n > 122)
			n = n % 122 + 31;
		data[i] = n;
	}
	cout << data;
	return 0;
}
