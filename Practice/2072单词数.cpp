#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	string s, s1;
	set<string> set1;
	while (getline(cin, s))
	{
		if (s[0] == '#')
			break;
		for (int i = 0; i <= s.size() - 1; i++)
		{
			if (s[i] != ' ')
				s1 = s1 + s[i];
			if ((s[i] == ' ' && !s1.empty()) || (i == s.size() - 1 && !s1.empty()))
			{
				set1.insert(s1);
				s1.clear();
			}
		}
		cout << set1.size() << endl;
		set1.clear();
	}
	return 0;
}
