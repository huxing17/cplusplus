#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	bool m(string & a, string & b);
	vector<string> a;
	string s;
	int i;
	while (cin >> s)
		a.push_back(s);
	sort(a.begin(), a.end(), m);
	for (i = 0; i < a.size(); i++)
		cout << a[i] << endl;
	return 0;
}

bool m(string& a, string& b)
{
	int n1, n2;
	if (a.length() != b.length())
		return a.length() < b.length();
	n1 = count(a.begin(), a.end(), '1');
	n2 = count(b.begin(), b.end(), '1');
	if (n1 != n2)
		return n1 < n2;
	return a < b;
}
