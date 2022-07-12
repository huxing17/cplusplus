#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    bool Comp(const string & s1, const string & s2);
    vector<string>v;
    string t, s;
    while (cin >> s)
    {
        t = s;
        reverse(t.begin(), t.end());
        if (t == s)
        {
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end(), Comp);
    for (int i = 0;i < v.size();i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}

bool Comp(const string& s1, const string& s2)
{
    return s1.length() != s2.length() ? s1.length() < s2.length() : s1 < s2;
}
